extern unsigned int *auStack_80;
extern int fn_82A29AC0();
extern int fn_82A2A108();
extern int fn_82F68CC0();


unsigned __int64 fn_82C05CF8(int *param_1,__int64 param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  int *piVar1;
  __int64 lVar2;
  int iVar6;
  unsigned __int64 uVar3;
  __int64 lVar4;
  __int64 lVar5;
  int iVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  unsigned int uVar13;
  int *piVar14;
  unsigned int auStack_80 [32];
  
  param_1[0xc] = 0;
  *param_4 = 0;
  uVar8 = *(unsigned __int64 *)(param_1 + 0x16);
  uVar10 = *(unsigned __int64 *)(param_1 + 0x10);
  uVar9 = *(unsigned __int64 *)(param_1 + 0xe);
  uVar11 = 0;
  if (uVar8 < uVar9 + uVar10) {
    uVar12 = param_3;
    if ((uVar9 - uVar8) + uVar10 < (param_3 & 0xffffffff)) {
      uVar12 = ((uVar9 & 0xffffffff) - (uVar8 & 0xffffffff)) + (uVar10 & 0xffffffff);
    }
    if ((uVar12 & 0xffffffff) != 0) {
LAB_82c05d88:
      if (*(unsigned __int64 *)(param_1 + 0x16) <
          (unsigned __int64)(*(__int64 *)(param_1 + 0x10) + *(__int64 *)(param_1 + 0xe))) {
        param_1[0x1c] = 0;
        param_1[0x20] = param_1[0x21];
        if (param_1[0x1b] != 0) {
          do {
            uVar9 = *(unsigned __int64 *)(param_1 + 0x16);
            uVar8 = (**(int (***)())(*(int *)param_1[0x20] + 0x40))();
            if (uVar8 <= uVar9) {
              uVar9 = *(unsigned __int64 *)(param_1 + 0x16);
              lVar2 = (**(int (***)())(*(int *)param_1[0x20] + 0x40))();
              if (uVar9 < lVar2 + (unsigned __int64)(unsigned int)param_1[0x1a]) break;
            }
            if (uVar9 < *(unsigned __int64 *)(param_1 + 0x12)) {
              iVar6 = *(int *)(param_1[0x20] + 4);
            }
            else {
              iVar6 = *(int *)(param_1[0x20] + 8);
            }
            iVar7 = param_1[0x1c];
            param_1[0x20] = iVar6;
            param_1[0x1c] = iVar7 + 1U;
          } while (iVar7 + 1U < (unsigned int)param_1[0x1b]);
        }
        if ((unsigned int)param_1[0x1b] <= (unsigned int)param_1[0x1c]) {
          uVar11 = (**(int (***)())(*param_1 + 0x7c))(param_1);
          if ((((int)uVar11 < 0) ||
              (uVar11 = (**(int (***)())(*param_1 + 0x78))(param_1), (int)uVar11 < 0)) ||
             (param_1[0xc] != 0)) goto LAB_82c0621c;
LAB_82c0620c:
          if ((uVar12 & 0xffffffff) == 0) goto LAB_82c0621c;
          goto LAB_82c05d88;
        }
        iVar6 = (**(int (***)())(*(int *)param_1[0x20] + 0x38))();
        if (iVar6 != 0) goto LAB_82c06218;
        param_1[0x21] = param_1[0x20];
        uVar3 = (**(int (***)())(*(int *)param_1[0x20] + 0x40))();
        piVar14 = (int *)param_1[0x20];
        uVar13 = 0;
        *(unsigned __int64 *)(param_1 + 0x12) = uVar3;
        if (param_1[0x1b] != 1) {
          do {
            lVar2 = (**(int (***)())(*piVar14 + 0x40))(piVar14);
            piVar14 = (int *)piVar14[2];
            piVar1 = (int *)param_1[0x20];
            uVar8 = (**(int (***)())(*piVar14 + 0x48))(piVar14);
            uVar9 = (**(int (***)())(*piVar1 + 0x48))(piVar1);
            if (uVar8 <= uVar9) {
              piVar1 = (int *)param_1[0x20];
              lVar4 = (**(int (***)())(*piVar14 + 0x48))(piVar14);
              lVar5 = (**(int (***)())(*piVar1 + 0x48))(piVar1);
              if ((unsigned __int64)(lVar5 - lVar4) < (unsigned __int64)(unsigned int)param_1[0x1d]) break;
              iVar6 = (**(int (***)())(*piVar14 + 0x30))(piVar14);
              iVar7 = fn_82A29AC0(param_1[0xb],iVar6,auStack_80,1);
              if (iVar7 == 0) {
                thunk_FUN_82a2b798();
                uVar11 = (**(int (***)())(*param_1 + 0x20))(param_1);
                break;
              }
              uVar8 = (unsigned __int64)(unsigned int)param_1[0x1a] + lVar2;
              if (*(__int64 *)(param_1 + 0x10) + *(unsigned __int64 *)(param_1 + 0xe) <= uVar8) {
                if ((param_1[0x1e] & 8U) == 0) break;
                uVar8 = *(unsigned __int64 *)(param_1 + 0xe) & 0xfffffffffffff800;
              }
              (**(int (***)())(*piVar14 + 0x34))(piVar14,0);
              (**(int (***)())(*piVar14 + 0x3c))(piVar14,uVar8);
              *(__int64 *)(param_1 + 0x18) = *(__int64 *)(param_1 + 0x18) + 1;
              (**(int (***)())(*piVar14 + 0x44))(piVar14);
              *(int *)(iVar6 + 8) = (int)uVar8;
              *(int *)(iVar6 + 0xc) = (int)(uVar8 >> 0x20);
              uVar3 = (**(int (***)())(*piVar14 + 0x28))(piVar14);
              iVar6 = fn_82A2A108(param_1[0xb],uVar3,param_1[0x1a],0,iVar6);
              if (iVar6 == 0) {
                iVar6 = thunk_FUN_82a2b798();
                if (iVar6 == 0x26) {
                  (**(int (***)())(*piVar14 + 0x34))(piVar14,1);
                }
                else if (iVar6 != 0x3e5) {
                  uVar11 = (**(int (***)())(*param_1 + 0x20))(param_1);
                  (**(int (***)())(*piVar14 + 0x34))(piVar14,1);
                  break;
                }
              }
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 < param_1[0x1b] - 1U);
        }
        if ((int)uVar11 < 0) goto LAB_82c0621c;
        uVar3 = (**(int (***)())(*(int *)param_1[0x20] + 0x30))();
        lVar2 = (**(int (***)())(*(int *)param_1[0x20] + 0x28))((int *)param_1[0x20]);
        auStack_80[0] = 0;
        iVar6 = fn_82A29AC0(param_1[0xb],uVar3,auStack_80,1);
        if ((iVar6 == 0) && (iVar6 = thunk_FUN_82a2b798(), iVar6 != 0x26)) {
          uVar11 = (**(int (***)())(*param_1 + 0x20))(param_1);
        }
        uVar9 = (*(unsigned __int64 *)(param_1 + 0x16) & 0xffffffff) -
                (*(unsigned __int64 *)(param_1 + 0x12) & 0xffffffff);
        uVar8 = (unsigned int)param_1[0x1a] - uVar9;
        if ((uVar12 & 0xffffffff) < ((unsigned int)param_1[0x1a] - uVar9 & 0xffffffff)) {
          uVar8 = uVar12;
        }
        if (((uVar9 & 0xffffffff) <= (unsigned __int64)auStack_80[0]) &&
           (uVar10 = auStack_80[0] - uVar9, uVar10 != 0)) {
          if ((uVar10 & 0xffffffff) < (uVar8 & 0xffffffff)) {
            uVar8 = uVar10;
          }
          fn_82F68CC0((unsigned __int64)*param_4 + param_2,uVar9 + lVar2,uVar8);
          uVar12 = uVar12 - uVar8;
          *(unsigned __int64 *)(param_1 + 0x16) = (uVar8 & 0xffffffff) + *(__int64 *)(param_1 + 0x16);
          *param_4 = *param_4 + (int)uVar8;
          if (-1 < (int)uVar11) goto LAB_82c0620c;
          goto LAB_82c0621c;
        }
      }
LAB_82c06218:
      param_1[0xc] = 1;
    }
LAB_82c0621c:
    if (((unsigned __int64)*param_4 < (param_3 & 0xffffffff)) || ((int)uVar11 < 0)) {
      param_1[0xc] = 1;
    }
  }
  else {
    uVar11 = 0;
    param_1[0xc] = 1;
  }
  return uVar11;
}

