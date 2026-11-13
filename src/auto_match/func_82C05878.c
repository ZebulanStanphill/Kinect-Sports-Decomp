extern unsigned int *auStack_70;
extern int fn_82A29AC0();
extern int fn_82A2A108();
extern int fn_82F68CC0();


unsigned __int64 fn_82C05878(int *param_1,__int64 param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  int *piVar1;
  unsigned __int64 uVar2;
  int iVar4;
  int iVar5;
  unsigned __int64 uVar3;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  __int64 lVar11;
  unsigned __int64 uVar12;
  int (**pcVar13)();
  unsigned int auStack_70 [28];
  
  if ((param_1[0x1e] & 8U) == 0) {
    param_1[0xc] = 0;
    uVar2 = 0;
    *param_4 = 0;
    uVar6 = *(unsigned __int64 *)(param_1 + 0x16);
    uVar9 = *(unsigned __int64 *)(param_1 + 0x10);
    uVar7 = *(unsigned __int64 *)(param_1 + 0xe);
    if (uVar6 < uVar7 + uVar9) {
      uVar12 = param_3;
      if ((uVar7 - uVar6) + uVar9 < (param_3 & 0xffffffff)) {
        uVar12 = ((uVar7 & 0xffffffff) - (uVar6 & 0xffffffff)) + (uVar9 & 0xffffffff);
      }
      if ((uVar12 & 0xffffffff) != 0) {
        while (uVar6 = *(unsigned __int64 *)(param_1 + 0x16),
              uVar6 < (unsigned __int64)(*(__int64 *)(param_1 + 0x10) + *(__int64 *)(param_1 + 0xe))) {
          if (((uVar6 < *(unsigned __int64 *)(param_1 + 0x12)) ||
              (*(__int64 *)(param_1 + 0x14) + *(unsigned __int64 *)(param_1 + 0x12) <= uVar6)) &&
             ((uVar2 = (**(int (***)())(*param_1 + 0x7c))(param_1), (int)uVar2 < 0 ||
              ((uVar2 = (**(int (***)())(*param_1 + 0x78))(param_1), (int)uVar2 < 0 ||
               (param_1[0xc] != 0)))))) goto LAB_82c05cd4;
          uVar9 = (unsigned __int64)(unsigned int)param_1[0x1c];
          trapDoubleWordImmediate(6,(unsigned __int64)(unsigned int)param_1[0x1a],0);
          uVar7 = (unsigned __int64)(*(__int64 *)(param_1 + 0x16) - *(__int64 *)(param_1 + 0x12)) /
                  (unsigned __int64)(unsigned int)param_1[0x1a];
          uVar6 = uVar7 & 0xffffffff;
          if (uVar9 < uVar6) {
            uVar10 = 0;
            if (uVar6 != uVar9) {
              do {
                uVar10 = uVar10 + 1;
                param_1[0x20] = *(int *)(param_1[0x20] + 8);
              } while ((uVar10 & 0xffffffff) < (uVar6 - (unsigned int)param_1[0x1c] & 0xffffffff));
            }
          }
          else {
            uVar10 = 0;
            if (uVar9 != uVar6) {
              do {
                uVar10 = uVar10 + 1;
                param_1[0x20] = *(int *)(param_1[0x20] + 4);
              } while ((uVar10 & 0xffffffff) < ((unsigned int)param_1[0x1c] - uVar6 & 0xffffffff));
            }
          }
          iVar4 = (**(int (***)())(*(int *)param_1[0x20] + 0x38))();
          if (iVar4 != 0) break;
          param_1[0x1c] = (int)uVar7;
          if ((unsigned int)param_1[0x1d] <= uVar6) {
            uVar7 = 0;
            do {
              iVar4 = (**(int (***)())(*(int *)param_1[0x21] + 0x30))();
              iVar5 = fn_82A29AC0(param_1[0xb],iVar4,auStack_70,1);
              if (iVar5 == 0) {
                thunk_FUN_82a2b798();
                uVar2 = (**(int (***)())(*param_1 + 0x20))(param_1);
                break;
              }
              (**(int (***)())(*(int *)param_1[0x21] + 0x34))((int *)param_1[0x21],0);
              lVar8 = *(__int64 *)(param_1 + 0x14);
              lVar11 = *(__int64 *)(param_1 + 0x12);
              *(int *)(iVar4 + 8) = (int)(lVar8 + lVar11);
              *(int *)(iVar4 + 0xc) = (int)((unsigned __int64)(lVar8 + lVar11) >> 0x20);
              uVar3 = (**(int (***)())(*(int *)param_1[0x21] + 0x28))();
              iVar4 = fn_82A2A108(param_1[0xb],uVar3,param_1[0x1a],0,iVar4);
              if (iVar4 == 0) {
                iVar4 = thunk_FUN_82a2b798();
                if (iVar4 == 0x26) {
                  piVar1 = (int *)param_1[0x21];
                  pcVar13 = *(int (***)())(*piVar1 + 0x34);
                }
                else {
                  if (iVar4 == 0x3e5) goto LAB_82c05b58;
                  uVar2 = (**(int (***)())(*param_1 + 0x20))(param_1);
                  piVar1 = (int *)param_1[0x21];
                  pcVar13 = *(int (***)())(*piVar1 + 0x34);
                }
                (*pcVar13)(piVar1,1);
              }
LAB_82c05b58:
              uVar7 = uVar7 + 1;
              *(unsigned __int64 *)(param_1 + 0x12) =
                   (unsigned __int64)(unsigned int)param_1[0x1a] + *(__int64 *)(param_1 + 0x12);
              iVar4 = *(int *)(param_1[0x21] + 8);
              param_1[0x1c] = param_1[0x1c] + -1;
              param_1[0x21] = iVar4;
            } while ((uVar7 & 0xffffffff) <= (uVar6 - (unsigned int)param_1[0x1d] & 0xffffffff));
          }
          if ((int)uVar2 < 0) goto LAB_82c05cd4;
          uVar3 = (**(int (***)())(*(int *)param_1[0x20] + 0x30))();
          lVar8 = (**(int (***)())(*(int *)param_1[0x20] + 0x28))((int *)param_1[0x20]);
          auStack_70[0] = 0;
          iVar4 = fn_82A29AC0(param_1[0xb],uVar3,auStack_70,1);
          if ((iVar4 == 0) && (iVar4 = thunk_FUN_82a2b798(), iVar4 != 0x26)) {
            uVar2 = (**(int (***)())(*param_1 + 0x20))(param_1);
          }
          uVar7 = ((*(unsigned __int64 *)(param_1 + 0x16) & 0xffffffff) -
                  (__int64)param_1[0x1a] * (__int64)param_1[0x1c]) -
                  (*(unsigned __int64 *)(param_1 + 0x12) & 0xffffffff);
          uVar6 = (unsigned int)param_1[0x1a] - uVar7;
          if ((uVar12 & 0xffffffff) < (uVar6 & 0xffffffff)) {
            uVar6 = uVar12;
          }
          if (((unsigned __int64)auStack_70[0] < (uVar7 & 0xffffffff)) ||
             (uVar9 = auStack_70[0] - uVar7, uVar9 == 0)) break;
          if ((uVar9 & 0xffffffff) < (uVar6 & 0xffffffff)) {
            uVar6 = uVar9;
          }
          fn_82F68CC0((unsigned __int64)*param_4 + param_2,uVar7 + lVar8,uVar6);
          uVar12 = uVar12 - uVar6;
          *(unsigned __int64 *)(param_1 + 0x16) = (uVar6 & 0xffffffff) + *(__int64 *)(param_1 + 0x16);
          *param_4 = *param_4 + (int)uVar6;
          if (((int)uVar2 < 0) || ((uVar12 & 0xffffffff) == 0)) goto LAB_82c05cd4;
        }
        param_1[0xc] = 1;
      }
LAB_82c05cd4:
      if (((unsigned __int64)*param_4 < (param_3 & 0xffffffff)) || ((int)uVar2 < 0)) {
        param_1[0xc] = 1;
      }
    }
    else {
      uVar2 = 0;
      param_1[0xc] = 1;
    }
  }
  else {
    uVar2 = (**(int (***)())(*param_1 + 0x80))();
  }
  return uVar2;
}

