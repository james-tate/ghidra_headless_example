# ghidra_headless_example

an example of using ghidra's headless scripting

analyzeHeadless $(pwd) names -import $(pwd)/*.so -recursive -scriptPath $(pwd)/build -postScript test.py | grep Found