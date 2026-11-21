extern unsigned int fn_82321018;
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821ACD84;
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821AE598;
extern unsigned int lbl_821AF1C8;
extern unsigned int lbl_821B0800;
extern unsigned int lbl_821B0838;

/* WARNING: Inlined function: __savegprlr_18 */

void fn_822BDF10(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                unsigned __int64 param_5,unsigned __int64 param_6,unsigned int param_7,unsigned __int64 param_8)

{
  int iVar1;
  int *piVar2;
  unsigned __int64 in_r0;
  unsigned int uVar5;
  unsigned __int64 uVar3;
  unsigned int *puVar6;
  char cVar12;
  unsigned int *puVar7;
  unsigned __int64 uVar4;
  unsigned int *puVar8;
  unsigned int *puVar9;
  int iVar10;
  unsigned int *puVar11;
  __int64 lVar13;
  int (**pcStack_a0)();
  int *piStack_9c;
  int *piStack_98;
  
  piVar2 = (int *)param_1;
  piVar2[0x1fb] = (int)param_2;
  if (piVar2[9] == 0) {
LAB_822bdf8c:
    uVar3 = 2;
  }
  else {
    if (piVar2[0x5a] == 0) {
      uVar5 = piVar2[0x5b];
    }
    else {
      uVar5 = fn_8288B760();
      uVar5 = uVar5 & 0xff;
    }
    if (uVar5 == 0) goto LAB_822bdf8c;
    uVar3 = fn_824CCD80(piVar2[9]);
  }
  loadVectorLeftIndexed128(in_r0,param_1 + 0x21c);
  loadVectorRightIndexed128(0xc,param_1 + 0x21c);
  fn_822B6A58(&pcStack_a0,param_1,3);
  puVar6 = (unsigned int *)fn_8265C9E0(0x50);
  puVar11 = (unsigned int *)(param_1 + 0x7ec);
  if (puVar6 == (unsigned int *)0x0) {
    puVar6 = (unsigned int *)0x0;
  }
  else {
    puVar6[1] = 1;
    puVar6[2] = 1;
    *puVar6 = &lbl_821ACD84;
    if (puVar6 + 4 != (unsigned int *)0x0) {
      fn_82320900(puVar6 + 4,param_1 + 0x218,param_1 + 0x228,*puVar11,uVar3);
    }
  }
  iVar10 = piVar2[0x1f6];
  piVar2[0x1f6] = (int)puVar6;
  piVar2[0x1f5] = (int)(puVar6 + 4);
  if (iVar10 != 0) {
    fn_822315A0();
  }
  iVar10 = piVar2[0x45];
  puVar6 = (unsigned int *)fn_8265C9E0(0x1c);
  if (puVar6 == (unsigned int *)0x0) {
    puVar6 = (unsigned int *)0x0;
  }
  else {
    puVar6[1] = 1;
    puVar6[2] = 1;
    *puVar6 = &lbl_821AD588;
    if (puVar6 + 3 != (unsigned int *)0x0) {
      puVar6[5] = iVar10;
      puVar6[6] = piVar2;
      puVar6[4] = 1;
      puVar6[3] = &lbl_821AF1C8;
    }
  }
  pcStack_a0 = (int (**)())0x0;
  piStack_9c = (unsigned int *)0x0;
  if ((puVar6 != (unsigned int *)0x0) && (cVar12 = fn_8223AAC0(puVar6), cVar12 != '\0')) {
    pcStack_a0 = (int (**)())(puVar6 + 3);
    piStack_9c = puVar6;
  }
  fn_822C64E0(piVar2[0x44],&pcStack_a0);
  iVar10 = piVar2[0x45];
  puVar7 = (unsigned int *)fn_8265C9E0(0x60);
  if (puVar7 == (unsigned int *)0x0) {
    puVar7 = (unsigned int *)0x0;
  }
  else {
    puVar7[1] = 1;
    puVar7[2] = 1;
    *puVar7 = &lbl_821A8D8C;
    if (puVar7 + 4 != (unsigned int *)0x0) {
      fn_8232ECE0(puVar7 + 4,param_1,iVar10,param_6);
    }
  }
  pcStack_a0 = (int (**)())0x0;
  piStack_9c = (unsigned int *)0x0;
  if ((puVar7 != (unsigned int *)0x0) && (cVar12 = fn_8223AAC0(puVar7), cVar12 != '\0')) {
    pcStack_a0 = (int (**)())(puVar7 + 4);
    piStack_9c = puVar7;
  }
  fn_822C64E0(piVar2[0x44],&pcStack_a0);
  piStack_9c = piVar2 + 0x142;
  pcStack_a0 = fn_82321018;
  iVar10 = piVar2[0x45];
  piStack_98 = piVar2;
  uVar4 = fn_8265C9E0(0x70);
  if ((uVar4 & 0xffffffff) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_822C1EE0(uVar4,param_1,iVar10,param_1 + 0x250,param_1 + 0x7ec,param_3,param_4,param_5
                       );
  }
  pcStack_a0 = (int (**)())0x0;
  piStack_9c = (int *)0x0;
  if (((uVar4 & 0xffffffff) != 0) && (cVar12 = fn_8223AAC0(uVar4), cVar12 != '\0')) {
    pcStack_a0 = (int (**)())((int)uVar4 + 0x10);
    piStack_9c = (int *)(int)uVar4;
  }
  fn_822C64E0(piVar2[0x44],&pcStack_a0);
  iVar10 = piVar2[0x45];
  puVar8 = (unsigned int *)fn_8265C9E0(0x44);
  if (puVar8 == (unsigned int *)0x0) {
    puVar8 = (unsigned int *)0x0;
  }
  else {
    puVar8[1] = 1;
    puVar8[2] = 1;
    *puVar8 = &lbl_821AD588;
    if (puVar8 + 3 != (unsigned int *)0x0) {
      iVar1 = piVar2[0x6b];
      puVar8[5] = iVar10;
      puVar8[6] = piVar2;
      puVar8[8] = 0;
      puVar8[3] = &lbl_821B0800;
      puVar8[4] = 5;
      puVar8[7] = 3;
      puVar8[9] = 0;
      puVar8[10] = 0;
      puVar8[0xc] = iVar1;
      puVar8[0x10] = 0;
      puVar8[0xb] = 0;
      puVar8[0xd] = (int)param_5;
      puVar8[0xe] = 0;
      puVar8[0xf] = 0;
    }
  }
  pcStack_a0 = (int (**)())0x0;
  piStack_9c = (unsigned int *)0x0;
  if ((puVar8 != (unsigned int *)0x0) && (cVar12 = fn_8223AAC0(puVar8), cVar12 != '\0')) {
    pcStack_a0 = (int (**)())(puVar8 + 3);
    piStack_9c = puVar8;
  }
  fn_822C64E0(piVar2[0x44],&pcStack_a0);
  iVar10 = piVar2[0x45];
  puVar9 = (unsigned int *)fn_8265C9E0(0x1c);
  if (puVar9 == (unsigned int *)0x0) {
    puVar9 = (unsigned int *)0x0;
  }
  else {
    puVar9[1] = 1;
    puVar9[2] = 1;
    *puVar9 = &lbl_821AD588;
    if (puVar9 + 3 != (unsigned int *)0x0) {
      puVar9[5] = iVar10;
      puVar9[6] = piVar2;
      puVar9[4] = 2;
      puVar9[3] = &lbl_821B0838;
    }
  }
  pcStack_a0 = (int (**)())0x0;
  piStack_9c = (unsigned int *)0x0;
  if ((puVar9 != (unsigned int *)0x0) && (cVar12 = fn_8223AAC0(puVar9), cVar12 != '\0')) {
    pcStack_a0 = (int (**)())(puVar9 + 3);
    piStack_9c = puVar9;
  }
  fn_822C64E0(piVar2[0x44],&pcStack_a0);
  fn_822C8C08(piVar2[0x45],0xffffffff821acc3c);
  if (piVar2[9] != 0) goto LAB_822be3c4;
  iVar10 = fn_8225F160();
  uVar5 = *(unsigned int *)(iVar10 + 0x14);
  if (uVar5 == 0) {
    lVar13 = param_1 + 600;
LAB_822be3a0:
    fn_822C1638(&pcStack_a0,lVar13);
  }
  else {
    if (uVar5 == 1) {
      lVar13 = param_1 + 0x25c;
      goto LAB_822be3a0;
    }
    if (uVar5 < 3) {
      lVar13 = param_1 + 0x260;
      goto LAB_822be3a0;
    }
    if (uVar5 == 3) {
      lVar13 = param_1 + 0x264;
      goto LAB_822be3a0;
    }
    piStack_9c = (unsigned int *)0x0;
    pcStack_a0 = (int (**)())0x0;
  }
  fn_822C11F8(param_1,&pcStack_a0);
  if (piStack_9c != (unsigned int *)0x0) {
    fn_822315A0();
  }
LAB_822be3c4:
  fn_8232AFC0(param_1 + 0x5c0,param_2);
  fn_822C03F0(param_1,*puVar11);
  puVar11 = (unsigned int *)fn_8265C9E0(0x14);
  if (puVar11 == (unsigned int *)0x0) {
    puVar11 = (unsigned int *)0x0;
  }
  else {
    puVar11[1] = 1;
    puVar11[2] = 1;
    *puVar11 = &lbl_821AE598;
    if (puVar11 + 3 != (unsigned int *)0x0) {
      puVar11[3] = param_7;
      puVar11[4] = 0;
    }
  }
  iVar10 = piVar2[0x16d];
  piVar2[0x16d] = (int)puVar11;
  piVar2[0x16c] = (int)(puVar11 + 3);
  if (iVar10 != 0) {
    fn_822315A0();
  }
  fn_82326020(piVar2[0x45],param_8);
  (**(int (***)())(*piVar2 + 4))(param_1);
  if (puVar9 != (unsigned int *)0x0) {
    fn_822315A0(puVar9);
  }
  if (puVar8 != (unsigned int *)0x0) {
    fn_822315A0(puVar8);
  }
  if ((uVar4 & 0xffffffff) != 0) {
    fn_822315A0(uVar4);
  }
  if (puVar7 != (unsigned int *)0x0) {
    fn_822315A0(puVar7);
  }
  if (puVar6 != (unsigned int *)0x0) {
    fn_822315A0(puVar6);
  }
  return;
}
