extern unsigned int *auStack_a0;
extern int fn_823AA458();
extern int fn_82AB15D0();
extern int fn_82AB8598();
extern int fn_82B69A00();
extern int fn_82B69A80();
extern int fn_82B6A390();
extern int fn_82B6D908();
extern int fn_82F68CC0();
extern unsigned int lbl_820D9248;


unsigned __int64 fn_82B6A768(unsigned int *param_1,int param_2,unsigned __int64 param_3,int param_4)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar4;
  int iVar7;
  unsigned __int64 uVar5;
  unsigned int *puVar8;
  unsigned int *puVar9;
  unsigned __int64 uVar6;
  unsigned int *puVar10;
  __int64 lVar11;
  unsigned int *puVar12;
  unsigned __int64 uVar13;
  unsigned int *puVar14;
  unsigned int *puVar15;
  unsigned char auStack_a0 [160];
  
  if (param_1 == (unsigned int *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d965c,0xffffffff820d95d8,0x61a);
  }
  if (param_2 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9650,0xffffffff820d95d8,0x61b);
  }
  if ((param_3 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9640,0xffffffff820d95d8,0x61c);
  }
  if (param_3 == 0xffffffffffffff14) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9230,0xffffffff820d95d8,0x61f);
  }
  uVar4 = fn_82B69A00(param_1[3],0);
  if (param_4 != 0) {
    uVar4 = 0xffc;
  }
  puVar10 = (unsigned int *)param_3;
  fn_823AA458(*puVar10);
  iVar7 = fn_82AB8598();
  uVar5 = fn_82B6A390(param_2);
  puVar8 = (unsigned int *)(*(int (**)())param_1[1])(*param_1,(uVar5 & 0x3fffffff) << 2);
  puVar9 = (unsigned int *)(*(int (**)())puVar10[0x3d])(puVar10[0x3c],uVar5);
  *puVar9 = 0xc00b2500;
  uVar13 = 0;
  puVar15 = puVar9 + 1;
  puVar14 = puVar8;
  do {
    iVar2 = (int)((uVar13 + 1 & 0xffffffff) << 2);
    puVar12 = *(unsigned int **)(*(int *)(iVar2 + param_2) + 0x20);
    uVar6 = fn_82B69A80(uVar13);
    if ((uVar6 & uVar4) == 0) {
      *puVar15 = puVar12[1] | *(unsigned int *)(*(int *)(iVar2 + param_2) + 0x10);
    }
    else {
      uVar6 = (unsigned __int64)*puVar12;
      puVar12 = puVar12 + 2;
      lVar11 = 0;
      if (uVar6 != 0) {
        do {
          if (*(unsigned int *)(&lbl_820D9248 + (int)((uVar13 * 0x26 + lVar11 & 0xffffffff) << 2)) != 0) {
            uVar1 = *puVar12;
            *puVar14 = *(unsigned int *)(&lbl_820D9248 + (int)((uVar13 * 0x26 + lVar11 & 0xffffffff) << 2));
            puVar14[1] = uVar1;
            puVar14 = puVar14 + 2;
          }
          lVar11 = lVar11 + 1;
          puVar12 = puVar12 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      *puVar15 = 0x10;
    }
    puVar12 = puVar15 + 1;
    if ((uVar13 & 0xffffffff) == 0) {
      puVar15[1] = 0x10;
      puVar15[2] = 0x10;
      puVar12 = puVar15 + 3;
    }
    puVar15 = puVar12;
    uVar13 = uVar13 + 1;
  } while ((uVar13 & 0xffffffff) < 6);
  puVar12 = *(unsigned int **)(*(int *)(param_2 + 0x20) + 0x20);
  if ((uVar4 & 4) == 0) {
    if (iVar7 == 0) {
      *puVar15 = *(unsigned int *)(*(int *)(param_2 + 0x20) + 0x10);
      puVar15 = puVar15 + 1;
      *puVar15 = puVar12[1];
    }
    else {
      *puVar15 = 0x10;
    }
  }
  else {
    uVar1 = *puVar12;
    *puVar14 = (uVar1 + 1) * 0x10000 & 0x3fff0000 | 0xc0002b00;
    puVar14[1] = 0;
    puVar14[2] = uVar1;
    fn_82F68CC0(puVar14 + 3,puVar12 + 2,*puVar12 << 2);
    *puVar15 = 0x10;
    puVar15 = puVar15 + 1;
    *puVar15 = 0;
    puVar14 = puVar14 + 3 + uVar1;
  }
  iVar2 = *(int *)(param_2 + 0x1c);
  puVar3 = *(unsigned int **)(iVar2 + 0x20);
  puVar12 = puVar15 + 1;
  if ((uVar4 & 8) == 0) {
    if (iVar7 == 0) {
      *puVar12 = *(unsigned int *)(iVar2 + 0x10);
    }
    else {
      *puVar12 = 0x10;
      puVar15[2] = 0xc0012700;
      puVar12 = puVar15 + 3;
      *puVar12 = *(unsigned int *)(iVar2 + 0x10) | 2;
    }
    puVar15 = puVar12 + 1;
    *puVar15 = puVar3[1];
  }
  else {
    uVar1 = *puVar3;
    *puVar14 = (uVar1 + 1) * 0x10000 & 0x3fff0000 | 0xc0002b00;
    puVar14[1] = 1;
    puVar14[2] = uVar1;
    fn_82F68CC0(puVar14 + 3,puVar3 + 2,*puVar3 << 2);
    *puVar12 = 0x10;
    puVar15 = puVar15 + 2;
    *puVar15 = 0;
    puVar14 = puVar14 + 3 + uVar1;
  }
  iVar7 = (int)puVar14 - (int)puVar8 >> 2;
  fn_82F68CC0(puVar15 + 1,puVar8,iVar7 << 2);
  uVar4 = (__int64)((int)(puVar15 + 1) - (int)puVar9 >> 2) + (__int64)iVar7;
  if ((uVar5 & 0xffffffff) < (uVar4 & 0xffffffff)) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9690,0xffffffff820d95d8,0x6a6);
  }
  (*(int (**)())puVar10[0x40])(puVar10[0x3c],uVar4,auStack_a0);
  fn_82B6D908(param_2,auStack_a0);
  (*(int (**)())param_1[2])(*param_1,puVar8);
  return 0;
}

