extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern int fn_82230300();
extern int fn_8225BD88();
extern int fn_8225BFE0();
extern int fn_8225F160();
extern int fn_82270B70();
extern int fn_82272D90();
extern int fn_822A1CA8();
extern int fn_82460C90();
extern int fn_82460EB0();
extern int fn_82465548();
extern int fn_82466950();
extern int fn_824669A8();
extern int fn_8246B5D8();
extern int fn_82471FC8();
extern int fn_8249ABC0();
extern int fn_8249D980();
extern int fn_8249DA08();
extern int fn_82512B70();
extern int fn_8251FA58();
extern int fn_8259BDA8();
extern int fn_8265CA20();
extern unsigned int lbl_821BBD08;
extern unsigned int lbl_821C2CCC;
extern unsigned int lbl_82460EAF;
extern unsigned int lbl_832765BC;
extern unsigned int lbl_832766CC;
extern unsigned int lbl_832766D0;
extern unsigned int uRam832810e8;
extern unsigned int uStack_40;
extern unsigned int uStack_60;


void fn_8245EF30(unsigned int *param_1)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned int *puVar6;
  __int64 lVar4;
  __int64 lVar5;
  unsigned int *puVar8;
  int *piVar9;
  unsigned __int64 uVar7;
  unsigned int *apuStack_80 [4];
  unsigned char auStack_70 [16];
  unsigned int uStack_60;
  unsigned char auStack_50 [16];
  unsigned int uStack_40;
  
  uStack_60 = 0;
  *param_1 = &lbl_821BBD08;
  uStack_40 = 0;
  lbl_832765BC = 0;
  fn_822A1CA8(auStack_50,auStack_70);
  iVar1 = fn_82270B70();
  puVar6 = *(unsigned int **)(iVar1 + 0xf8);
  puVar8 = puVar6;
  puVar3 = (unsigned int *)puVar6[1];
  while (*(char *)((int)puVar3 + 0x11) == '\0') {
    if (&lbl_82460EAF < (int (**)())puVar3[3]) {
      if ((*(char *)((int)puVar6 + 0x11) != '\0') && (fn_82460EB0 < (int (**)())puVar3[3])) {
        puVar6 = puVar3;
      }
      puVar8 = puVar3;
      puVar3 = (unsigned int *)*puVar3;
    }
    else {
      puVar3 = (unsigned int *)puVar3[2];
    }
  }
  if (*(char *)((int)puVar6 + 0x11) == '\0') {
    puVar3 = (unsigned int *)*puVar6;
  }
  else {
    puVar3 = *(unsigned int **)(*(int *)(iVar1 + 0xf8) + 4);
  }
  while (apuStack_80[0] = puVar8, *(char *)((int)puVar3 + 0x11) == '\0') {
    if ((unsigned int)puVar3[3] < 0x82460eb1) {
      puVar3 = (unsigned int *)puVar3[2];
    }
    else {
      puVar6 = puVar3;
      puVar3 = (unsigned int *)*puVar3;
    }
  }
  while (apuStack_80[0] != puVar6) {
    fn_8259BDA8(apuStack_80);
  }
  fn_82272D90(apuStack_80,iVar1 + 0xf4,puVar8,puVar6);
  puVar6 = (unsigned int *)param_1[0xe];
  if (puVar6 != (unsigned int *)0x0) {
    (**(int (***)())*puVar6)(puVar6,1);
  }
  iVar1 = param_1[0x13];
  if (iVar1 != 0) {
    fn_82471FC8(iVar1);
    fn_8265CA20(iVar1);
  }
  iVar1 = param_1[0x14];
  if (iVar1 != 0) {
    piVar9 = (int *)(iVar1 + 0x38);
    lVar4 = 2;
    lbl_832766D0 = 0;
    do {
      if (piVar9[-1] != 0) {
        fn_8246B5D8();
      }
      if (*piVar9 != 0) {
        fn_8246B5D8();
      }
      lVar4 = lVar4 + -1;
      piVar9 = piVar9 + 0x10;
    } while (lVar4 != 0);
    fn_8265CA20(iVar1);
  }
  if (param_1[10] != 0) {
    fn_8265CA20();
  }
  piVar9 = (int *)param_1[0x26];
  if (piVar9 != (int *)0x0) {
    if (*piVar9 != 0) {
      fn_8251FA58();
      *piVar9 = 0;
    }
    fn_8265CA20(piVar9);
  }
  uVar7 = (unsigned __int64)(unsigned int)param_1[0xd];
  if (uVar7 != 0) {
    lbl_832766CC = 0;
    fn_824669A8(uVar7 + 0x60);
    fn_824669A8(uVar7 + 0x50);
    fn_824669A8(uVar7 + 0x40);
    fn_824669A8(uVar7 + 0x30);
    lVar5 = uVar7 + 0x30;
    lVar4 = 1;
    do {
      lVar5 = lVar5 + -0x14;
      fn_82466950(lVar5);
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
    fn_8265CA20(uVar7);
  }
  if (param_1[0x28] != 0) {
    fn_8265CA20();
  }
  iVar1 = param_1[0x27];
  if (iVar1 != 0) {
    fn_82465548(iVar1);
    fn_8265CA20(iVar1);
  }
  fn_82460C90(param_1,0);
  uRam832810e8 = 0;
  iVar1 = fn_8225BD88();
  if (*(int *)(iVar1 + 0x14) == 0) {
    fn_8225BFE0();
  }
  else {
    *(unsigned int *)(iVar1 + 0x14) = 0;
  }
  iVar1 = fn_8249ABC0();
  uVar2 = 0xffffffff;
  if (param_1[0x2f] != -1) {
    uVar2 = 0xffffffff;
    fn_8249D980(*(unsigned int *)(iVar1 + 0x110));
    param_1[0x2f] = uVar2;
  }
  if (param_1[0x30] != -1) {
    fn_8249DA08();
    param_1[0x30] = uVar2;
  }
  param_1[0x2d] = 1;
  param_1[0x2e] = 1;
  uVar2 = param_1[0x2b];
  iVar1 = fn_8225F160();
  *(unsigned int *)(iVar1 + 8) = uVar2;
  uVar2 = param_1[0x2c];
  iVar1 = fn_8225F160();
  *(unsigned int *)(iVar1 + 0x40) = uVar2;
  if (param_1[0x31] != 0) {
    fn_82512B70();
    param_1[0x31] = 0;
  }
  if (param_1[0xf] != 0) {
    fn_8265CA20();
  }
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *param_1 = &lbl_821C2CCC;
  fn_82230300(param_1 + 3,1,0);
  return;
}

