extern int fn_8267C8D8();
extern int fn_8267CB10();
extern int fn_8267D7C8();
extern int fn_8267D9C0();
extern int fn_8267EC58();
extern int fn_8267ECD0();


unsigned int fn_8267F298(int param_1,__int64 param_2)

{
  unsigned int uVar1;
  int iVar2;
  int aiStack_30;
  
  fn_8267C8D8(param_1 + 0x18);
  if ((__int64)((unsigned __int64)*(unsigned int *)(param_1 + 0x14) - param_2) < 0) {
    *(unsigned int *)(param_1 + 0x14) = 0;
  }
  else {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) - (int)param_2;
  }
  fn_8267CB10(param_1 + 0x2c);
  aiStack_30 = 0;
  fn_8267D7C8(param_1,&aiStack_30);
  fn_8267D9C0(param_1 + 0x18);
  iVar2 = aiStack_30;
  if (aiStack_30 != 0) {
    fn_8267ECD0(aiStack_30);
  }
  uVar1 = *(unsigned int *)(param_1 + 0x14);
  if (iVar2 != 0) {
    fn_8267EC58(iVar2);
  }
  return uVar1;
}

