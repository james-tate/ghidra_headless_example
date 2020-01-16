instructions = currentProgram.getListing().getInstructions(1)

for instruction in instructions:
	mnemonic = instruction.getMnemonicString()

	if mnemonic == "CALL":
		funcAddress = instruction.getOpObjects(0)[0]
		func = getFunctionContaining(toAddr(funcAddress.getOffset()))
		callingFunc = getFunctionContaining(instruction.getAddress())
		if func is not None:
			if func.getName() == "setName":
				inst = instruction.getPrevious()
				instAddr = inst.getAddress()
				while(getFunctionContaining(instAddr) == callingFunc ):
					numOps = getInstructionAt(instAddr).getNumOperands()
					for i in range(numOps):
						for op in getInstructionAt(instAddr).getOperandReferences(i):
							if op.getReferenceType().isData():
								data = getDataAt(op.getToAddress())
								if data is not None:
									if data.getDataType().toString() == "string":
										print "Found name of the {}() to be {} in {}".format(
											callingFunc, 
											data,
											currentProgram)
					inst = inst.getPrevious()
					instAddr = inst.getAddress()