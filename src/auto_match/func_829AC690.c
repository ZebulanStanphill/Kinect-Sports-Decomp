extern int fn_829B6DA0();
extern int memcpy();


unsigned __int64 fn_829AC690(int *param_1)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned int *puVar3;
  int iVar5;
  unsigned __int64 uVar4;
  int iVar6;
  int iVar7;
  unsigned __int64 uVar8;
  unsigned char *pbVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  int iVar12;
  unsigned int *puVar13;
  unsigned char *pbVar14;
  unsigned char abStack_1a0 [32];
  unsigned char abStack_180 [384];
  
  puVar3 = (unsigned int *)param_1[6];
  uVar8 = (unsigned __int64)(unsigned int)puVar3[1];
  pbVar9 = (unsigned char *)*puVar3;
  if (uVar8 == 0) {
    iVar5 = (*(int (**)())puVar3[3])();
    if (iVar5 != 0) {
      pbVar9 = (unsigned char *)*puVar3;
      uVar8 = (unsigned __int64)(unsigned int)puVar3[1];
      goto LAB_829ac6dc;
    }
LAB_829ac6c8:
    uVar4 = 0;
  }
  else {
LAB_829ac6dc:
    bVar1 = *pbVar9;
    uVar8 = uVar8 - 1;
    pbVar9 = pbVar9 + 1;
    if (uVar8 == 0) {
      iVar5 = (*(int (**)())puVar3[3])(param_1);
      if (iVar5 == 0) goto LAB_829ac6c8;
      pbVar9 = (unsigned char *)*puVar3;
      uVar8 = (unsigned __int64)(unsigned int)puVar3[1];
    }
    pbVar14 = pbVar9 + 1;
    uVar8 = uVar8 - 1;
    uVar11 = (unsigned int)uVar8;
    iVar5 = (unsigned int)*pbVar9 + (unsigned int)bVar1 * 0x100 + -2;
    while (0x10 < iVar5) {
      if ((uVar8 & 0xffffffff) == 0) {
        iVar6 = (*(int (**)())puVar3[3])(param_1);
        if (iVar6 == 0) goto LAB_829ac6c8;
        pbVar14 = (unsigned char *)*puVar3;
        uVar8 = (unsigned __int64)(unsigned int)puVar3[1];
      }
      bVar1 = *pbVar14;
      uVar10 = (unsigned int)bVar1;
      uVar8 = uVar8 - 1;
      pbVar14 = pbVar14 + 1;
      *(unsigned int *)(*param_1 + 0x14) = 0x50;
      *(unsigned int *)(*param_1 + 0x18) = (unsigned int)bVar1;
      (**(int (***)())(*param_1 + 4))(param_1,1);
      iVar6 = 0;
      abStack_1a0[0] = 0;
      iVar12 = 1;
      do {
        if ((uVar8 & 0xffffffff) == 0) {
          iVar7 = (*(int (**)())puVar3[3])(param_1);
          if (iVar7 == 0) goto LAB_829ac6c8;
          pbVar14 = (unsigned char *)*puVar3;
          uVar8 = (unsigned __int64)(unsigned int)puVar3[1];
        }
        bVar2 = *pbVar14;
        uVar8 = uVar8 - 1;
        pbVar9 = abStack_1a0 + iVar12;
        iVar12 = iVar12 + 1;
        pbVar14 = pbVar14 + 1;
        *pbVar9 = bVar2;
        iVar6 = (unsigned int)bVar2 + iVar6;
      } while (iVar12 < 0x11);
      iVar12 = *param_1;
      *(unsigned int *)(iVar12 + 0x18) = (unsigned int)abStack_1a0[1];
      *(unsigned int *)(iVar12 + 0x1c) = (unsigned int)abStack_1a0[2];
      *(unsigned int *)(iVar12 + 0x20) = (unsigned int)abStack_1a0[3];
      *(unsigned int *)(iVar12 + 0x24) = (unsigned int)abStack_1a0[4];
      *(unsigned int *)(iVar12 + 0x28) = (unsigned int)abStack_1a0[5];
      *(unsigned int *)(iVar12 + 0x2c) = (unsigned int)abStack_1a0[6];
      *(unsigned int *)(iVar12 + 0x30) = (unsigned int)abStack_1a0[7];
      *(unsigned int *)(iVar12 + 0x34) = (unsigned int)abStack_1a0[8];
      iVar12 = *param_1;
      *(unsigned int *)(iVar12 + 0x14) = 0x56;
      (**(int (***)())(*param_1 + 4))(param_1,2,*param_1,iVar12,abStack_1a0[8]);
      iVar12 = *param_1;
      *(unsigned int *)(iVar12 + 0x18) = (unsigned int)abStack_1a0[9];
      *(unsigned int *)(iVar12 + 0x1c) = (unsigned int)abStack_1a0[10];
      *(unsigned int *)(iVar12 + 0x20) = (unsigned int)abStack_1a0[0xb];
      *(unsigned int *)(iVar12 + 0x24) = (unsigned int)abStack_1a0[0xc];
      *(unsigned int *)(iVar12 + 0x28) = (unsigned int)abStack_1a0[0xd];
      *(unsigned int *)(iVar12 + 0x2c) = (unsigned int)abStack_1a0[0xe];
      *(unsigned int *)(iVar12 + 0x30) = (unsigned int)abStack_1a0[0xf];
      *(unsigned int *)(iVar12 + 0x34) = (unsigned int)abStack_1a0[0x10];
      iVar12 = *param_1;
      *(unsigned int *)(iVar12 + 0x14) = 0x56;
      (**(int (***)())(*param_1 + 4))(param_1,2,*param_1,iVar12,abStack_1a0[0x10]);
      if ((0x100 < iVar6) || (iVar5 + -0x11 < iVar6)) {
        *(unsigned int *)(*param_1 + 0x14) = 8;
        (**(int (***)())*param_1)(param_1);
      }
      iVar12 = 0;
      if (0 < iVar6) {
        do {
          if ((uVar8 & 0xffffffff) == 0) {
            iVar7 = (*(int (**)())puVar3[3])(param_1);
            if (iVar7 == 0) goto LAB_829ac6c8;
            pbVar14 = (unsigned char *)*puVar3;
            uVar8 = (unsigned __int64)(unsigned int)puVar3[1];
          }
          bVar2 = *pbVar14;
          uVar8 = uVar8 - 1;
          pbVar14 = pbVar14 + 1;
          abStack_180[iVar12] = bVar2;
          iVar12 = iVar12 + 1;
        } while (iVar12 < iVar6);
      }
      uVar11 = (unsigned int)uVar8;
      iVar5 = (iVar5 + -0x11) - iVar6;
      if ((bVar1 & 0x10) == 0) {
        iVar6 = bVar1 + 0x2e;
      }
      else {
        uVar10 = bVar1 - 0x10;
        iVar6 = bVar1 + 0x22;
      }
      puVar13 = (unsigned int *)(param_1 + iVar6);
      if (((int)uVar10 < 0) || (3 < (int)uVar10)) {
        *(unsigned int *)(*param_1 + 0x14) = 0x1e;
        *(unsigned int *)(*param_1 + 0x18) = uVar10;
        (**(int (***)())*param_1)(param_1);
      }
      if (*puVar13 == 0) {
        uVar10 = fn_829B6DA0(param_1);
        *puVar13 = uVar10;
      }
      memcpy(*puVar13,abStack_1a0,0x11);
      memcpy((unsigned __int64)*puVar13 + 0x11,abStack_180,0x100);
    }
    if (iVar5 != 0) {
      *(unsigned int *)(*param_1 + 0x14) = 0xb;
      (**(int (***)())*param_1)(param_1);
    }
    *puVar3 = pbVar14;
    uVar4 = 1;
    puVar3[1] = uVar11;
  }
  return uVar4;
}

