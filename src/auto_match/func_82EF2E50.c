extern unsigned int *auStack_80;
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82E57620();
extern int fn_82E576A8();
extern int fn_82E57738();
extern int fn_82E59EC8();
extern int fn_82F691F0();
extern unsigned int iStack_70;
extern unsigned int iStack_78;
extern unsigned int iStack_7c;
extern unsigned int lbl_820F8EF8;
extern unsigned int uStack_7e;


__int64 fn_82EF2E50(int *param_1,unsigned int *param_2)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned int uVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  unsigned char *pbVar6;
  unsigned char *pbVar8;
  unsigned __int64 uVar7;
  unsigned int uVar9;
  int *piVar10;
  int aiStack_90 [4];
  unsigned char auStack_80 [2];
  unsigned short uStack_7e;
  int iStack_7c;
  int iStack_78;
  int iStack_70;
  
  iStack_7c = 0;
  iStack_78 = 0;
  aiStack_90[0] = 0;
  iStack_70 = 0;
  if (param_1[3] == 0) {
    return -0x3ff2c94a;
  }
  if (param_2 == (unsigned int *)0x0) {
    return -0x7ff8ffa9;
  }
  *param_2 = 0;
  uVar3 = param_1[0x10];
  if (uVar3 < 0x2c) {
    *param_2 = 0x2c;
    return -0x3ff2c94f;
  }
  piVar10 = param_1 + 10;
  fn_82E57620(param_1 + 4,piVar10);
  fn_82E576A8(param_1 + 8,piVar10);
  pbVar8 = (unsigned char *)(param_1 + 0x12);
  lVar4 = fn_82E57620(pbVar8,piVar10);
  if (lVar4 < 0) {
    return lVar4;
  }
  pbVar6 = (unsigned char *)&lbl_820F8EF8;
  do {
    bVar1 = *pbVar8;
    bVar2 = *pbVar6;
    if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
    pbVar8 = pbVar8 + 1;
    pbVar6 = pbVar6 + 1;
  } while (pbVar8 != (unsigned char *)(param_1 + 0x16));
  if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) {
    return -0x3ff2c566;
  }
  lVar4 = fn_82E59EC8(aiStack_90,piVar10);
  if (lVar4 < 0) {
    return lVar4;
  }
  if (aiStack_90[0] == 0) goto LAB_82ef3188;
  uVar9 = param_1[0x10];
  if (uVar9 < 2) {
LAB_82ef315c:
    uVar9 = (uVar3 - uVar9) + 2;
  }
  else {
    lVar4 = fn_82E57738(auStack_80,piVar10);
    if (lVar4 < 0) goto LAB_82ef3188;
    uVar9 = param_1[0x10];
    if (uVar9 < 2) goto LAB_82ef315c;
    lVar4 = fn_82E57738(&uStack_7e,piVar10);
    if (lVar4 < 0) goto LAB_82ef3188;
    uVar5 = (unsigned __int64)uStack_7e * 2;
    if (uVar5 <= (unsigned int)param_1[0x10]) {
      uVar7 = (unsigned __int64)uStack_7e + 1;
      lVar4 = uVar7 * 2;
      if (0x7fffffff < uVar7) {
        lVar4 = -1;
      }
      lVar4 = fn_82E50BE8(lVar4,0,0,0,0);
      iStack_7c = (int)lVar4;
      if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(lVar4,0,uVar5 + 2);
      }
      lVar4 = -0x7ff8fff2;
      iStack_7c = 0;
      goto LAB_82ef3188;
    }
    uVar9 = ((unsigned int)uStack_7e * 2 - param_1[0x10]) + uVar3;
  }
  *param_2 = uVar9;
  lVar4 = -0x3ff2c94f;
LAB_82ef3188:
  *param_2 = uVar3 - param_1[0x10];
  uVar5 = (**(int (***)())(*param_1 + 0x2c))(param_1);
  if (uVar5 != *param_2) {
    lVar4 = -0x3ff2c566;
  }
  if (iStack_7c != 0) {
    fn_82E4FE40();
  }
  if (iStack_78 != 0) {
    fn_82E4FE40();
  }
  if (iStack_70 != 0) {
    fn_82E4FE40();
  }
  return lVar4;
}

