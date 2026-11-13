extern int fn_82825AD0();
extern int fn_82829120();
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;


void fn_82670EC8(int param_1,unsigned int param_2)

{
  unsigned int uStack0000001c;
  int aiStack_20 [2];
  
  uStack0000001c = param_2;
  fn_82829120(aiStack_20,param_1 + 100,&stack0x0000001c);
  if (aiStack_20[0] != *(int *)(param_1 + 0x68)) {
    if (*(unsigned int *)(aiStack_20[0] + 0x10) < 2) {
      fn_82825AD0(aiStack_20,param_1 + 100);
    }
    else {
      *(unsigned int *)(aiStack_20[0] + 0x10) = *(unsigned int *)(aiStack_20[0] + 0x10) - 1;
    }
  }
  return;
}

