extern int fn_82EE9CF8();
extern int fn_82EE9E20();
extern int fn_82EE9EA8();


unsigned __int64 fn_82EEA360(int param_1,__int64 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  
  uVar7 = 1;
  RtlEnterCriticalSection();
  while (*(__int64 *)(param_1 + 0x820) <= param_2) {
    iVar3 = (*(int *)(param_1 + 0x81c) + 7) * 4;
    uVar6 = *(unsigned int *)(iVar3 + param_1);
    uVar5 = (unsigned __int64)uVar6;
    if (uVar5 == 0) {
      uVar6 = *(int *)(param_1 + 0x81c) + 1;
      *(unsigned int *)(param_1 + 0x81c) = uVar6;
      if (0x1ff < uVar6) {
        *(unsigned int *)(param_1 + 0x81c) = 0;
      }
      *(__int64 *)(param_1 + 0x820) = *(__int64 *)(param_1 + 0x820) + 0x14;
    }
    else {
      *(unsigned int *)(iVar3 + param_1) = *(unsigned int *)(uVar6 + 8);
LAB_82eea448:
      *(int *)(param_1 + 0x828) = *(int *)(param_1 + 0x828) + -1;
      piVar4 = (int *)uVar5;
      *param_3 = *piVar4;
      *piVar4 = 0;
      if (piVar4[7] != 0) {
        fn_82EE9E20(param_1,*(unsigned __int64 *)(piVar4 + 8));
        *(unsigned __int64 *)((int)uVar5 + 0x20) = 0;
      }
      fn_82EE9CF8(param_1 + 0x82c,uVar5);
      if (*param_3 != 0) {
        uVar7 = 0;
        *(__int64 *)(param_1 + 0x1018) = param_2;
LAB_82eea4c8:
        RtlLeaveCriticalSection(param_1);
        return uVar7;
      }
    }
  }
  uVar6 = *(unsigned int *)(param_1 + 0x830);
  uVar5 = (unsigned __int64)uVar6;
  if ((uVar5 == 0) || (param_2 < *(__int64 *)(uVar6 + 0x10))) {
    if ((*(int *)(param_1 + 0x828) == 0) && (*(__int64 *)(param_1 + 0x1018) + 100000000 < param_2))
    {
      uVar7 = 2;
    }
    goto LAB_82eea4c8;
  }
  iVar3 = *(int *)(uVar6 + 8);
  iVar1 = *(int *)(uVar6 + 0xc);
  iVar2 = iVar1;
  if ((iVar3 != 0) && (iVar2 = iVar3, iVar1 != 0)) {
    iVar2 = iVar1;
    if (*(__int64 *)(iVar3 + 0x10) < *(__int64 *)(iVar1 + 0x10)) {
      iVar2 = iVar3;
      iVar3 = iVar1;
    }
    iVar2 = fn_82EE9EA8(param_1,iVar2,iVar3);
  }
  *(int *)(param_1 + 0x830) = iVar2;
  goto LAB_82eea448;
}

