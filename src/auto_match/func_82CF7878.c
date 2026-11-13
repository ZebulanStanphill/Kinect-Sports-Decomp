extern int fn_82CF7AF0();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_82CF7878(int param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  int iVar6;
  __int64 lVar7;
  __int64 lVar8;
  unsigned int *puVar9;
  int iVar10;
  int iVar11;
  struct { unsigned int first; unsigned int second; } stack_pair_30;


  iVar11 = param_1 + 0x124;
  RtlEnterCriticalSection(iVar11);
  uVar4 = param_2 + param_3;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  if (uVar4 == *(unsigned int *)(param_1 + 0xc)) {
    *(unsigned int *)(param_1 + 0xc) = *(unsigned int *)(param_1 + 0xc) - param_3;
    if (*(int *)(param_1 + 0x1c) != 0) {
      while (iVar6 = *(int *)(param_1 + 0x1c) * 8 + *(int *)(param_1 + 0x18),
            *(int *)(iVar6 + -4) + *(int *)(iVar6 + -8) == param_2) {
        *(unsigned int *)(param_1 + 0xc) =
             *(unsigned int *)(*(int *)(param_1 + 0x1c) * 8 + *(int *)(param_1 + 0x18) + -8);
        iVar6 = *(int *)(param_1 + 0x1c) + -1;
        *(int *)(param_1 + 0x1c) = iVar6;
        if (iVar6 == 0) {
          RtlLeaveCriticalSection(iVar11);
          return;
        }
      }
    }
  }
  else {
    if (*(unsigned int *)(param_1 + 0x1c) == 0) {
      puVar9 = *(unsigned int **)(param_1 + 0x18);
      *(unsigned int *)(param_1 + 0x1c) = 1;
      *puVar9 = param_2;
      puVar9[1] = param_3;
      RtlLeaveCriticalSection(iVar11);
      return;
    }
    uVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1c) - 1;
    iVar6 = (int)uVar5;
    if (-1 < iVar6) {
      uVar1 = *(unsigned int *)(param_1 + 0x18);
      lVar7 = (uVar5 & 0x1fffffff) * 8 + (unsigned __int64)uVar1;
      do {
        if (*(unsigned int *)lVar7 < param_2) {
          iVar10 = (int)uVar5;
          if (-1 < iVar10) {
            iVar3 = iVar10 * 8;
            iVar2 = iVar3 + uVar1;
            if (*(int *)(iVar2 + 4) + *(int *)(iVar3 + uVar1) == param_2) {
              iVar6 = *(int *)(iVar2 + 4) + param_3;
              *(int *)(iVar2 + 4) = iVar6;
              if ((iVar10 < *(int *)(param_1 + 0x1c) + -1) &&
                 (iVar3 = *(unsigned int *)(param_1 + 0x18) + iVar3, uVar4 == *(unsigned int *)(iVar3 + 8))) {
                *(int *)(iVar2 + 4) = *(int *)(iVar3 + 0xc) + iVar6;
                lVar8 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1c) - 1;
                *(int *)(param_1 + 0x1c) = (int)lVar8;
                lVar7 = (uVar5 + 1 & 0x1fffffff) * 8 + (unsigned __int64)*(unsigned int *)(param_1 + 0x18);
                lVar8 = (lVar8 - (uVar5 + 1) & 0x1fffffff) * 8;
                if (0 < (int)lVar8) {
                  lVar8 = ((lVar8 - 1U & 0xffffffff) >> 2) + 1;
                  do {
                    *(unsigned int *)lVar7 = ((unsigned int *)lVar7)[2];
                    lVar7 = lVar7 + 4;
                    lVar8 = lVar8 + -1;
                  } while (lVar8 != 0);
                  RtlLeaveCriticalSection(iVar11);
                  return;
                }
              }
              goto LAB_82cf7ad8;
            }
          }
          break;
        }
        uVar5 = uVar5 - 1;
        lVar7 = lVar7 + -8;
      } while (-1 < (__int64)uVar5);
    }
    if (((int)uVar5 < iVar6) &&
       (puVar9 = (unsigned int *)(((int)uVar5 + 1) * 8 + *(int *)(param_1 + 0x18)), *puVar9 == uVar4)) {
      *puVar9 = param_2;
      puVar9[1] = puVar9[1] + param_3;
      RtlLeaveCriticalSection(iVar11);
      return;
    }
    stack_pair_30.first = param_2;
    stack_pair_30.second = param_3;
    fn_82CF7AF0(param_1 + 0x18,0,uVar5 + 1,0,&stack_pair_30.first,1);
  }
LAB_82cf7ad8:
  RtlLeaveCriticalSection(iVar11);
  return;
}
