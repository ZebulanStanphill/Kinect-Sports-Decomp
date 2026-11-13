extern int fn_8267C8D8();
extern int fn_8267CB10();
extern int fn_8267D7C8();
extern int fn_8267D9C0();
extern int fn_8267EC58();
extern int fn_8267ECD0();


void fn_8267FB90(int param_1)

{
  int iVar1;
  int aiStack_30;
  
  fn_8267C8D8(param_1 + 0x14);
  *(unsigned char *)(param_1 + 0x10) = 1;
  *(unsigned char *)(param_1 + 0x11) = 0;
  fn_8267CB10(param_1 + 0x28);
  aiStack_30 = 0;
  fn_8267D7C8(param_1,&aiStack_30);
  fn_8267D9C0(param_1 + 0x14);
  iVar1 = aiStack_30;
  if (aiStack_30 != 0) {
    fn_8267ECD0(aiStack_30);
    fn_8267EC58(iVar1);
  }
  return;
}

