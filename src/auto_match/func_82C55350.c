extern int fn_82A29A38();
extern int fn_82C54E88();
extern int fn_82C56398();


unsigned __int64 fn_82C55350(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  int *piVar6;
  int *piVar7;
  unsigned __int64 uVar8;
  int iVar9;
  
  RtlEnterCriticalSection(*param_1);
  uVar4 = 0;
  uVar5 = (unsigned __int64)(unsigned int)param_1[7];
  uVar8 = -(unsigned __int64)(uVar5 != 0xffffffffffffffff) & uVar5;
  iVar9 = (int)uVar8;
  if (uVar8 < (unsigned int)param_1[3]) {
    lVar3 = (uVar8 & 0x3fffffff) << 2;
    do {
      iVar9 = (int)uVar8;
      if ((uVar8 & 0xffffffff) < (unsigned __int64)(unsigned int)param_1[6]) {
        uVar1 = *(unsigned int *)((int)lVar3 + param_1[4]);
      }
      else {
        uVar1 = 0;
      }
      if ((uVar1 & 1) == 0) {
        if ((unsigned __int64)(unsigned int)param_1[6] <= (uVar8 & 0xffffffff)) {
          fn_82A29A38();
        }
        if ((uVar8 & 0xffffffff) < (unsigned __int64)(unsigned int)param_1[6]) {
          *(unsigned int *)((int)((uVar8 & 0xffffffff) << 2) + param_1[4]) = (int)(char)uVar1 | 1;
        }
        if (((unsigned __int64)(unsigned int)param_1[3] <= (uVar8 & 0xffffffff)) ||
           (uVar4 = (unsigned __int64)*(unsigned int *)((int)((uVar8 & 0xffffffff) << 2) + param_1[1]), uVar4 == 0)
           ) {
          uVar4 = fn_82C56398((unsigned __int64)(unsigned int)param_1[9] + 8,param_1[8],0xffffffff82196582);
          if ((unsigned __int64)(unsigned int)param_1[3] <= (uVar8 & 0xffffffff)) {
            fn_82A29A38();
          }
          if ((uVar8 & 0xffffffff) < (unsigned __int64)(unsigned int)param_1[3]) {
            *(int *)((int)((uVar8 & 0xffffffff) << 2) + param_1[1]) = (int)uVar4;
          }
        }
        if ((uVar8 & 0xffffffff) == uVar5) {
          param_1[7] = iVar9 + 1;
        }
        if ((uVar4 & 0xffffffff) != 0) goto LAB_82c55590;
        break;
      }
      uVar8 = uVar8 + 1;
      iVar9 = (int)uVar8;
      lVar3 = lVar3 + 4;
    } while ((uVar8 & 0xffffffff) < (unsigned __int64)(unsigned int)param_1[3]);
  }
  piVar6 = param_1 + 1;
  uVar1 = fn_82C54E88(piVar6,0);
  if (-1 < (int)uVar1) {
    piVar7 = param_1 + 4;
    uVar2 = fn_82C54E88(piVar7,0);
    if (-1 < (int)uVar2) {
      uVar4 = fn_82C56398((unsigned __int64)(unsigned int)param_1[9] + 8,param_1[8],0xffffffff82196582);
      if ((uVar4 & 0xffffffff) != 0) {
        param_1[7] = iVar9 + 1;
        if ((unsigned int)param_1[6] <= uVar2) {
          fn_82A29A38();
        }
        if (uVar2 < (unsigned int)param_1[6]) {
          *(unsigned int *)(uVar2 * 4 + *piVar7) = 1;
        }
        if ((unsigned int)param_1[3] <= uVar1) {
          fn_82A29A38();
        }
        if (uVar1 < (unsigned int)param_1[3]) {
          *(int *)(uVar1 * 4 + *piVar6) = (int)uVar4;
          RtlLeaveCriticalSection(*param_1);
          return uVar4;
        }
        goto LAB_82c55590;
      }
      if (param_1[6] != 0) {
        iVar9 = param_1[6] + -1;
        param_1[6] = iVar9;
        *(unsigned int *)(iVar9 * 4 + *piVar7) = 0;
      }
    }
    if (param_1[3] != 0) {
      iVar9 = param_1[3] + -1;
      param_1[3] = iVar9;
      *(unsigned int *)(iVar9 * 4 + *piVar6) = 0;
    }
  }
LAB_82c55590:
  RtlLeaveCriticalSection(*param_1);
  return uVar4;
}

