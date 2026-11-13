extern unsigned int *auStack_50;
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82DFEA50();
extern int fn_82DFEB38();
extern int memcpy();


int fn_82DFEC58(int param_1,int param_2)

{
  int *piVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  unsigned char *puVar8;
  unsigned __int64 uVar9;
  __int64 lVar10;
  __int64 lVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  unsigned int *puVar14;
  unsigned int *puVar15;
  unsigned int auStack_50 [20];
  
  fn_82DFEB38();
  puVar15 = (unsigned int *)(param_1 + 0x48);
  *(unsigned int *)(param_1 + 0x1c) = *(unsigned int *)(param_2 + 0x1c);
  *(unsigned int *)(param_1 + 0x20) = *(unsigned int *)(param_2 + 0x20);
  *(unsigned int *)(param_1 + 0x24) = *(unsigned int *)(param_2 + 0x24);
  *(unsigned int *)(param_1 + 0x28) = *(unsigned int *)(param_2 + 0x28);
  *(unsigned int *)(param_1 + 0x2c) = *(unsigned int *)(param_2 + 0x2c);
  *(unsigned int *)(param_1 + 0x30) = *(unsigned int *)(param_2 + 0x30);
  *(unsigned int *)(param_1 + 0x34) = *(unsigned int *)(param_2 + 0x34);
  *(unsigned int *)(param_1 + 0x38) = *(unsigned int *)(param_2 + 0x38);
  *(unsigned int *)(param_1 + 0x3c) = *(unsigned int *)(param_2 + 0x3c);
  *(unsigned int *)(param_1 + 0x40) = *(unsigned int *)(param_2 + 0x40);
  *(unsigned int *)(param_1 + 0x44) = *(unsigned int *)(param_2 + 0x44);
  iVar4 = fn_82CE5410();
  uVar6 = *(unsigned int *)(param_2 + 0x4c);
  uVar9 = (unsigned __int64)uVar6;
  uVar7 = (unsigned __int64)*(unsigned int *)(param_1 + 0x4c);
  if ((int)uVar6 <= (int)*(unsigned int *)(param_1 + 0x4c)) {
    uVar7 = uVar9;
  }
  if ((int)(*(unsigned int *)(param_1 + 0x50) & 0x3fffffff) < (int)uVar6) {
    uVar13 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x50) & 0x3fffffff) << 1;
    if ((int)uVar13 <= (int)uVar6) {
      uVar13 = uVar9;
    }
    fn_82CE6310(*(unsigned int *)(iVar4 + 0x10),puVar15,uVar13,0xe0);
  }
  uVar13 = (unsigned __int64)*puVar15;
  if (0 < (int)uVar7) {
    lVar10 = *(unsigned int *)(param_2 + 0x48) - uVar13;
    uVar12 = uVar7;
    do {
      fn_82DFEA50(uVar13,lVar10 + uVar13);
      uVar12 = uVar12 - 1;
      uVar13 = uVar13 + 0xe0;
    } while (uVar12 != 0);
  }
  lVar10 = uVar9 - uVar7;
  uVar9 = uVar7 * 0xe0 + (unsigned __int64)*puVar15;
  if (0 < lVar10) {
    lVar11 = (uVar7 * 0xe0 + (unsigned __int64)*(unsigned int *)(param_2 + 0x48)) - uVar9;
    do {
      if ((uVar9 & 0xffffffff) != 0) {
        memcpy(uVar9,lVar11 + uVar9,0xe0);
      }
      lVar10 = lVar10 + -1;
      uVar9 = uVar9 + 0xe0;
    } while (lVar10 != 0);
  }
  *(unsigned int *)(param_1 + 0x4c) = uVar6;
  memcpy(param_1 + 0x54,param_2 + 0x54,0x48);
  puVar14 = (unsigned int *)(param_1 + 0xa0);
  *(unsigned int *)(param_1 + 0x9c) = *(unsigned int *)(param_2 + 0x9c);
  iVar4 = fn_82CE5410();
  uVar6 = *(unsigned int *)(param_1 + 0xa8) & 0x3fffffff;
  piVar1 = *(int **)(iVar4 + 0x10);
  if ((int)uVar6 < *(int *)(param_2 + 0xa4)) {
    if ((*(unsigned int *)(param_1 + 0xa8) & 0x80000000) == 0) {
      (**(int (***)())(*piVar1 + 0x10))(piVar1,*puVar14,uVar6,1);
    }
    auStack_50[0] = *(unsigned int *)(param_2 + 0xa4);
    uVar5 = (**(int (***)())(*piVar1 + 0xc))(piVar1,auStack_50,1);
    *puVar14 = uVar5;
    *(unsigned int *)(param_1 + 0xa8) = auStack_50[0];
  }
  uVar6 = *(unsigned int *)(param_2 + 0xa4);
  uVar7 = (unsigned __int64)uVar6;
  puVar8 = (unsigned char *)*puVar14;
  *(unsigned int *)(param_1 + 0xa4) = uVar6;
  if (0 < (int)uVar6) {
    iVar4 = *(int *)(param_2 + 0xa0) - (int)puVar8;
    do {
      *puVar8 = puVar8[iVar4];
      puVar8 = puVar8 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  *(unsigned int *)(param_1 + 0xac) = *(unsigned int *)(param_2 + 0xac);
  puVar15 = (unsigned int *)(param_1 + 0xc0);
  *(unsigned char *)(param_1 + 0xb0) = *(unsigned char *)(param_2 + 0xb0);
  *(unsigned int *)(param_1 + 0xb4) = *(unsigned int *)(param_2 + 0xb4);
  *(unsigned int *)(param_1 + 0xb8) = *(unsigned int *)(param_2 + 0xb8);
  *(unsigned int *)(param_1 + 0xbc) = *(unsigned int *)(param_2 + 0xbc);
  iVar4 = fn_82CE5410();
  uVar6 = *(unsigned int *)(param_1 + 200) & 0x3fffffff;
  piVar1 = *(int **)(iVar4 + 0x10);
  if ((int)uVar6 < *(int *)(param_2 + 0xc4)) {
    if ((*(unsigned int *)(param_1 + 200) & 0x80000000) == 0) {
      (**(int (***)())(*piVar1 + 0x10))(piVar1,*puVar15,uVar6,4);
    }
    auStack_50[0] = *(unsigned int *)(param_2 + 0xc4);
    uVar6 = (**(int (***)())(*piVar1 + 0xc))(piVar1,auStack_50,4);
    *puVar15 = uVar6;
    *(unsigned int *)(param_1 + 200) = auStack_50[0];
  }
  uVar6 = *(unsigned int *)(param_2 + 0xc4);
  uVar7 = 0;
  uVar2 = *puVar15;
  *(unsigned int *)(param_1 + 0xc4) = uVar6;
  iVar4 = *(int *)(param_2 + 0xc0);
  if (3 < (int)uVar6) {
    puVar14 = (unsigned int *)(iVar4 + -4);
    lVar11 = (unsigned __int64)uVar2 + 4;
    lVar10 = (((unsigned __int64)uVar6 - 4 & 0xffffffff) >> 2) + 1;
    uVar7 = lVar10 * 4 & 0xfffffffc;
    do {
      puVar3 = (unsigned int *)lVar11;
      puVar3[-1] = puVar14[1];
      *puVar3 = *(unsigned int *)((iVar4 - uVar2) + (int)puVar3);
      puVar3[1] = puVar14[3];
      puVar14 = puVar14 + 4;
      puVar3[2] = *puVar14;
      lVar11 = lVar11 + 0x10;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  if ((int)uVar7 < (int)uVar6) {
    lVar10 = uVar6 - uVar7;
    lVar11 = (uVar7 & 0x3fffffff) * 4 + (unsigned __int64)uVar2;
    do {
      *(unsigned int *)lVar11 = *(unsigned int *)((int)(unsigned int *)lVar11 + (iVar4 - uVar2));
      lVar11 = lVar11 + 4;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  *(unsigned char *)(param_1 + 0xcc) = *(unsigned char *)(param_2 + 0xcc);
  *(unsigned char *)(param_1 + 0xcd) = *(unsigned char *)(param_2 + 0xcd);
  *(unsigned char *)(param_1 + 0xce) = *(unsigned char *)(param_2 + 0xce);
  *(unsigned int *)(param_1 + 0xd0) = *(unsigned int *)(param_2 + 0xd0);
  return param_1;
}

