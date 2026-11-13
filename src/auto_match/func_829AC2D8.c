unsigned __int64 fn_829AC2D8(int *param_1)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned int *puVar4;
  int iVar6;
  unsigned __int64 uVar5;
  int iVar7;
  unsigned char *pbVar8;
  int *piVar9;
  unsigned int uVar10;
  unsigned __int64 uVar11;
  unsigned int *puVar12;
  unsigned char *pbVar13;
  
  puVar4 = (unsigned int *)param_1[6];
  pbVar13 = (unsigned char *)*puVar4;
  uVar11 = (unsigned __int64)(unsigned int)puVar4[1];
  if (*(int *)(param_1[0x6f] + 0x10) == 0) {
    *(unsigned int *)(*param_1 + 0x14) = 0x3e;
    (**(int (***)())*param_1)();
  }
  if (uVar11 == 0) {
    iVar6 = (*(int (**)())puVar4[3])(param_1);
    if (iVar6 != 0) {
      pbVar13 = (unsigned char *)*puVar4;
      uVar11 = (unsigned __int64)(unsigned int)puVar4[1];
      goto LAB_829ac354;
    }
LAB_829ac340:
    uVar5 = 0;
  }
  else {
LAB_829ac354:
    bVar1 = *pbVar13;
    pbVar13 = pbVar13 + 1;
    uVar11 = uVar11 - 1;
    if (uVar11 == 0) {
      iVar6 = (*(int (**)())puVar4[3])(param_1);
      if (iVar6 == 0) goto LAB_829ac340;
      pbVar13 = (unsigned char *)*puVar4;
      uVar11 = (unsigned __int64)(unsigned int)puVar4[1];
    }
    bVar2 = *pbVar13;
    uVar11 = uVar11 - 1;
    pbVar13 = pbVar13 + 1;
    if (uVar11 == 0) {
      iVar6 = (*(int (**)())puVar4[3])(param_1);
      if (iVar6 == 0) goto LAB_829ac340;
      pbVar13 = (unsigned char *)*puVar4;
      uVar11 = (unsigned __int64)(unsigned int)puVar4[1];
    }
    bVar3 = *pbVar13;
    uVar11 = uVar11 - 1;
    pbVar13 = pbVar13 + 1;
    *(unsigned int *)(*param_1 + 0x14) = 0x67;
    *(unsigned int *)(*param_1 + 0x18) = (unsigned int)bVar3;
    (**(int (***)())(*param_1 + 4))(param_1,1);
    if ((((unsigned int)bVar2 + (unsigned int)bVar1 * 0x100 != (bVar3 + 3) * 2) || (bVar3 == 0)) || (4 < bVar3)) {
      *(unsigned int *)(*param_1 + 0x14) = 0xb;
      (**(int (***)())*param_1)(param_1);
    }
    param_1[0x53] = (unsigned int)bVar3;
    iVar6 = 0;
    if (bVar3 != 0) {
      piVar9 = param_1 + 0x53;
      do {
        if ((uVar11 & 0xffffffff) == 0) {
          iVar7 = (*(int (**)())puVar4[3])(param_1);
          if (iVar7 == 0) goto LAB_829ac340;
          pbVar13 = (unsigned char *)*puVar4;
          uVar11 = (unsigned __int64)(unsigned int)puVar4[1];
        }
        bVar1 = *pbVar13;
        uVar11 = uVar11 - 1;
        pbVar8 = pbVar13 + 1;
        if (uVar11 == 0) {
          iVar7 = (*(int (**)())puVar4[3])(param_1);
          if (iVar7 == 0) goto LAB_829ac340;
          pbVar8 = (unsigned char *)*puVar4;
          uVar11 = (unsigned __int64)(unsigned int)puVar4[1];
        }
        pbVar13 = pbVar8 + 1;
        bVar2 = *pbVar8;
        uVar11 = uVar11 - 1;
        puVar12 = (unsigned int *)param_1[0x37];
        iVar7 = 0;
        uVar10 = (unsigned int)bVar1;
        if (0 < param_1[9]) {
          do {
            if (uVar10 == *puVar12) goto LAB_829ac50c;
            iVar7 = iVar7 + 1;
            puVar12 = puVar12 + 0x15;
          } while (iVar7 < param_1[9]);
        }
        *(unsigned int *)(*param_1 + 0x14) = 5;
        *(unsigned int *)(*param_1 + 0x18) = uVar10;
        (**(int (***)())*param_1)(param_1);
LAB_829ac50c:
        piVar9 = piVar9 + 1;
        *piVar9 = (int)puVar12;
        puVar12[6] = bVar2 & 0xf;
        puVar12[5] = (int)(unsigned int)bVar2 >> 4;
        iVar7 = *param_1;
        *(unsigned int *)(iVar7 + 0x18) = uVar10;
        *(unsigned int *)(iVar7 + 0x1c) = puVar12[5];
        *(unsigned int *)(iVar7 + 0x20) = puVar12[6];
        *(unsigned int *)(*param_1 + 0x14) = 0x68;
        (**(int (***)())(*param_1 + 4))(param_1,1);
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)(unsigned int)bVar3);
    }
    if ((uVar11 & 0xffffffff) == 0) {
      iVar6 = (*(int (**)())puVar4[3])(param_1);
      if (iVar6 == 0) goto LAB_829ac340;
      pbVar13 = (unsigned char *)*puVar4;
      uVar11 = (unsigned __int64)(unsigned int)puVar4[1];
    }
    uVar11 = uVar11 - 1;
    pbVar8 = pbVar13 + 1;
    param_1[0x65] = (unsigned int)*pbVar13;
    if (uVar11 == 0) {
      iVar6 = (*(int (**)())puVar4[3])(param_1);
      if (iVar6 == 0) goto LAB_829ac340;
      pbVar8 = (unsigned char *)*puVar4;
      uVar11 = (unsigned __int64)(unsigned int)puVar4[1];
    }
    uVar11 = uVar11 - 1;
    pbVar13 = pbVar8 + 1;
    param_1[0x66] = (unsigned int)*pbVar8;
    if (uVar11 == 0) {
      iVar6 = (*(int (**)())puVar4[3])(param_1);
      if (iVar6 == 0) goto LAB_829ac340;
      pbVar13 = (unsigned char *)*puVar4;
      uVar11 = (unsigned __int64)(unsigned int)puVar4[1];
    }
    bVar1 = *pbVar13;
    iVar6 = *param_1;
    param_1[0x68] = bVar1 & 0xf;
    param_1[0x67] = (int)(unsigned int)bVar1 >> 4;
    *(int *)(iVar6 + 0x18) = param_1[0x65];
    *(int *)(iVar6 + 0x1c) = param_1[0x66];
    *(int *)(iVar6 + 0x20) = param_1[0x67];
    *(int *)(iVar6 + 0x24) = param_1[0x68];
    *(unsigned int *)(*param_1 + 0x14) = 0x69;
    (**(int (***)())(*param_1 + 4))(param_1,1);
    uVar5 = 1;
    *(unsigned int *)(param_1[0x6f] + 0x14) = 0;
    param_1[0x25] = param_1[0x25] + 1;
    *puVar4 = pbVar13 + 1;
    puVar4[1] = (int)uVar11 + -1;
  }
  return uVar5;
}

