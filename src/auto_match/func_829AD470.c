unsigned __int64 fn_829AD470(int *param_1)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned int *puVar3;
  int iVar5;
  unsigned __int64 uVar4;
  unsigned __int64 uVar6;
  unsigned char *pbVar7;
  __int64 lVar8;
  
  puVar3 = (unsigned int *)param_1[6];
  uVar6 = (unsigned __int64)(unsigned int)puVar3[1];
  pbVar7 = (unsigned char *)*puVar3;
  if (uVar6 == 0) {
    iVar5 = (*(int (**)())puVar3[3])();
    if (iVar5 != 0) {
      pbVar7 = (unsigned char *)*puVar3;
      uVar6 = (unsigned __int64)(unsigned int)puVar3[1];
      goto LAB_829ad4bc;
    }
LAB_829ad4a8:
    uVar4 = 0;
  }
  else {
LAB_829ad4bc:
    bVar1 = *pbVar7;
    uVar6 = uVar6 - 1;
    pbVar7 = pbVar7 + 1;
    if (uVar6 == 0) {
      iVar5 = (*(int (**)())puVar3[3])(param_1);
      if (iVar5 == 0) goto LAB_829ad4a8;
      pbVar7 = (unsigned char *)*puVar3;
      uVar6 = (unsigned __int64)(unsigned int)puVar3[1];
    }
    bVar2 = *pbVar7;
    *(unsigned int *)(*param_1 + 0x14) = 0x5b;
    lVar8 = (unsigned __int64)bVar2 + (unsigned __int64)bVar1 * 0x100 + -2;
    *(int *)(*param_1 + 0x18) = param_1[0x69];
    iVar5 = (int)lVar8;
    *(int *)(*param_1 + 0x1c) = iVar5;
    (**(int (***)())(*param_1 + 4))(param_1,1);
    *puVar3 = pbVar7 + 1;
    puVar3[1] = (int)uVar6 + -1;
    if (0 < iVar5) {
      (**(int (***)())(param_1[6] + 0x10))(param_1,lVar8);
    }
    uVar4 = 1;
  }
  return uVar4;
}

