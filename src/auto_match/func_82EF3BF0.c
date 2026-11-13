extern int fn_82E50BE8();
extern int fn_82E57620();
extern int fn_82E576A8();
extern int fn_82E57820();
extern int fn_82E59EC8();


__int64 fn_82EF3BF0(int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  int iVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  int *piVar5;
  int *piVar6;
  int aiStack_50;
  
  if (param_1[3] == 0) {
    return -0x3ff2c94a;
  }
  uVar1 = param_1[0x10];
  if (param_2 == (unsigned int *)0x0) {
    return -0x7ff8ffa9;
  }
  *param_2 = 0;
  if (uVar1 < 0x28) {
    *param_2 = 0x28;
    return -0x3ff2c94f;
  }
  piVar6 = param_1 + 10;
  fn_82E57620(param_1 + 4,piVar6);
  fn_82E576A8(param_1 + 8,piVar6);
  piVar5 = param_1 + 0x15;
  lVar3 = fn_82E59EC8(piVar5,piVar6);
  if (-1 < lVar3) {
    if (*piVar5 != 0) {
      uVar4 = fn_82E50BE8(*piVar5,0,0,0,0);
      param_1[0x14] = (int)uVar4;
      if ((uVar4 & 0xffffffff) != 0) {
        lVar3 = fn_82E57820(uVar4,piVar6,*piVar5);
        if (lVar3 < 0) goto LAB_82ef3e08;
        goto LAB_82ef3cd8;
      }
LAB_82ef3cb8:
      lVar3 = -0x7ff8fff2;
      goto LAB_82ef3e18;
    }
LAB_82ef3cd8:
    aiStack_50 = 0;
    lVar3 = fn_82E59EC8(&aiStack_50,piVar6);
    iVar2 = aiStack_50;
    if (-1 < lVar3) {
      if (aiStack_50 != 0) {
        uVar4 = fn_82E50BE8(aiStack_50,0,0,0,0);
        param_1[0x12] = (int)uVar4;
        if ((uVar4 & 0xffffffff) == 0) goto LAB_82ef3cb8;
        lVar3 = fn_82E57820(uVar4,piVar6,iVar2);
        if (lVar3 < 0) goto LAB_82ef3e08;
        *(unsigned char *)(param_1[0x12] + iVar2 + -1) = 0;
      }
      lVar3 = fn_82E59EC8(&aiStack_50,piVar6);
      iVar2 = aiStack_50;
      if (-1 < lVar3) {
        if (aiStack_50 != 0) {
          uVar4 = fn_82E50BE8(aiStack_50,0,0,0,0);
          param_1[0x13] = (int)uVar4;
          if ((uVar4 & 0xffffffff) == 0) goto LAB_82ef3cb8;
          lVar3 = fn_82E57820(uVar4,piVar6,iVar2);
          if (lVar3 < 0) goto LAB_82ef3e08;
          *(unsigned char *)(param_1[0x13] + iVar2 + -1) = 0;
        }
        lVar3 = fn_82E59EC8(&aiStack_50,piVar6);
        iVar2 = aiStack_50;
        if ((-1 < lVar3) && (aiStack_50 != 0)) {
          uVar4 = fn_82E50BE8(aiStack_50,0,0,0,0);
          param_1[0x16] = (int)uVar4;
          if ((uVar4 & 0xffffffff) == 0) goto LAB_82ef3cb8;
          lVar3 = fn_82E57820(uVar4,piVar6,iVar2);
          if (-1 < lVar3) {
            *(unsigned char *)(param_1[0x16] + iVar2 + -1) = 0;
          }
        }
      }
    }
  }
LAB_82ef3e08:
  if ((int)lVar3 == -0x3ff2c94f) {
    return lVar3;
  }
LAB_82ef3e18:
  *param_2 = uVar1 - param_1[0x10];
  if ((-1 < (int)lVar3) && (uVar4 = (**(int (***)())(*param_1 + 0x2c))(param_1), uVar4 != *param_2)) {
    lVar3 = -0x3ff2c566;
  }
  return lVar3;
}

