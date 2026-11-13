extern unsigned int *auStack_6e;
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82E57620();
extern int fn_82E576A8();
extern int fn_82E57738();
extern int fn_82E577A0();
extern int fn_82E57AA0();
extern int fn_82EE5E28();
extern int fn_82EE5F60();


__int64 fn_82E57D08(int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar2;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  int *piVar8;
  __int64 lVar9;
  unsigned char abStack_70 [2];
  unsigned short auStack_6e [55];
  
  iVar3 = 0;
  if (param_1[3] == 0) {
    lVar9 = -0x3ff2c94a;
  }
  else if (param_2 == (unsigned int *)0x0) {
    lVar9 = -0x7ff8ffa9;
  }
  else {
    *param_2 = 0;
    uVar6 = param_1[0x10];
    if (uVar6 < 0x1a) {
      uVar5 = 0x1a;
    }
    else {
      piVar8 = param_1 + 10;
      auStack_6e[0] = 0;
      fn_82E57620(param_1 + 4,piVar8);
      fn_82E576A8(param_1 + 8,piVar8);
      lVar9 = fn_82E57738(auStack_6e,piVar8);
      if (lVar9 < 0) {
        return lVar9;
      }
      uVar7 = (unsigned int)auStack_6e[0];
      uVar5 = uVar7 * 3 + 0x1a;
      if (uVar5 <= uVar6) {
        uVar5 = 0;
        if (uVar7 != 0) {
          do {
            if ((unsigned int)param_1[0x10] < 3) {
              uVar6 = (uVar6 - param_1[0x10]) - 3;
LAB_82e57eb4:
              *param_2 = uVar6;
              return -0x3ff2c94f;
            }
            abStack_70[0] = 0;
            lVar9 = fn_82EE5F60(piVar8,abStack_70,1);
            if (-1 < (int)lVar9) {
              lVar9 = fn_82EE5E28(piVar8,1);
            }
            if ((int)lVar9 < 0) {
              return lVar9;
            }
            if ((abStack_70[0] & 1) != 0) {
              return -0x3ff2c566;
            }
            if ((unsigned int)param_1[0x10] < (unsigned int)abStack_70[0]) {
              uVar6 = ((unsigned int)abStack_70[0] - param_1[0x10]) + uVar6;
              goto LAB_82e57eb4;
            }
            uVar1 = (unsigned int)(abStack_70[0] >> 1);
            iVar3 = fn_82E50BE8(uVar1 * 2,0,0,0,0);
            if (iVar3 == 0) {
              return -0x7ff8fff2;
            }
            lVar9 = fn_82E577A0(iVar3,piVar8,uVar1);
            if (lVar9 < 0) goto LAB_82e57f2c;
            if (uVar1 != 0) {
              *(unsigned short *)(uVar1 * 2 + iVar3 + -2) = 0;
            }
            iVar4 = fn_82E57AA0(param_1 + 0x12,iVar3,0);
            if (iVar4 == 0) {
              lVar9 = -0x7ff8fff2;
              break;
            }
            iVar3 = 0;
            uVar5 = uVar5 + 1 & 0xffff;
          } while (uVar5 < uVar7);
        }
        if (-1 < (int)lVar9) {
          *param_2 = uVar6 - param_1[0x10];
          uVar2 = (**(int (***)())(*param_1 + 0x2c))(param_1);
          if (uVar2 != *param_2) {
            lVar9 = -0x3ff2c566;
          }
        }
LAB_82e57f2c:
        if (iVar3 == 0) {
          return lVar9;
        }
        fn_82E4FE40(iVar3);
        return lVar9;
      }
    }
    *param_2 = uVar5;
    lVar9 = -0x3ff2c94f;
  }
  return lVar9;
}

