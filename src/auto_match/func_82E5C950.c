extern unsigned int *auStack_50;
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82E57620();
extern int fn_82E576A8();
extern int fn_82E57738();
extern int fn_82E57820();
extern int fn_82E59EC8();
extern int fn_82E5BDC0();


__int64 fn_82E5C950(int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  unsigned short auStack_50;
  
  if (param_1[3] == 0) {
    return -0x3ff2c94a;
  }
  uVar1 = param_1[0x10];
  if (param_2 == (unsigned int *)0x0) {
    return -0x7ff8ffa9;
  }
  *param_2 = 0;
  if (uVar1 < 0x4e) {
    uVar4 = 0x4e;
LAB_82e5c9a8:
    *param_2 = uVar4;
    return -0x3ff2c94f;
  }
  piVar7 = param_1 + 10;
  fn_82E57620(param_1 + 4,piVar7);
  fn_82E576A8(param_1 + 8,piVar7);
  lVar2 = fn_82E57620(param_1 + 0x12,piVar7);
  if (((-1 < lVar2) && (lVar2 = fn_82E57620(param_1 + 0x16,piVar7), -1 < lVar2)) &&
     (lVar2 = fn_82E576A8(param_1 + 0x1a,piVar7), -1 < lVar2)) {
    piVar6 = param_1 + 0x1f;
    lVar2 = fn_82E59EC8(piVar6,piVar7);
    if (-1 < lVar2) {
      piVar5 = param_1 + 0x21;
      lVar2 = fn_82E59EC8(piVar5,piVar7);
      if (-1 < lVar2) {
        auStack_50 = 0;
        lVar2 = fn_82E57738(&auStack_50,piVar7);
        if (-1 < lVar2) {
          *(unsigned short *)(param_1 + 0x1c) = auStack_50 & 0x7f;
          param_1[0x1d] = auStack_50 & 0xffff8000;
          lVar2 = fn_82E59EC8(&auStack_50,piVar7);
          if (-1 < lVar2) {
            uVar4 = *piVar5 + *piVar6 + 0x4e;
            if (uVar1 < uVar4) goto LAB_82e5c9a8;
            if (param_1[0x1e] != 0) {
              fn_82E4FE40();
            }
            param_1[0x1e] = 0;
            if (*piVar6 != 0) {
              lVar2 = fn_82E50BE8(*piVar6,0,0,0,0);
              param_1[0x1e] = (int)lVar2;
              if (lVar2 != 0) {
                lVar2 = fn_82E5BDC0(param_1,lVar2,piVar7,*piVar6);
                if (lVar2 < 0) goto LAB_82e5cb4c;
                goto LAB_82e5cafc;
              }
LAB_82e5cad8:
              lVar2 = -0x7ff8fff2;
              goto LAB_82e5cb5c;
            }
LAB_82e5cafc:
            if (param_1[0x20] != 0) {
              fn_82E4FE40();
            }
            param_1[0x20] = 0;
            if (*piVar5 != 0) {
              uVar3 = fn_82E50BE8(*piVar5,0,0,0,0);
              param_1[0x20] = (int)uVar3;
              if ((uVar3 & 0xffffffff) == 0) goto LAB_82e5cad8;
              lVar2 = fn_82E57820(uVar3,piVar7,*piVar5);
            }
          }
        }
      }
    }
  }
LAB_82e5cb4c:
  if ((int)lVar2 == -0x3ff2c94f) {
    return lVar2;
  }
LAB_82e5cb5c:
  *param_2 = uVar1 - param_1[0x10];
  if ((-1 < (int)lVar2) && (uVar3 = (**(int (***)())(*param_1 + 0x2c))(param_1), uVar3 != *param_2)) {
    lVar2 = -0x3ff2c566;
  }
  return lVar2;
}

