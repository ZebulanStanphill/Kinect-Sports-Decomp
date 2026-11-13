typedef unsigned char bool;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82230110();
extern int fn_82237A48();
extern int fn_8223B728();
extern int fn_8223CD08();
extern int fn_8223CF38();
extern int fn_8223FBB0();
extern int fn_82240158();
extern int fn_822403C8();
extern int fn_82520AC8();
extern int fn_8265CA20();
extern int fn_8288B2D8();
extern int fn_8288F1E8();
extern int fn_82897BE8();
extern int fn_828B5A20();
extern int fn_82F62528();
extern int fn_82F62680();
extern int fn_82F626D0();
extern int fn_82F62F60();
extern unsigned int lbl_82020F30;
extern unsigned int lbl_82020F40;
extern unsigned int lbl_8202115C;
extern unsigned int lbl_820211D4;
extern unsigned int lbl_82021284;
extern unsigned int lbl_821AA8E0;
extern unsigned int stack0x00000000;
extern unsigned int uStack_100;
extern unsigned int uStack_15c;
extern unsigned int uStack_160;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_c0;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_e0;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;


unsigned __int64 fn_828C7A28(unsigned __int64 param_1,int param_2,unsigned __int64 param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  int *piVar12;
  int iVar13;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  __int64 lVar11;
  unsigned __int64 uVar14;
  unsigned __int64 uVar15;
  __int64 lVar16;
  unsigned int *puVar17;
  double dVar18;
  unsigned char **appuStack_1a0 [5];
  unsigned int *puStack_18c;
  unsigned int *puStack_188;
  unsigned int *puStack_17c;
  unsigned int *puStack_178;
  unsigned int *puStack_16c;
  unsigned int *puStack_168;
  unsigned int *puStack_164;
  unsigned int uStack_160;
  unsigned int uStack_15c;
  unsigned char **ppuStack_150;
  unsigned int uStack_100;
  unsigned int uStack_f0;
  unsigned int uStack_ec;
  unsigned int uStack_e0;
  unsigned int uStack_d0;
  unsigned int uStack_cc;
  unsigned int uStack_c0;
  unsigned int uStack_b0;
  unsigned int uStack_ac;
  
  uVar7 = ZEXT48(&stack0x00000000);
  piVar12 = (int *)fn_8288F1E8(*(unsigned int *)(param_2 + 0x6c),param_2 + 0x80);
  if (piVar12 == (int *)0x0) {
    iVar13 = 0;
  }
  else {
    iVar13 = (**(int (***)())(*piVar12 + 8))();
    iVar13 = *(int *)(iVar13 + 0x10);
  }
  ppuStack_150 = &lbl_82020F40;
  appuStack_1a0[0] = (unsigned char **)&lbl_821AA8E0;
  fn_8223CD08(uVar7 - 0x150,uVar7 - 0x19c,0);
  *(unsigned char ***)((int)appuStack_1a0 + (int)appuStack_1a0[0][1]) = &lbl_82021284;
  fn_8223CF38(uVar7 - 0x19c,2);
  uVar14 = 0xffffffff82196f18;
  uVar15 = uVar14;
  if (*(char *)(param_2 + 0xa5) == '\0') {
    uVar15 = 0xffffffff82196f10;
  }
  if (*(char *)(param_2 + 0xa4) == '\0') {
    uVar14 = 0xffffffff82196f10;
  }
  bVar1 = piVar12 == (int *)0x0;
  if (bVar1) {
    uVar8 = fn_82230110(uVar7 - 0x100,0xffffffff82025294);
  }
  else {
    uVar8 = (**(int (***)())(*piVar12 + 0x10))(uVar7 - 0xe0,piVar12,param_3);
  }
  iVar2 = *(int *)(param_2 + 0x94);
  iVar3 = *(int *)(param_2 + 0x90);
  dVar18 = (double)*(float *)(param_2 + 0xa0);
  uVar4 = *(unsigned int *)(param_2 + 0x8c);
  uVar5 = *(unsigned int *)(param_2 + 0x88);
  uVar9 = fn_828B5A20(uVar7 - 0xc0,param_2 + 0x80,param_3,*(unsigned int *)(param_2 + 0x6c));
  uVar10 = fn_82240158(uVar7 - 0x1a0,0xffffffff82026340);
  uVar10 = fn_82240158(uVar10,0xffffffff82026200);
  uVar9 = fn_8223B728(uVar10,uVar9);
  uVar9 = fn_82240158(uVar9,0xffffffff820261ec);
  uVar8 = fn_8223B728(uVar9,uVar8);
  uVar8 = fn_82240158(uVar8,0xffffffff8202632c);
  uVar8 = fn_82520AC8(uVar8,uVar5);
  uVar8 = fn_82240158(uVar8,0xffffffff82026314);
  uVar8 = fn_8223FBB0(uVar8,uVar4);
  fn_82240158(uVar8,0xffffffff820262fc);
  uVar8 = fn_82237A48(dVar18);
  uVar8 = fn_82240158(uVar8,0xffffffff820262ec);
  uVar14 = fn_82240158(uVar8,uVar14);
  uVar14 = fn_82240158(uVar14,0xffffffff820262d8);
  uVar15 = fn_82240158(uVar14,uVar15);
  uVar15 = fn_82240158(uVar15,0xffffffff820262b8);
  uVar15 = fn_82520AC8(uVar15,iVar2 - iVar3 >> 2);
  fn_82240158(uVar15,0xffffffff8202616c);
  if (0xf < uStack_ac) {
    fn_8265CA20(uStack_c0);
  }
  uStack_b0 = 0;
  uStack_c0 = uStack_c0 & 0xffffff;
  uStack_ac = 0xf;
  if (bVar1) {
    if (0xf < uStack_ec) {
      fn_8265CA20(uStack_100);
    }
    uStack_ec = 0xf;
    uStack_f0 = 0;
    uStack_100 = uStack_100 & 0xffffff;
  }
  if (!bVar1) {
    if (0xf < uStack_cc) {
      fn_8265CA20(uStack_e0);
    }
    uStack_cc = 0xf;
    uStack_d0 = 0;
    uStack_e0 = uStack_e0 & 0xffffff;
  }
  piVar12 = *(int **)(param_2 + 0x90);
  lVar16 = 0;
  if (piVar12 != *(int **)(param_2 + 0x94)) {
    uVar15 = 0xffffffff821c24f0;
    do {
      fn_82240158(uVar7 - 0x1a0,0xffffffff82015a34);
      uVar14 = uVar15;
      if (*piVar12 == 0) {
        if (iVar13 == 0) {
          lVar11 = uVar7 - 0x1a0;
          uVar14 = 0xffffffff82026140;
        }
        else {
          fn_8288B2D8(iVar13,lVar16);
          uVar8 = fn_82897BE8();
          uVar9 = fn_82240158(uVar7 - 0x1a0,0xffffffff82026130);
          lVar11 = fn_8223B728(uVar9,uVar8);
        }
      }
      else {
        uVar4 = *(unsigned int *)(*piVar12 + 0x10);
        if (iVar13 == 0) {
          uVar8 = fn_82240158(uVar7 - 0x1a0,0xffffffff82026154);
          lVar11 = fn_8223FBB0(uVar8,uVar4);
        }
        else {
          fn_8288B2D8(iVar13,lVar16);
          uVar8 = fn_82897BE8();
          uVar9 = fn_82240158(uVar7 - 0x1a0,0xffffffff82026154);
          uVar9 = fn_8223FBB0(uVar9,uVar4);
          uVar9 = fn_82240158(uVar9,0xffffffff8202614c);
          lVar11 = fn_8223B728(uVar9,uVar8);
        }
      }
      fn_82240158(lVar11,uVar14);
      fn_82240158(uVar7 - 0x1a0,0xffffffff821cc86c);
      piVar12 = piVar12 + 1;
      lVar16 = lVar16 + 1;
    } while (piVar12 != *(int **)(param_2 + 0x94));
  }
  fn_82240158(uVar7 - 0x1a0,0xffffffff82196fb0);
  fn_822403C8(param_1,uVar7 - 0x19c);
  *(unsigned char ***)((int)appuStack_1a0 + (int)appuStack_1a0[0][1]) = &lbl_82021284;
  appuStack_1a0[1] = &lbl_820211D4;
  if ((uStack_15c & 1) != 0) {
    fn_8265CA20(*puStack_18c);
  }
  *puStack_18c = 0;
  *puStack_17c = 0;
  *puStack_16c = 0;
  *puStack_188 = 0;
  *puStack_178 = 0;
  *puStack_168 = 0;
  uStack_15c = uStack_15c & 0xfffffffe;
  uStack_160 = 0;
  appuStack_1a0[1] = &lbl_8202115C;
  if (puStack_164 != (unsigned int *)0x0) {
    uVar6 = *puStack_164;
    if (uVar6 != 0) {
      fn_82F62680(uVar7 - 0x1b0,0);
      iVar13 = *(int *)(uVar6 + 4);
      if ((iVar13 != 0) && (iVar13 != -1)) {
        *(int *)(uVar6 + 4) = iVar13 + -1;
      }
      puVar17 = (unsigned int *)(-(unsigned int)(*(int *)(uVar6 + 4) == 0) & uVar6);
      fn_82F626D0(uVar7 - 0x1b0);
      if (puVar17 != (unsigned int *)0x0) {
        (**(int (***)())*puVar17)(puVar17,1);
      }
    }
    fn_8265CA20(puStack_164);
  }
  fn_82F62528(uVar7 - 0x198);
  *(unsigned char ***)((int)appuStack_1a0 + (int)appuStack_1a0[0][1]) = &lbl_82020F40;
  ppuStack_150 = &lbl_82020F30;
  fn_82F62F60(uVar7 - 0x150);
  return param_1;
}

