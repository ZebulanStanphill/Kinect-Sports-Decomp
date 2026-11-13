unsigned __int64 fn_829AD6F0(int *param_1)

{
  unsigned char bVar1;
  unsigned int *puVar2;
  int iVar4;
  unsigned __int64 uVar3;
  unsigned __int64 uVar5;
  unsigned char *pbVar6;
  unsigned int uVar7;
  
  puVar2 = (unsigned int *)param_1[6];
  uVar5 = (unsigned __int64)(unsigned int)puVar2[1];
  pbVar6 = (unsigned char *)*puVar2;
  if (uVar5 == 0) {
    iVar4 = (*(int (**)())puVar2[3])();
    if (iVar4 != 0) {
      pbVar6 = (unsigned char *)*puVar2;
      uVar5 = (unsigned __int64)(unsigned int)puVar2[1];
      goto LAB_829ad73c;
    }
LAB_829ad728:
    uVar3 = 0;
  }
  else {
LAB_829ad73c:
    bVar1 = *pbVar6;
    uVar5 = uVar5 - 1;
    pbVar6 = pbVar6 + 1;
    if (uVar5 == 0) {
      iVar4 = (*(int (**)())puVar2[3])(param_1);
      if (iVar4 == 0) goto LAB_829ad728;
      pbVar6 = (unsigned char *)*puVar2;
      uVar5 = (unsigned __int64)(unsigned int)puVar2[1];
    }
    uVar7 = (unsigned int)*pbVar6;
    if ((bVar1 != 0xff) || (uVar7 != 0xd8)) {
      *(unsigned int *)(*param_1 + 0x14) = 0x35;
      *(unsigned int *)(*param_1 + 0x18) = (unsigned int)bVar1;
      *(unsigned int *)(*param_1 + 0x1c) = uVar7;
      (**(int (***)())*param_1)(param_1);
    }
    param_1[0x69] = uVar7;
    uVar3 = 1;
    *puVar2 = pbVar6 + 1;
    puVar2[1] = (int)uVar5 + -1;
  }
  return uVar3;
}

