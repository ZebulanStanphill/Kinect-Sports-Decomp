extern unsigned int *auStack_28;
extern int fn_829548C8();
extern int fn_8295D0A8();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


unsigned __int64 fn_8295DA88(int *param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int auStack_28;
  
  lVar5 = 0;
  uVar1 = *(unsigned int *)param_1[0x41];
  uVar2 = uVar1 & 0xfff00000;
  if (uVar2 == 0x74300000) {
    uVar4 = fn_8295D0A8(param_1,0x2c);
  }
  else {
    if (uVar2 == 0x74400000) {
      lVar5 = 5;
    }
    else if (uVar2 == 0x74500000) {
      lVar5 = 2;
    }
    else if (uVar2 == 0x74600000) {
      lVar5 = 4;
    }
    else if (uVar2 == 0x74700000) {
      lVar5 = 3;
    }
    uVar4 = fn_8295D0A8(param_1,lVar5 << 0x10 | 0x2d);
    if ((int)uVar4 < 0) {
      return uVar4;
    }
    uVar4 = (**(int (***)())(*param_1 + 0x148))
                      (param_1,*(unsigned int *)(**(int **)(param_1[0x41] + 8) * 4 + param_1[5]),
                       &auStack_28,&uStack_30);
    if ((int)uVar4 < 0) {
      return uVar4;
    }
    uVar4 = (**(int (***)())(*param_1 + 0x14c))
                      (param_1,*(unsigned int *)(param_1[0x41] + 8),uVar1 & 0xfffff,0xf0000,&uStack_2c
                      );
    if ((int)uVar4 < 0) {
      return uVar4;
    }
    uVar4 = (**(int (***)())(*param_1 + 0x13c))(param_1,auStack_28,uStack_2c,uStack_30);
    if ((int)uVar4 < 0) {
      return uVar4;
    }
    iVar3 = (uVar1 & 0xfffff) * 4;
    uVar4 = (**(int (***)())(*param_1 + 0x148))
                      (param_1,*(unsigned int *)
                                (*(int *)(*(int *)(param_1[0x41] + 8) + iVar3) * 4 + param_1[5]),
                       &auStack_28,&uStack_30);
    if ((int)uVar4 < 0) {
      return uVar4;
    }
    uVar4 = (**(int (***)())(*param_1 + 0x14c))
                      (param_1,*(int *)(param_1[0x41] + 8) + iVar3,uVar1 & 0xfffff,0xf0000,
                       &uStack_2c);
    if ((int)uVar4 < 0) {
      return uVar4;
    }
    uVar4 = (**(int (***)())(*param_1 + 0x13c))(param_1,auStack_28,uStack_2c,uStack_30);
  }
  if (((-1 < (int)uVar4) && (uVar4 = (**(int (***)())(*param_1 + 0x134))(param_1), -1 < (int)uVar4)) &&
     (uVar4 = fn_829548C8(param_1), -1 < (int)uVar4)) {
    uVar4 = 0;
  }
  return uVar4;
}

