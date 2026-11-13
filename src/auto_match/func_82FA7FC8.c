extern int fn_82A1E968();
extern unsigned int lbl_8326459C;


unsigned __int64 fn_82FA7FC8(unsigned int *param_1,int param_2,int *param_3)

{
  int iVar1;
  unsigned __int64 uVar2;
  int *piVar3;
  int *piVar4;
  unsigned int *puVar5;
  unsigned int uVar6;
  __int64 lVar7;
  __int64 lStack_40;
  __int64 lStack_38;
  
  puVar5 = param_1 + 3;
  RtlEnterCriticalSection(puVar5);
  for (piVar4 = (int *)*param_1; (piVar4 != (int *)param_1[1] && (*piVar4 != param_2));
      piVar4 = piVar4 + 10) {
  }
  uVar6 = -(unsigned int)((int *)param_1[1] != piVar4) & (unsigned int)(piVar4 + 2);
  if (uVar6 == 0) {
    RtlLeaveCriticalSection(puVar5);
    uVar2 = 2;
  }
  else {
    piVar4 = (int *)(uVar6 - 4);
    piVar3 = param_3 + -1;
    lVar7 = 5;
    do {
      piVar4 = piVar4 + 1;
      piVar3 = piVar3 + 1;
      *piVar3 = *piVar4;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    if (((0 < param_3[2]) || (0 < param_3[1])) || (0 < param_3[3])) {
      fn_82A1E968(&lStack_40);
      iVar1 = (int)((float)(lStack_40 - *(__int64 *)(uVar6 + 0x18)) / lbl_8326459C);
      lStack_38 = (__int64)iVar1;
      *param_3 = iVar1 + *param_3;
    }
    RtlLeaveCriticalSection(puVar5);
    uVar2 = 1;
  }
  return uVar2;
}

