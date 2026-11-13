extern unsigned int *auStack_28;
extern int fn_829548C8();
extern int fn_8295D0A8();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


unsigned __int64 fn_829A12A0(int *param_1)

{
  unsigned int uVar1;
  int iVar2;
  int (**pcVar3)();
  int iVar4;
  unsigned __int64 uVar5;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int auStack_28 [10];
  
  uVar1 = *(unsigned int *)param_1[0x41];
  if (*(short *)((int)param_1 + 0xca) == 0x104) {
    uVar5 = fn_8295D0A8(param_1,0x42);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar5 = (**(int (***)())(*param_1 + 0x140))
                      (param_1,*(unsigned int *)(**(int **)(param_1[0x41] + 0x10) * 4 + param_1[5]),
                       &uStack_30,0,0);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar5 = (**(int (***)())(*param_1 + 0x138))(param_1,uStack_30,0xf0000,0);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    iVar4 = (uVar1 & 0xfffff) * 4;
    iVar2 = *(int *)(param_1[0x41] + 8);
    uVar5 = (**(int (***)())(*param_1 + 0x148))
                      (param_1,*(unsigned int *)(*(int *)(iVar4 + iVar2) * 4 + param_1[5]),&uStack_30,
                       &uStack_2c);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar5 = (**(int (***)())(*param_1 + 0x14c))
                      (param_1,iVar4 + iVar2,uVar1 & 0xfffff,0xf0000,auStack_28);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    pcVar3 = *(int (***)())(*param_1 + 0x13c);
  }
  else {
    uVar5 = fn_8295D0A8(param_1,0x42);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar5 = (**(int (***)())(*param_1 + 0x140))
                      (param_1,*(unsigned int *)(**(int **)(param_1[0x41] + 0x10) * 4 + param_1[5]),
                       &uStack_30,0,0);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uStack_2c = 0;
    auStack_28[0] = 0xf0000;
    pcVar3 = *(int (***)())(*param_1 + 0x138);
  }
  uVar5 = (*pcVar3)(param_1,uStack_30,auStack_28[0],uStack_2c);
  if (((-1 < (int)uVar5) && (uVar5 = (**(int (***)())(*param_1 + 0x134))(param_1), -1 < (int)uVar5)) &&
     (uVar5 = fn_829548C8(param_1), -1 < (int)uVar5)) {
    uVar5 = 0;
  }
  return uVar5;
}

