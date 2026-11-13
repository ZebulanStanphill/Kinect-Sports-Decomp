extern int fn_82A1E228();
extern int fn_82A1FBD8();
extern unsigned int lbl_8315D2F0;
extern unsigned int uStack_20;


void fn_82A212D8(unsigned __int64 param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  unsigned __int64 uStack_20;
  
  RtlEnterCriticalSection();
  iVar1 = *param_2;
  piVar2 = (int *)param_2[1];
  *piVar2 = iVar1;
  *(int **)(iVar1 + 4) = piVar2;
  fn_82A1E228(&uStack_20);
  *(unsigned char *)((int)param_2 + 0x1a) = 1;
  param_2[4] = (int)(uStack_20 / 10000000) - (int)lbl_8315D2F0;
  fn_82A1FBD8(param_1,param_2);
  RtlLeaveCriticalSection();
  return;
}

