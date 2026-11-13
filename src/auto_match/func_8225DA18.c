extern int fn_8225E360();
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;


unsigned int fn_8225DA18(int param_1,unsigned int param_2)

{
  unsigned int uVar1;
  unsigned int uStack0000001c;
  int aiStack_20 [4];
  
  uStack0000001c = param_2;
  fn_8225E360(aiStack_20,param_1,&stack0x0000001c);
  if (aiStack_20[0] == *(int *)(param_1 + 4)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(unsigned int *)(aiStack_20[0] + 0x10);
  }
  return uVar1;
}

