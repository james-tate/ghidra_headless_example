extern class Monkey* makeMonkey();
extern class Lion* makeLion();
extern class Deer* makeDeer();
extern class Bear* makeBear();

int main(void){
  Monkey *m = makeMonkey();
  Lion *l = makeLion();
  Bear *b = makeBear();
  Deer *d = makeDeer();
}

//analyzeHeadless $(pwd) names -import $(pwd)/*.so -recursive -scriptPath /home/james/ghidra_scripts/ -postScript test.py | grep Found