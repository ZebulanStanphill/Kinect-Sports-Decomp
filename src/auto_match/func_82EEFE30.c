#define true 1
#define CONCAT24(h,l) ((unsigned __int64)((((unsigned short)(h)) << 32) | ((unsigned int)(l))))
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_ac;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_be;
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82E57620();
extern int fn_82E576A8();
extern int fn_82E57738();
extern int fn_82E577A0();
extern int fn_82E59EC8();
extern int fn_82EE5E28();
extern int fn_82EEFB28();
extern int fn_82EEFB98();
extern unsigned int uStack_a8;
extern unsigned int uStack_b8;
extern unsigned int uStack_c0;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

__int64 fn_82EEFE30(int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned short uVar2;
  __int64 lVar3;
  int iVar5;
  int iVar6;
  unsigned __int64 uVar4;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  int *piVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned short uStack_c0;
  unsigned short auStack_be [3];
  unsigned __int64 uStack_b8;
  unsigned char auStack_b0 [4];
  unsigned char auStack_ac [4];
  unsigned __int64 uStack_a8;
  
  if (param_1[3] == 0) {
    lVar3 = -0x3ff2c94a;
  }
  else if (param_2 == (unsigned int *)0x0) {
    lVar3 = -0x7ff8ffa9;
  }
  else {
    *param_2 = 0;
    uVar1 = param_1[0x10];
    uStack_a8 = 0;
    iVar5 = 0;
    if (uVar1 < 0x2c) {
      uVar8 = 0x2c;
LAB_82eefea8:
      *param_2 = uVar8;
      lVar3 = -0x3ff2c94f;
    }
    else {
      piVar10 = param_1 + 10;
      fn_82E57620(param_1 + 4,piVar10);
      fn_82E576A8(param_1 + 8,piVar10);
      lVar3 = fn_82EE5E28(piVar10,0x10);
      if (-1 < lVar3) {
        uStack_c0 = 0;
        lVar3 = fn_82E57738(&uStack_c0,piVar10);
        if (-1 < lVar3) {
          auStack_be[0] = 0;
          lVar3 = fn_82E57738(auStack_be,piVar10);
          if (-1 < lVar3) {
            uVar7 = (unsigned int)uStack_c0;
            uVar9 = (unsigned int)auStack_be[0];
            uVar11 = (uVar7 * 4 + uVar9 + 0x16) * 2;
            if (uVar1 < uVar11) {
              *param_2 = uVar11;
              lVar3 = -0x3ff2c94f;
            }
            else {
              uVar11 = 0;
              if (uVar9 != 0) {
                do {
                  uStack_b8 = 0;
                  if ((unsigned int)param_1[0x10] < 2) {
                    uVar8 = (uVar1 - param_1[0x10]) + 2;
                    goto LAB_82eefea8;
                  }
                  auStack_be[0] = 0;
                  lVar3 = fn_82E57738(auStack_be,piVar10);
                  uVar2 = auStack_be[0];
                  if (lVar3 < 0) goto LAB_82ef01e0;
                  uVar12 = (unsigned int)auStack_be[0];
                  if (0x400 < uVar12) {
                    lVar3 = -0x3ff2c566;
                    goto LAB_82ef01e0;
                  }
                  uVar8 = uVar12 * 2;
                  if ((unsigned int)param_1[0x10] < uVar8) {
                    uVar8 = uVar8 + (uVar1 - param_1[0x10]);
                    goto LAB_82eefea8;
                  }
                  if (uVar12 == 0) {
                    iVar5 = 0;
                  }
                  else {
                    iVar5 = (uVar12 + 1) * 2;
                    if (0x7fffffff < uVar12 + 1) {
                      iVar5 = -1;
                    }
                    iVar5 = fn_82E50BE8(iVar5,0,0,0,0);
                    if (iVar5 == 0) {
                      lVar3 = -0x7ff8fff2;
                      goto LAB_82ef01e0;
                    }
                    lVar3 = fn_82E577A0(iVar5,piVar10,uVar12);
                    if (lVar3 < 0) goto LAB_82ef01d0;
                    *(unsigned short *)(uVar8 + iVar5) = 0;
                  }
                  uStack_b8 = (unsigned __int64)CONCAT24(uVar2,iVar5);
                  iVar6 = fn_82EEFB98(param_1 + 0x6c,uStack_b8,0);
                  if (iVar6 == 0) {
                    lVar3 = -0x7ff8fff2;
                    break;
                  }
                  iVar5 = 0;
                  uVar11 = uVar11 + 1 & 0xffff;
                } while (uVar11 < uVar9);
              }
              if ((-1 < (int)lVar3) && (uVar11 = 0, uVar7 != 0)) {
                while( true ) {
                  uStack_a8 = 0;
                  if ((unsigned int)param_1[0x10] < 8) break;
                  lVar3 = fn_82E59EC8(auStack_b0,piVar10);
                  if ((lVar3 < 0) || (lVar3 = fn_82E57738(auStack_ac,piVar10), lVar3 < 0))
                  goto LAB_82ef01d0;
                  if (uVar9 == 0) {
LAB_82ef01bc:
                    lVar3 = -0x3ff2c566;
                    goto LAB_82ef01d0;
                  }
                  auStack_be[0] = 0;
                  lVar3 = fn_82E57738(auStack_be,piVar10);
                  if (lVar3 < 0) goto LAB_82ef01d0;
                  uVar12 = (unsigned int)auStack_be[0];
                  if (0x2800 < uVar12) goto LAB_82ef01bc;
                  uVar8 = uVar12 * 2;
                  uStack_a8 = (unsigned __int64)CONCAT24(auStack_be[0],(((unsigned __int64)(uStack_a8) >> 32) & 0xFFFFFFFF));
                  if ((unsigned int)param_1[0x10] < uVar8) {
                    uVar8 = uVar8 + (uVar1 - param_1[0x10]);
                    goto LAB_82ef01b0;
                  }
                  if (auStack_be[0] != 0) {
                    iVar6 = (uVar12 + 1) * 2;
                    if (0x7fffffff < uVar12 + 1) {
                      iVar6 = -1;
                    }
                    iVar6 = fn_82E50BE8(iVar6,0,0,0,0);
                    uStack_a8 = CONCAT44((((unsigned __int64)(uStack_a8) >> 0) & 0xFFFFFFFF),iVar6);
                    if (iVar6 == 0) {
LAB_82ef01cc:
                      lVar3 = -0x7ff8fff2;
                    }
                    else {
                      lVar3 = fn_82E577A0(iVar6,piVar10,uVar12);
                      if (-1 < lVar3) {
                        *(unsigned short *)(uVar8 + iVar6) = 0;
                        goto LAB_82ef0174;
                      }
                    }
                    goto LAB_82ef01d0;
                  }
                  uStack_a8 = 0;
LAB_82ef0174:
                  iVar6 = fn_82EEFB28(param_1 + 0x12,0,uStack_a8,0);
                  if (iVar6 == 0) goto LAB_82ef01cc;
                  uStack_a8 = uStack_a8 & 0xffffffff00000000;
                  uVar11 = uVar11 + 1 & 0xffff;
                  if (uVar7 <= uVar11) goto LAB_82ef01d0;
                }
                uVar8 = (uVar1 - param_1[0x10]) + 8;
LAB_82ef01b0:
                lVar3 = -0x3ff2c94f;
                *param_2 = uVar8;
              }
LAB_82ef01d0:
              if (iVar5 != 0) {
                fn_82E4FE40(iVar5);
              }
            }
          }
        }
      }
    }
LAB_82ef01e0:
    if ((((unsigned __int64)(uStack_a8) >> 32) & 0xFFFFFFFF) != 0) {
      fn_82E4FE40();
    }
    if ((((int)lVar3 != -0x3ff2c94f) && (*param_2 = uVar1 - param_1[0x10], -1 < (int)lVar3)) &&
       (uVar4 = (**(int (***)())(*param_1 + 0x2c))(param_1), uVar4 != *param_2)) {
      lVar3 = -0x3ff2c566;
    }
  }
  return lVar3;
}

