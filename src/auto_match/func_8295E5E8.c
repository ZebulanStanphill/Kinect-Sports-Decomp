extern unsigned int *auStack_30;
extern int fn_829548C8();
extern int fn_8295D0A8();
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


unsigned __int64 fn_8295E5E8(int *param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int auStack_30 [12];
  
  if (param_1[0xd] == 0) {
    return 0xffffffff80004001;
  }
  lVar6 = 0;
  uVar1 = *(unsigned int *)param_1[0x41];
  uVar3 = uVar1 & 0xfff00000;
  if (uVar3 != 0x10f00000) {
    if (uVar3 == 0x73500000) {
      lVar6 = 3;
      goto LAB_8295e67c;
    }
    if (uVar3 == 0x73600000) {
      lVar6 = 4;
      goto LAB_8295e67c;
    }
    if (uVar3 != 0x73700000) {
      if (uVar3 == 0x73800000) {
        lVar6 = 2;
      }
      goto LAB_8295e67c;
    }
  }
  lVar6 = 5;
LAB_8295e67c:
  uVar5 = fn_8295D0A8(param_1,lVar6 << 0x10 | 0x5e);
  if ((int)uVar5 < 0) {
    return uVar5;
  }
  uVar5 = (**(int (***)())(*param_1 + 0x140))
                    (param_1,*(unsigned int *)(**(int **)(param_1[0x41] + 0x10) * 4 + param_1[5]),
                     &uStack_40,0,auStack_30);
  if ((int)uVar5 < 0) {
    return uVar5;
  }
  uVar5 = (**(int (***)())(*param_1 + 0x144))
                    (param_1,*(unsigned int *)(param_1[0x41] + 0x10),
                     *(unsigned int *)(param_1[0x41] + 0xc),&uStack_34,auStack_30[0]);
  if ((int)uVar5 < 0) {
    return uVar5;
  }
  uVar5 = (**(int (***)())(*param_1 + 0x138))(param_1,uStack_40,uStack_34,0);
  if ((int)uVar5 < 0) {
    return uVar5;
  }
  uVar2 = *(unsigned int *)(*(int *)((unsigned int *)param_1[0x41])[2] * 4 + param_1[5]);
  if ((*(unsigned int *)param_1[0x41] & 0xfff00000) == 0x10f00000) {
    uVar5 = (**(int (***)())(*param_1 + 0x148))(param_1,uVar2,&uStack_40,&uStack_3c);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar5 = (**(int (***)())(*param_1 + 0x14c))
                      (param_1,*(unsigned int *)(param_1[0x41] + 8),
                       *(unsigned int *)(param_1[0x41] + 0xc),uStack_34,&uStack_38);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar5 = (**(int (***)())(*param_1 + 0x13c))(param_1,uStack_40,uStack_38,uStack_3c);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uStack_38 = uStack_38 ^ 0x1000000;
  }
  else {
    uVar5 = (**(int (***)())(*param_1 + 0x148))(param_1,uVar2,&uStack_40,&uStack_3c);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar5 = (**(int (***)())(*param_1 + 0x14c))
                      (param_1,*(unsigned int *)(param_1[0x41] + 8),uVar1 & 0xfffff,uStack_34,
                       &uStack_38);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar5 = (**(int (***)())(*param_1 + 0x13c))(param_1,uStack_40,uStack_38,uStack_3c);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    iVar4 = (uVar1 & 0xfffff) * 4;
    uVar5 = (**(int (***)())(*param_1 + 0x148))
                      (param_1,*(unsigned int *)
                                (*(int *)(*(int *)(param_1[0x41] + 8) + iVar4) * 4 + param_1[5]),
                       &uStack_40,&uStack_3c);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar5 = (**(int (***)())(*param_1 + 0x14c))
                      (param_1,*(int *)(param_1[0x41] + 8) + iVar4,uVar1 & 0xfffff,uStack_34,
                       &uStack_38);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
  }
  uVar5 = (**(int (***)())(*param_1 + 0x13c))(param_1,uStack_40,uStack_38,uStack_3c);
  if (((-1 < (int)uVar5) && (uVar5 = (**(int (***)())(*param_1 + 0x134))(param_1), -1 < (int)uVar5)) &&
     (uVar5 = fn_829548C8(param_1), -1 < (int)uVar5)) {
    uVar5 = 0;
  }
  return uVar5;
}

