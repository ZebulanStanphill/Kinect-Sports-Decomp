extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_82BE50B0();
extern int fn_82BE5240();
extern int fn_82BE5340();
extern int fn_82BE5350();
extern int fn_82BE5378();
extern int fn_82BEA420();
extern int fn_82BEF650();
extern int fn_82BEF9E0();
extern int fn_82BF0E40();
extern int fn_82BF1430();
extern unsigned int uStack_24;
extern unsigned int uStack_28;


unsigned __int64 fn_82BEFF08(int param_1)

{
  int *piVar1;
  int iVar4;
  unsigned __int64 uVar2;
  int iVar5;
  unsigned __int64 uVar3;
  unsigned int uVar6;
  unsigned int auStack_40 [4];
  unsigned int auStack_30 [2];
  unsigned int uStack_28;
  unsigned int uStack_24;
  
  iVar5 = param_1 + 0x1c;
  *(unsigned char *)(param_1 + 0x41) = 1;
  fn_82BE5340(iVar5);
  while (*(int *)(param_1 + 0x24) != 0) {
    iVar4 = fn_82BE5378(iVar5);
    *(unsigned int *)(iVar4 + 0x14) = 1;
    fn_82BE5350(iVar5);
  }
  if ((*(int *)(param_1 + 0x34) == 4) || (*(int *)(param_1 + 0x34) == 0x20)) {
    fn_82BE5340(iVar5);
    while (*(int *)(param_1 + 0x24) != 0) {
      uVar2 = fn_82BE5378(iVar5);
      iVar4 = fn_82BE50B0(uVar2,0);
      if (*(int *)(iVar4 + 8) != 0) {
        if (*(char *)(param_1 + 0x42) != '\0') {
          *(unsigned char *)(param_1 + 0x42) = 0;
        }
        goto LAB_82bf014c;
      }
      fn_82BE5350(iVar5);
    }
  }
  iVar5 = *(int *)(param_1 + 0x30);
  *(unsigned int *)(param_1 + 0x30) = 0;
  *(int *)(param_1 + 0x2c) = iVar5;
  if (iVar5 == 0) {
    uVar2 = fn_82BE5240(param_1,0x194,0xffffffff820eb2d4);
  }
  else {
    iVar4 = *(int *)(iVar5 + 0x38);
    if (*(int *)(iVar5 + 0x4c) != 0) {
      *(unsigned int *)(*(int *)(iVar5 + 0x4c) + 0x1c) = 0;
    }
    uStack_24 = 0;
    if (iVar4 == 0) {
      auStack_30[0] = 0;
    }
    else {
      auStack_30[0] = *(unsigned int *)(iVar4 + 8);
    }
    iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 0x34);
    if (iVar5 == 0) {
      uStack_28 = 0;
    }
    else {
      uStack_28 = *(unsigned int *)(iVar5 + 0x24);
    }
    piVar1 = *(int **)(*(int *)(param_1 + 0x2c) + 0x34);
    if (piVar1 == (int *)0x0) {
      uStack_24 = 0;
    }
    else {
      uStack_24 = (**(int (***)())(*piVar1 + 4))();
    }
    iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 0x34);
    if (iVar5 == 0) {
      auStack_40[0] = 0;
    }
    else {
      auStack_40[0] = *(unsigned int *)(iVar5 + 0x30);
    }
    iVar5 = fn_82BEF9E0(param_1,auStack_30,auStack_40);
    if (iVar5 == 0) {
      fn_82BE5240(param_1,0x194,0xffffffff82196582);
      fn_82BF0E40(*(unsigned int *)(param_1 + 0x2c),0);
      uVar6 = 2;
      *(unsigned int *)(param_1 + 0x2c) = 0;
      *(unsigned int *)(param_1 + 0x30) = 0;
    }
    else {
      uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x2c);
      if (((uVar3 != 0) && (*(int *)(param_1 + 0x28) != 0)) ||
         (uVar3 = fn_82BEA420(*(unsigned int *)(param_1 + 0x18),0), (uVar3 & 0xffffffff) != 0))
      {
        uVar6 = fn_82BF1430(uVar3,*(unsigned int *)(param_1 + 0x44));
        *(unsigned int *)(param_1 + 0x3c) = uVar6;
      }
      fn_82BEF650(param_1,3);
      uVar6 = 0x13;
    }
    *(unsigned int *)(param_1 + 0x10) = uVar6;
LAB_82bf014c:
    uVar2 = 0;
  }
  return uVar2;
}

