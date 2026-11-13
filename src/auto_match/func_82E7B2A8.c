#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c4;
extern int fn_82E77F88();
extern int fn_82E78690();
extern int fn_82E79690();
extern int fn_82E7AC38();
extern int fn_82E7AE00();
extern unsigned int iStack_bc;
extern unsigned int uStack_b8;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;


__int64 fn_82E7B2A8(int param_1,int param_2,int *param_3,int param_4)

{
  unsigned __int64 *puVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned __int64 *puVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  int iVar8;
  unsigned int uVar9;
  __int64 lVar10;
  int *piStack_d0;
  unsigned int uStack_cc;
  unsigned int uStack_c8;
  unsigned char auStack_c4 [4];
  int *piStack_c0;
  int iStack_bc;
  unsigned __int64 uStack_b8;
  unsigned char auStack_b0 [80];
  
  if ((param_2 == 0) || (param_3 == (int *)0x0)) {
    return -0x7ff8ffa9;
  }
  if (*(int *)(param_1 + 0x148) == 0) {
    return -0x3ff2c94a;
  }
  if (0x3e < *(unsigned short *)(param_1 + 0x146)) {
    return -0x3ff2c561;
  }
  piStack_d0 = (int *)0x0;
  lVar10 = 9;
  puVar1 = &uStack_b8;
  do {
    puVar4 = puVar1;
    puVar1 = puVar4 + 1;
    *puVar1 = 0;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  iVar8 = *param_3;
  *(unsigned int *)(puVar4 + 2) = 0;
  lVar10 = (**(int (***)())(iVar8 + 0xb4))(param_3,auStack_c4);
  if (lVar10 < 0) goto LAB_82e7b5c0;
  uVar7 = *(unsigned int *)(param_2 + 0x1b);
  if (*(int *)(param_2 + 7) + uVar7 <= *(unsigned int *)(param_2 + 0xb)) {
    uVar3 = *(unsigned int *)(param_2 + 0xb);
    if (param_4 == 0) {
      uVar3 = uVar7;
    }
    if (uVar7 <= uVar3) {
      lVar10 = fn_82E79690(param_1,auStack_b0);
      if (-1 < lVar10) {
        lVar10 = fn_82E7AE00(param_1,param_2,param_3,0);
        if ((int)lVar10 == -0x3ff2c566) {
          lVar10 = fn_82E7AC38(param_1,auStack_b0);
          if (-1 < lVar10) {
            lVar10 = -0x3ff2c566;
          }
        }
        else if (-1 < (int)lVar10) {
          if ((unsigned __int64)*(unsigned short *)(param_1 + 0x146) != 0) {
            lVar10 = fn_82E78690(param_1 + 0x178,(unsigned __int64)*(unsigned short *)(param_1 + 0x146) - 1,
                                   &uStack_cc);
            uVar7 = -(unsigned int)(lVar10 != 0) & uStack_cc;
            if (uVar7 != 0) {
              *(unsigned int *)(uVar7 + 0x144) = 0;
              *(unsigned int *)(uVar7 + 0x140) = 0;
              lVar10 = (**(int (***)())(*param_3 + 0x9c))(param_3,&uStack_c8);
              if (-1 < lVar10) {
                uVar3 = 0;
                if (param_4 == 0) {
                  uVar3 = *(unsigned int *)(uVar7 + 7);
                }
                uVar6 = 0;
                uVar5 = 0;
                if (uStack_c8 != 0) {
                  do {
                    if (*(unsigned int *)(uVar7 + 0x1b) <= uVar6) break;
                    uStack_cc = 0;
                    lVar10 = (**(int (***)())(*param_3 + 0xa0))(param_3,uVar5,&piStack_d0);
                    if ((lVar10 < 0) ||
                       (lVar10 = (**(int (***)())(*piStack_d0 + 0x14))(piStack_d0,&uStack_cc),
                       lVar10 < 0)) break;
                    iVar8 = 0;
                    uVar9 = *(unsigned int *)(uVar7 + 7);
                    if (uVar9 < uStack_cc + uVar3) {
                      if (uVar3 < uVar9) {
                        iVar8 = uVar9 - uVar3;
                        uStack_cc = uStack_cc - iVar8;
                      }
                      else {
                        iVar8 = 0;
                      }
                      uVar9 = *(int *)(uVar7 + 0x1b) - uVar6;
                      if (uStack_cc <= uVar9) {
                        uVar9 = uStack_cc;
                      }
                      (**(int (***)())(*piStack_d0 + 4))();
                      piStack_c0 = piStack_d0;
                      iStack_bc = iVar8;
                      iVar2 = fn_82E77F88(param_1 + 0x244,CONCAT44(piStack_d0,iVar8),
                                            (unsigned __int64)uVar9 << 0x20,0);
                      if (iVar2 == 0) {
                        lVar10 = -0x7ff8fff2;
                        (**(int (***)())(*piStack_d0 + 8))();
                        break;
                      }
                      uVar6 = uVar9 + uVar6;
                      if (*(int *)(uVar7 + 0x144) == 0) {
                        *(int *)(uVar7 + 0x140) = *(int *)(param_1 + 0x354) + -1;
                      }
                      *(int *)(uVar7 + 0x144) = *(int *)(uVar7 + 0x144) + 1;
                    }
                    uVar3 = iVar8 + uStack_cc + uVar3;
                    if (piStack_d0 != (int *)0x0) {
                      (**(int (***)())(*piStack_d0 + 8))();
                      piStack_d0 = (int *)0x0;
                    }
                    uVar5 = uVar5 + 1;
                  } while ((uVar5 & 0xffffffff) < (unsigned __int64)uStack_c8);
                }
              }
              goto LAB_82e7b5c0;
            }
          }
          lVar10 = -0x7fff0001;
        }
      }
      goto LAB_82e7b5c0;
    }
  }
  lVar10 = -0x7ff8ffa9;
LAB_82e7b5c0:
  if (piStack_d0 != (int *)0x0) {
    (**(int (***)())(*piStack_d0 + 8))();
  }
  return lVar10;
}

