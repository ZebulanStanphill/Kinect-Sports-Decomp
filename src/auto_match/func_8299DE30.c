extern int fn_82975B00();


unsigned __int64
fn_8299DE30(int param_1,unsigned int param_2,int *param_3,unsigned int param_4,int *param_5,unsigned int param_6)

{
  unsigned int *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  int *piVar9;
  
  uVar5 = 0;
  piVar4 = param_3;
  if (param_4 != 0) {
    do {
      puVar1 = (unsigned int *)*piVar4;
      if ((puVar1 != (unsigned int *)0x0) && (uVar6 = *puVar1, uVar6 != 0)) {
        uVar8 = uVar6 & 0xfff00000;
        uVar6 = uVar6 & 0xfffff;
        if ((uVar8 == 0x60000000) ||
           ((((uVar8 == 0x60500000 || (uVar8 == 0x60a00000)) || (uVar8 == 0x60f00000)) ||
            ((uVar8 == 0x72e00000 || (uVar8 == 0x60700000)))))) {
          if (uVar8 == 0x72100000) goto LAB_8299df70;
        }
        else {
          if (uVar8 != 0x72100000) {
            uVar6 = 0;
            if (param_6 != 0) {
              piVar9 = param_5;
              do {
                uVar8 = 0;
                if (puVar1[1] != 0) {
                  iVar3 = 0;
                  do {
                    if (((*(int *)(iVar3 + puVar1[2]) == *piVar9) ||
                        (*(int *)(*(int *)(*(int *)(iVar3 + puVar1[2]) * 4 +
                                          *(int *)(param_1 + 0x14)) + 0x38) == *piVar9)) &&
                       (((unsigned int *)param_3[param_2] != (unsigned int *)0x0 &&
                        (((param_2 < uVar5 && (uVar7 = *(unsigned int *)param_3[param_2], uVar7 != 0)) &&
                         ((uVar7 & 0xfff00000) != 0x11000000)))))) {
                      return 1;
                    }
                    uVar8 = uVar8 + 1;
                    iVar3 = iVar3 + 4;
                  } while (uVar8 < puVar1[1]);
                }
                uVar6 = uVar6 + 1;
                piVar9 = piVar9 + 1;
              } while (uVar6 < param_6);
            }
            goto LAB_8299e01c;
          }
LAB_8299df70:
          uVar6 = 0;
        }
        uVar8 = 0;
        if (param_6 != 0) {
          piVar9 = param_5;
          do {
            if (uVar6 < puVar1[1]) {
              iVar3 = uVar6 << 2;
              uVar7 = uVar6;
              do {
                if (((*(int *)(iVar3 + puVar1[2]) == *piVar9) &&
                    ((int *)param_3[param_2] != (int *)0x0)) &&
                   ((param_2 < uVar5 && (*(int *)param_3[param_2] != 0)))) {
                  return 1;
                }
                iVar2 = *(int *)(*(int *)(iVar3 + puVar1[2]) * 4 + *(int *)(param_1 + 0x14));
                if (((*(unsigned int *)(iVar2 + 0x3c) & 0x1f0000) != 0) || (*(int *)(iVar2 + 0x38) != -1)) {
                  fn_82975B00(param_1,0,0x12c6,0xffffffff82051458);
                  return 0xffffffff80004005;
                }
                uVar7 = uVar7 + 1;
                iVar3 = iVar3 + 4;
              } while (uVar7 < puVar1[1]);
            }
            uVar8 = uVar8 + 1;
            piVar9 = piVar9 + 1;
          } while (uVar8 < param_6);
        }
      }
LAB_8299e01c:
      uVar5 = uVar5 + 1;
      piVar4 = piVar4 + 1;
    } while (uVar5 < param_4);
  }
  return 0;
}

