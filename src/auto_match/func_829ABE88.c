unsigned __int64 fn_829ABE88(int *param_1,int param_2,int param_3)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned int *puVar3;
  int iVar5;
  unsigned __int64 uVar4;
  int iVar6;
  unsigned char *pbVar7;
  unsigned char *pbVar8;
  unsigned __int64 uVar9;
  unsigned int *puVar10;
  
  puVar3 = (unsigned int *)param_1[6];
  uVar9 = (unsigned __int64)(unsigned int)puVar3[1];
  pbVar7 = (unsigned char *)*puVar3;
  param_1[0x38] = param_2;
  param_1[0x39] = param_3;
  if (uVar9 == 0) {
    iVar5 = (*(int (**)())puVar3[3])();
    if (iVar5 != 0) {
      pbVar7 = (unsigned char *)*puVar3;
      uVar9 = (unsigned __int64)(unsigned int)puVar3[1];
      goto LAB_829abedc;
    }
LAB_829abec8:
    uVar4 = 0;
  }
  else {
LAB_829abedc:
    bVar1 = *pbVar7;
    uVar9 = uVar9 - 1;
    pbVar7 = pbVar7 + 1;
    if (uVar9 == 0) {
      iVar5 = (*(int (**)())puVar3[3])(param_1);
      if (iVar5 == 0) goto LAB_829abec8;
      pbVar7 = (unsigned char *)*puVar3;
      uVar9 = (unsigned __int64)(unsigned int)puVar3[1];
    }
    bVar2 = *pbVar7;
    uVar9 = uVar9 - 1;
    pbVar7 = pbVar7 + 1;
    if (uVar9 == 0) {
      iVar5 = (*(int (**)())puVar3[3])(param_1);
      if (iVar5 == 0) goto LAB_829abec8;
      pbVar7 = (unsigned char *)*puVar3;
      uVar9 = (unsigned __int64)(unsigned int)puVar3[1];
    }
    uVar9 = uVar9 - 1;
    pbVar8 = pbVar7 + 1;
    param_1[0x36] = (unsigned int)*pbVar7;
    if (uVar9 == 0) {
      iVar5 = (*(int (**)())puVar3[3])(param_1);
      if (iVar5 == 0) goto LAB_829abec8;
      pbVar8 = (unsigned char *)*puVar3;
      uVar9 = (unsigned __int64)(unsigned int)puVar3[1];
    }
    uVar9 = uVar9 - 1;
    pbVar7 = pbVar8 + 1;
    param_1[8] = (unsigned int)*pbVar8 << 8;
    if (uVar9 == 0) {
      iVar5 = (*(int (**)())puVar3[3])(param_1);
      if (iVar5 == 0) goto LAB_829abec8;
      pbVar7 = (unsigned char *)*puVar3;
      uVar9 = (unsigned __int64)(unsigned int)puVar3[1];
    }
    pbVar8 = pbVar7 + 1;
    uVar9 = uVar9 - 1;
    param_1[8] = (unsigned int)*pbVar7 + param_1[8];
    if (uVar9 == 0) {
      iVar5 = (*(int (**)())puVar3[3])(param_1);
      if (iVar5 == 0) goto LAB_829abec8;
      pbVar8 = (unsigned char *)*puVar3;
      uVar9 = (unsigned __int64)(unsigned int)puVar3[1];
    }
    uVar9 = uVar9 - 1;
    pbVar7 = pbVar8 + 1;
    param_1[7] = (unsigned int)*pbVar8 << 8;
    if (uVar9 == 0) {
      iVar5 = (*(int (**)())puVar3[3])(param_1);
      if (iVar5 == 0) goto LAB_829abec8;
      pbVar7 = (unsigned char *)*puVar3;
      uVar9 = (unsigned __int64)(unsigned int)puVar3[1];
    }
    uVar9 = uVar9 - 1;
    pbVar8 = pbVar7 + 1;
    param_1[7] = (unsigned int)*pbVar7 + param_1[7];
    if (uVar9 == 0) {
      iVar5 = (*(int (**)())puVar3[3])(param_1);
      if (iVar5 == 0) goto LAB_829abec8;
      pbVar8 = (unsigned char *)*puVar3;
      uVar9 = (unsigned __int64)(unsigned int)puVar3[1];
    }
    pbVar7 = pbVar8 + 1;
    uVar9 = uVar9 - 1;
    iVar5 = *param_1;
    param_1[9] = (unsigned int)*pbVar8;
    *(int *)(iVar5 + 0x18) = param_1[0x69];
    *(int *)(iVar5 + 0x1c) = param_1[7];
    *(int *)(iVar5 + 0x20) = param_1[8];
    *(int *)(iVar5 + 0x24) = param_1[9];
    *(unsigned int *)(*param_1 + 0x14) = 100;
    (**(int (***)())(*param_1 + 4))(param_1,1);
    if (*(int *)(param_1[0x6f] + 0x10) != 0) {
      *(unsigned int *)(*param_1 + 0x14) = 0x3a;
      (**(int (***)())*param_1)(param_1);
    }
    if (((param_1[8] == 0) || (param_1[7] == 0)) || (param_1[9] < 1)) {
      *(unsigned int *)(*param_1 + 0x14) = 0x20;
      (**(int (***)())*param_1)(param_1);
    }
    if ((unsigned int)bVar2 + (unsigned int)bVar1 * 0x100 + -8 != param_1[9] * 3) {
      *(unsigned int *)(*param_1 + 0x14) = 0xb;
      (**(int (***)())*param_1)(param_1);
    }
    if (param_1[0x37] == 0) {
      iVar5 = (**(int (***)())param_1[1])(param_1,1,(unsigned __int64)(unsigned int)param_1[9] * 0x54);
      param_1[0x37] = iVar5;
    }
    iVar5 = 0;
    if (0 < param_1[9]) {
      puVar10 = (unsigned int *)(param_1[0x37] + -0x44);
      do {
        puVar10[0x12] = iVar5;
        if ((uVar9 & 0xffffffff) == 0) {
          iVar6 = (*(int (**)())puVar3[3])(param_1);
          if (iVar6 == 0) goto LAB_829abec8;
          pbVar7 = (unsigned char *)*puVar3;
          uVar9 = (unsigned __int64)(unsigned int)puVar3[1];
        }
        uVar9 = uVar9 - 1;
        pbVar8 = pbVar7 + 1;
        puVar10[0x11] = (unsigned int)*pbVar7;
        if (uVar9 == 0) {
          iVar6 = (*(int (**)())puVar3[3])(param_1);
          if (iVar6 == 0) goto LAB_829abec8;
          pbVar8 = (unsigned char *)*puVar3;
          uVar9 = (unsigned __int64)(unsigned int)puVar3[1];
        }
        bVar1 = *pbVar8;
        uVar9 = uVar9 - 1;
        pbVar8 = pbVar8 + 1;
        puVar10[0x14] = bVar1 & 0xf;
        puVar10[0x13] = (int)(unsigned int)bVar1 >> 4;
        if (uVar9 == 0) {
          iVar6 = (*(int (**)())puVar3[3])(param_1);
          if (iVar6 == 0) goto LAB_829abec8;
          pbVar8 = (unsigned char *)*puVar3;
          uVar9 = (unsigned __int64)(unsigned int)puVar3[1];
        }
        pbVar7 = pbVar8 + 1;
        uVar9 = uVar9 - 1;
        puVar10[0x15] = (unsigned int)*pbVar8;
        iVar6 = *param_1;
        *(unsigned int *)(iVar6 + 0x18) = puVar10[0x11];
        *(unsigned int *)(iVar6 + 0x1c) = puVar10[0x13];
        *(unsigned int *)(iVar6 + 0x20) = puVar10[0x14];
        puVar10 = puVar10 + 0x15;
        *(unsigned int *)(iVar6 + 0x24) = *puVar10;
        *(unsigned int *)(*param_1 + 0x14) = 0x65;
        (**(int (***)())(*param_1 + 4))(param_1,1);
        iVar5 = iVar5 + 1;
      } while (iVar5 < param_1[9]);
    }
    uVar4 = 1;
    *(unsigned int *)(param_1[0x6f] + 0x10) = 1;
    *puVar3 = pbVar7;
    puVar3[1] = (int)uVar9;
  }
  return uVar4;
}

