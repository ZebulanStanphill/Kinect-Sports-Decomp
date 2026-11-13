#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_8223B728();
extern int fn_8223CD08();
extern int fn_8223CF38();
extern int fn_8223FBB0();
extern int fn_82240158();
extern int fn_822403C8();
extern int fn_82520AC8();
extern int fn_8265CA20();
extern int fn_828ACAB0();
extern int fn_828B7940();
extern int fn_828B9180();
extern int fn_828B92A0();
extern int fn_828B94E0();
extern int fn_828C2938();
extern int fn_828C2A50();
extern int fn_82F62528();
extern int fn_82F62680();
extern int fn_82F626D0();
extern int fn_82F62F60();
extern float lbl_82005748;
extern unsigned int lbl_82020F30;
extern unsigned int lbl_82020F40;
extern unsigned int lbl_8202115C;
extern unsigned int lbl_820211D4;
extern unsigned int lbl_82021284;
extern unsigned int lbl_821AA8E0;
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000000;
extern unsigned int uStack_100;
extern unsigned int uStack_10c;
extern unsigned int uStack_110;
extern unsigned int uStack_120;
extern unsigned int uStack_12c;
extern unsigned int uStack_130;
extern unsigned int uStack_140;
extern unsigned int uStack_150;
extern unsigned int uStack_158;
extern unsigned int uStack_1ac;
extern unsigned int uStack_1b0;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_a0;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_c0;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_e0;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;


unsigned __int64 fn_828B9720(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,char param_4,char param_5)

{
  unsigned char uVar1;
  unsigned char uVar2;
  unsigned short uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  int iVar6;
  float fVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  __int64 lVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  int *piVar14;
  unsigned int *puVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  unsigned char **appuStack_1f0 [5];
  unsigned int *puStack_1dc;
  unsigned int *puStack_1d8;
  unsigned int *puStack_1cc;
  unsigned int *puStack_1c8;
  unsigned int *puStack_1bc;
  unsigned int *puStack_1b8;
  unsigned int *puStack_1b4;
  unsigned int uStack_1b0;
  unsigned int uStack_1ac;
  unsigned char **ppuStack_1a0;
  unsigned __int64 uStack_158;
  unsigned __int64 uStack_150;
  unsigned int uStack_140;
  unsigned int uStack_130;
  unsigned int uStack_12c;
  unsigned int uStack_120;
  unsigned int uStack_110;
  unsigned int uStack_10c;
  unsigned int uStack_100;
  unsigned int uStack_f0;
  unsigned int uStack_ec;
  unsigned int uStack_e0;
  unsigned int uStack_d0;
  unsigned int uStack_cc;
  unsigned int uStack_c0;
  unsigned int uStack_b0;
  unsigned int uStack_ac;
  unsigned int uStack_a0;
  unsigned int uStack_90;
  unsigned int uStack_8c;
  
  uVar8 = ZEXT48(&stack0x00000000);
  ppuStack_1a0 = &lbl_82020F40;
  appuStack_1f0[0] = (unsigned char **)&lbl_821AA8E0;
  fn_8223CD08(uVar8 - 0x1a0,uVar8 - 0x1ec,0);
  *(unsigned char ***)((int)appuStack_1f0 + (int)appuStack_1f0[0][1]) = &lbl_82021284;
  fn_8223CF38(uVar8 - 0x1ec,2);
  if ((param_3 & 0xff) == 0) {
    uVar13 = 0xffffffff820253d8;
  }
  else {
    uVar13 = 0xffffffff820253e0;
  }
  fn_82240158(uVar8 - 0x1f0,uVar13);
  uVar4 = *(unsigned int *)(param_2 + 0x70);
  uVar13 = fn_828ACAB0(uVar8 - 0xa0,param_2 + 0xb8,param_3);
  uVar9 = fn_82240158(uVar8 - 0x1f0,0xffffffff82196824);
  fn_8223B728(uVar9,uVar13);
  if (0xf < uStack_8c) {
    fn_8265CA20(uStack_a0);
  }
  uStack_90 = 0;
  uStack_a0 = uStack_a0 & 0xffffff;
  uStack_8c = 0xf;
  uVar13 = fn_8223B728(uVar8 - 0x1f0,param_2 + 0x74);
  fn_82240158(uVar13,0xffffffff82196824);
  uVar13 = fn_82240158(uVar8 - 0x1f0,0xffffffff820253d4);
  fn_8223FBB0(uVar13,uVar4);
  fn_82240158(uVar8 - 0x1f0,0xffffffff82196824);
  if (*(char *)(param_2 + 100) == '\0') {
    uVar13 = 0xffffffff820253cc;
  }
  else {
    uVar13 = 0xffffffff821a894c;
  }
  fn_82240158(uVar8 - 0x1f0,uVar13);
  if (*(char *)(param_2 + 0xa4) != '\0') {
    uVar3 = *(unsigned short *)(param_2 + 0xa8);
    uVar1 = *(unsigned char *)(param_2 + 0xa6);
    uVar2 = *(unsigned char *)(param_2 + 0xa5);
    uVar13 = fn_82240158(uVar8 - 0x1f0,0xffffffff820253c4);
    uVar13 = fn_82520AC8(uVar13,uVar2);
    uVar13 = fn_82240158(uVar13,0xffffffff820253bc);
    uVar13 = fn_82520AC8(uVar13,uVar1);
    uVar13 = fn_82240158(uVar13,0xffffffff820253b4);
    fn_82520AC8(uVar13,uVar3);
  }
  dVar19 = (double)*(float *)(param_2 + 0xac);
  uVar13 = 0xffffffff821c27b4;
  dVar17 = (double)lbl_821AAD20;
  if (((dVar19 == dVar17) && ((double)*(float *)(param_2 + 0xb0) == dVar17)) &&
     (dVar16 = (double)fn_828B9180(param_2), dVar16 == dVar17)) {
    fn_82240158(uVar8 - 0x1f0,0xffffffff820253ac);
    lVar10 = uVar8 - 0x1f0;
    if (*(char *)(param_2 + 0x9c) == '\x01') {
      if (*(char *)(param_2 + 0x9d) == '\0') {
        uVar13 = 0xffffffff8202539c;
      }
      else {
        fVar7 = *(float *)(param_2 + 0xa0) * lbl_82005748;
        uVar9 = fn_82240158(lVar10,0xffffffff821ce34c);
        lVar10 = fn_8223FBB0(uVar9,(int)fVar7);
      }
    }
    else if (*(char *)(param_2 + 0x9e) == '\x01') {
      uVar13 = 0xffffffff82025384;
    }
    else {
      uVar13 = 0xffffffff82025378;
    }
  }
  else {
    dVar18 = (double)*(float *)(param_2 + 0xb0);
    dVar16 = (double)fn_828B9180(param_2);
    dVar17 = (double)lbl_82005748;
    uStack_150 = (__int64)(int)(dVar16 * dVar17);
    uStack_158 = (__int64)(int)(dVar18 * dVar17);
    uVar13 = fn_82240158(uVar8 - 0x1f0,0xffffffff82025370);
    uVar13 = fn_8223FBB0(uVar13,(int)(dVar19 * dVar17));
    uVar13 = fn_82240158(uVar13,0xffffffff82025368);
    uVar13 = fn_8223FBB0(uVar13,(((unsigned __int64)(uStack_158) >> 32) & 0xFFFFFFFF));
    uVar13 = fn_82240158(uVar13,0xffffffff82025360);
    lVar10 = fn_8223FBB0(uVar13,(((unsigned __int64)(uStack_150) >> 32) & 0xFFFFFFFF));
    uVar13 = 0xffffffff821c24f0;
  }
  fn_82240158(lVar10,uVar13);
  piVar14 = *(int **)(param_2 + 8);
  if (piVar14 != *(int **)(param_2 + 0xc)) {
    do {
      if (*(int *)(*piVar14 + 8) == 0x800b) {
        uVar5 = piVar14[2];
        uVar13 = fn_82240158(uVar8 - 0x1f0,0xffffffff82025354);
        fn_8223B728(uVar13,(unsigned __int64)uVar5 + 8);
      }
      piVar14 = piVar14 + 4;
    } while (piVar14 != *(int **)(param_2 + 0xc));
  }
  if (param_4 != '\0') {
    uVar13 = fn_828B94E0(uVar8 - 0xc0,param_2 + 0x40,0);
    uVar9 = fn_828B92A0(uVar8 - 0x100,param_2 + 0x30,0);
    uVar11 = fn_828B7940(uVar8 - 0x140,param_2 + 0x28,0);
    uVar12 = fn_82240158(uVar8 - 0x1f0,0xffffffff82025344);
    uVar11 = fn_8223B728(uVar12,uVar11);
    uVar11 = fn_82240158(uVar11,0xffffffff82025334);
    uVar9 = fn_8223B728(uVar11,uVar9);
    uVar9 = fn_82240158(uVar9,0xffffffff82025328);
    fn_8223B728(uVar9,uVar13);
    if (0xf < uStack_12c) {
      fn_8265CA20(uStack_140);
    }
    uStack_12c = 0xf;
    uStack_130 = 0;
    uStack_140 = uStack_140 & 0xffffff;
    if (0xf < uStack_ec) {
      fn_8265CA20(uStack_100);
    }
    uStack_ec = 0xf;
    uStack_f0 = 0;
    uStack_100 = uStack_100 & 0xffffff;
    if (0xf < uStack_ac) {
      fn_8265CA20(uStack_c0);
    }
    uStack_ac = 0xf;
    uStack_b0 = 0;
    uStack_c0 = uStack_c0 & 0xffffff;
  }
  if ((param_5 != '\0') && (piVar14 = *(int **)(param_2 + 8), piVar14 != *(int **)(param_2 + 0xc)))
  {
    do {
      iVar6 = *piVar14;
      if (*(int *)(iVar6 + 8) != 0x800b) {
        uVar13 = fn_828C2938(uVar8 - 0xe0,piVar14[2],param_3);
        uVar9 = fn_828C2A50(uVar8 - 0x120,iVar6,param_3);
        uVar11 = fn_82240158(uVar8 - 0x1f0,0xffffffff82025324);
        uVar9 = fn_8223B728(uVar11,uVar9);
        uVar9 = fn_82240158(uVar9,0xffffffff82196fac);
        uVar13 = fn_8223B728(uVar9,uVar13);
        fn_82240158(uVar13,0xffffffff82025320);
        if (0xf < uStack_10c) {
          fn_8265CA20(uStack_120);
        }
        uStack_10c = 0xf;
        uStack_110 = 0;
        uStack_120 = uStack_120 & 0xffffff;
        if (0xf < uStack_cc) {
          fn_8265CA20(uStack_e0);
        }
        uStack_cc = 0xf;
        uStack_d0 = 0;
        uStack_e0 = uStack_e0 & 0xffffff;
      }
      piVar14 = piVar14 + 4;
    } while (piVar14 != *(int **)(param_2 + 0xc));
  }
  fn_82240158(uVar8 - 0x1f0,0xffffffff821c27b4);
  fn_822403C8(param_1,uVar8 - 0x1ec);
  *(unsigned char ***)((int)appuStack_1f0 + (int)appuStack_1f0[0][1]) = &lbl_82021284;
  appuStack_1f0[1] = &lbl_820211D4;
  if ((uStack_1ac & 1) != 0) {
    fn_8265CA20(*puStack_1dc);
  }
  *puStack_1dc = 0;
  *puStack_1cc = 0;
  *puStack_1bc = 0;
  *puStack_1d8 = 0;
  *puStack_1c8 = 0;
  *puStack_1b8 = 0;
  uStack_1ac = uStack_1ac & 0xfffffffe;
  uStack_1b0 = 0;
  appuStack_1f0[1] = &lbl_8202115C;
  if (puStack_1b4 != (unsigned int *)0x0) {
    uVar5 = *puStack_1b4;
    if (uVar5 != 0) {
      fn_82F62680(uVar8 - 0x200,0);
      iVar6 = *(int *)(uVar5 + 4);
      if ((iVar6 != 0) && (iVar6 != -1)) {
        *(int *)(uVar5 + 4) = iVar6 + -1;
      }
      puVar15 = (unsigned int *)(-(unsigned int)(*(int *)(uVar5 + 4) == 0) & uVar5);
      fn_82F626D0(uVar8 - 0x200);
      if (puVar15 != (unsigned int *)0x0) {
        (**(int (***)())*puVar15)(puVar15,1);
      }
    }
    fn_8265CA20(puStack_1b4);
  }
  fn_82F62528(uVar8 - 0x1e8);
  *(unsigned char ***)((int)appuStack_1f0 + (int)appuStack_1f0[0][1]) = &lbl_82020F40;
  ppuStack_1a0 = &lbl_82020F30;
  fn_82F62F60(uVar8 - 0x1a0);
  return param_1;
}

