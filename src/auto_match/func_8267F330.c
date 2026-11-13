extern int fn_8267C8D8();
extern int fn_8267CB08();
extern int fn_8267D7C8();
extern int fn_8267D9C0();
extern int fn_8267EC58();
extern int fn_8267ECD0();


/* WARNING: Removing unreachable block (ram,0x8267f1a8) */

unsigned __int64 fn_8267F330(int param_1)

{
  int iVar1;
  int aiStack_30 [12];
  
  fn_8267C8D8(param_1 + 0xc);
  if ((__int64)((unsigned __int64)*(unsigned int *)(param_1 + 8) - 1) < 0) {
    *(unsigned int *)(param_1 + 8) = 0;
  }
  else {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  }
  fn_8267CB08();
  aiStack_30[0] = 0;
  fn_8267D7C8(param_1 + -0xc,aiStack_30);
  fn_8267D9C0(param_1 + 0xc);
  iVar1 = aiStack_30[0];
  if (aiStack_30[0] != 0) {
    fn_8267ECD0(aiStack_30[0]);
    fn_8267EC58(iVar1);
  }
  return 1;
}

