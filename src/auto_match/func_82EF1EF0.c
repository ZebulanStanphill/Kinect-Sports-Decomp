#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_a0;
extern unsigned int *auStack_ac;
extern unsigned int *auStack_b0;
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82E57620();
extern int fn_82E576A8();
extern int fn_82E57738();
extern int fn_82E577A0();
extern int fn_82E59EC8();
extern int fn_82EE5E28();
extern int fn_82EF1CC8();
extern unsigned int uStack_80;
extern unsigned int uStack_88;
extern unsigned int uStack_90;
extern unsigned int uStack_98;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

__int64 fn_82EF1EF0(int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  unsigned int uVar7;
  int iVar8;
  __int64 lVar6;
  unsigned int uVar9;
  unsigned int uVar10;
  __int64 lVar11;
  int *piVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned short auStack_b0 [2];
  unsigned int auStack_ac [3];
  unsigned char auStack_a0 [8];
  unsigned __int64 uStack_98;
  unsigned __int64 uStack_90;
  unsigned __int64 uStack_88;
  unsigned __int64 uStack_80;
  
  if (param_1[3] == 0) {
    return -0x3ff2c94a;
  }
  if (param_2 == (unsigned int *)0x0) {
    return -0x7ff8ffa9;
  }
  *param_2 = 0;
  uVar1 = param_1[0x10];
  if (uVar1 < 0x30) {
    uVar10 = 0x30;
LAB_82ef1f48:
    *param_2 = uVar10;
    return -0x3ff2c94f;
  }
  piVar12 = param_1 + 10;
  fn_82E57620(param_1 + 4,piVar12);
  fn_82E576A8(param_1 + 8,piVar12);
  lVar4 = fn_82EE5E28(piVar12,0x10);
  lVar11 = -0x3ff2c566;
  lVar6 = lVar11;
  if (-1 < lVar4) {
    auStack_ac[0] = 0;
    lVar4 = fn_82E59EC8(auStack_ac,piVar12);
    if ((-1 < lVar4) && (lVar4 = fn_82EE5E28(piVar12,2), -1 < lVar4)) {
      auStack_b0[0] = 0;
      lVar4 = fn_82E57738(auStack_b0,piVar12);
      uVar3 = auStack_ac[0];
      if (-1 < lVar4) {
        uVar9 = (unsigned int)auStack_b0[0];
        uVar13 = (unsigned int)(auStack_b0[0] >> 1);
        if (((auStack_b0[0] & 1) == 0) && (uVar13 < 0x1401)) {
          uVar10 = auStack_ac[0] * 0x1e + uVar9 + 0x30;
          if (uVar1 < uVar10) goto LAB_82ef1f48;
          if (((uVar9 + 0x30 < uVar9) || (uVar10 < auStack_ac[0] * 0x1e)) ||
             (uVar10 < auStack_ac[0])) goto LAB_82ef22b4;
          if (param_1[0x12] != 0) {
            fn_82E4FE40();
          }
          param_1[0x12] = 0;
          if (uVar13 != 0) {
            uVar5 = fn_82E50BE8(uVar13 * 2,0,0,0,0);
            param_1[0x12] = (int)uVar5;
            if ((uVar5 & 0xffffffff) == 0) {
LAB_82ef2074:
              lVar6 = -0x7ff8fff2;
              goto LAB_82ef22b4;
            }
            lVar4 = fn_82E577A0(uVar5,piVar12,uVar13);
            if (lVar4 < 0) goto LAB_82ef22ac;
            *(unsigned short *)(uVar13 * 2 + param_1[0x12] + -2) = 0;
          }
          uVar10 = 0;
          uStack_98 = 0;
          uStack_90 = 0;
          uStack_88 = 0;
          uStack_80 = 0;
          if (uVar3 != 0) {
            do {
              if ((unsigned int)param_1[0x10] < 0x1e) {
                uVar10 = (uVar1 - param_1[0x10]) + 0x1e;
LAB_82ef2260:
                lVar4 = -0x3ff2c94f;
                *param_2 = uVar10;
                goto LAB_82ef228c;
              }
              uStack_98 = 0;
              uStack_90 = 0;
              uStack_88 = 0;
              uStack_80 = 0;
              lVar4 = fn_82E576A8(auStack_a0,piVar12);
              if ((lVar4 < 0) || (lVar4 = fn_82E576A8(&uStack_98,piVar12), lVar4 < 0))
              goto LAB_82ef228c;
              auStack_b0[0] = 0;
              lVar4 = fn_82E57738(auStack_b0,piVar12);
              if (lVar4 < 0) goto LAB_82ef228c;
              uVar13 = (unsigned int)auStack_b0[0];
              if (uVar13 < 0xc) goto LAB_82ef226c;
              if ((unsigned int)param_1[0x10] < uVar13) {
                uVar10 = (unsigned int)auStack_b0[0] + (uVar1 - param_1[0x10]);
                goto LAB_82ef2260;
              }
              lVar4 = fn_82E59EC8(&uStack_90,piVar12);
              if (((lVar4 < 0) || (lVar4 = fn_82E59EC8((int)&uStack_90 + 4,piVar12), lVar4 < 0))
                 || (lVar4 = fn_82E59EC8((int)&uStack_88 + 4,piVar12), lVar4 < 0))
              goto LAB_82ef228c;
              uVar9 = (((unsigned __int64)(uStack_88) >> 32) & 0xFFFFFFFF);
              if (0x1400 < (((unsigned __int64)(uStack_88) >> 32) & 0xFFFFFFFF)) {
LAB_82ef226c:
                lVar4 = -0x3ff2c566;
                goto LAB_82ef228c;
              }
              uVar2 = (((unsigned __int64)(uStack_88) >> 32) & 0xFFFFFFFF) & 0x7fffffff;
              uVar14 = (((unsigned __int64)(uStack_88) >> 32) & 0xFFFFFFFF) * 2;
              if (uVar13 - 0xc < uVar14) goto LAB_82ef226c;
              if ((((unsigned __int64)(uStack_88) >> 32) & 0xFFFFFFFF) != 0) {
                uVar7 = uVar14;
                if (0x7fffffff < (((unsigned __int64)(uStack_88) >> 32) & 0xFFFFFFFF)) {
                  uVar7 = 0xffffffff;
                }
                iVar8 = fn_82E50BE8(uVar7,0,0,0,0);
                uStack_88 = CONCAT44(iVar8,(((unsigned __int64)(uStack_88) >> 32) & 0xFFFFFFFF));
                if (iVar8 == 0) goto LAB_82ef2074;
                lVar4 = fn_82E577A0(iVar8,piVar12,uVar9);
                if (lVar4 < 0) goto LAB_82ef228c;
                *(unsigned short *)(uVar14 + iVar8 + -2) = 0;
              }
              iVar8 = uVar13 + uVar2 * -2 + -0xc;
              uStack_80 = CONCAT44(iVar8,(((unsigned __int64)(uStack_80) >> 32) & 0xFFFFFFFF));
              if ((iVar8 != 0) && (lVar4 = fn_82EE5E28(piVar12), lVar4 < 0)) goto LAB_82ef228c;
              iVar8 = fn_82EF1CC8(param_1 + 0x14,0,uStack_98,uStack_90,uStack_88,uStack_80,0);
              if (iVar8 == 0) {
                lVar4 = -0x7ff8fff2;
                break;
              }
              uVar10 = uVar10 + 1;
              uStack_88 = uStack_88 & 0xffffffff;
            } while (uVar10 < uVar3);
          }
          if ((int)lVar4 < 0) {
LAB_82ef228c:
            if ((((unsigned __int64)(uStack_88) >> 0) & 0xFFFFFFFF) != 0) {
              fn_82E4FE40();
            }
          }
        }
        else {
          lVar4 = -0x3ff2c566;
        }
      }
    }
  }
LAB_82ef22ac:
  lVar6 = lVar4;
  if ((int)lVar4 == -0x3ff2c94f) {
    return lVar4;
  }
LAB_82ef22b4:
  *param_2 = uVar1 - param_1[0x10];
  if ((-1 < (int)lVar6) && (uVar5 = (**(int (***)())(*param_1 + 0x2c))(param_1), uVar5 != *param_2)) {
    lVar6 = lVar11;
  }
  return lVar6;
}

