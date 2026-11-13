typedef unsigned char bool;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82230110();
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
extern int fn_828A8E18();
extern int fn_828B5A20();
extern int fn_828BB1F0();
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
extern unsigned int uStack_14c;
extern unsigned int uStack_150;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_b0;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_d0;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;
extern unsigned int uStack_f0;


unsigned __int64 fn_828C6FD8(unsigned __int64 param_1,int param_2,unsigned __int64 param_3)

{
  bool bVar1;
  unsigned char uVar2;
  unsigned char uVar3;
  int iVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  int *piVar14;
  int iVar15;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  __int64 lVar13;
  __int64 lVar16;
  unsigned int *puVar17;
  unsigned char **appuStack_190 [5];
  unsigned int *puStack_17c;
  unsigned int *puStack_178;
  unsigned int *puStack_16c;
  unsigned int *puStack_168;
  unsigned int *puStack_15c;
  unsigned int *puStack_158;
  unsigned int *puStack_154;
  unsigned int uStack_150;
  unsigned int uStack_14c;
  unsigned char **ppuStack_140;
  unsigned int uStack_f0;
  unsigned int uStack_e0;
  unsigned int uStack_dc;
  unsigned int uStack_d0;
  unsigned int uStack_c0;
  unsigned int uStack_bc;
  unsigned int uStack_b0;
  unsigned int uStack_a0;
  unsigned int uStack_9c;
  
  uVar8 = ZEXT48(&stack0x00000000);
  piVar14 = (int *)fn_8288F1E8(*(unsigned int *)(param_2 + 0x6c),param_2 + 0x80);
  if (piVar14 == (int *)0x0) {
    iVar15 = 0;
  }
  else {
    iVar15 = (**(int (***)())(*piVar14 + 8))();
    iVar15 = *(int *)(iVar15 + 0x10);
  }
  ppuStack_140 = &lbl_82020F40;
  appuStack_190[0] = (unsigned char **)&lbl_821AA8E0;
  fn_8223CD08(uVar8 - 0x140,uVar8 - 0x18c,0);
  *(unsigned char ***)((int)appuStack_190 + (int)appuStack_190[0][1]) = &lbl_82021284;
  fn_8223CF38(uVar8 - 0x18c,2);
  bVar1 = piVar14 == (int *)0x0;
  if (bVar1) {
    uVar9 = fn_82230110(uVar8 - 0xf0,0xffffffff82025294);
  }
  else {
    uVar9 = (**(int (***)())(*piVar14 + 0x10))(uVar8 - 0xd0,piVar14,param_3);
  }
  iVar4 = *(int *)(param_2 + 0x8c);
  iVar5 = *(int *)(param_2 + 0x88);
  uVar2 = *(unsigned char *)(param_2 + 0xa0);
  uVar3 = *(unsigned char *)(param_2 + 0x98);
  uVar10 = fn_828B5A20(uVar8 - 0xb0,param_2 + 0x80,param_3,*(unsigned int *)(param_2 + 0x6c));
  uVar11 = fn_82240158(uVar8 - 400,0xffffffff82026210);
  uVar11 = fn_82240158(uVar11,0xffffffff82026200);
  uVar10 = fn_8223B728(uVar11,uVar10);
  uVar10 = fn_82240158(uVar10,0xffffffff820261ec);
  uVar9 = fn_8223B728(uVar10,uVar9);
  uVar9 = fn_82240158(uVar9,0xffffffff820261d4);
  uVar9 = fn_828A8E18(uVar9,uVar3);
  uVar9 = fn_82240158(uVar9,0xffffffff820261c0);
  uVar9 = fn_828BB1F0(uVar9,uVar2);
  uVar6 = *(unsigned int *)(param_2 + 0x9c);
  uVar9 = fn_82240158(uVar9,0xffffffff8202619c);
  uVar9 = fn_82520AC8(uVar9,uVar6);
  uVar9 = fn_82240158(uVar9,0xffffffff8202617c);
  uVar9 = fn_82520AC8(uVar9,iVar4 - iVar5 >> 2);
  fn_82240158(uVar9,0xffffffff8202616c);
  if (0xf < uStack_9c) {
    fn_8265CA20(uStack_b0);
  }
  uStack_a0 = 0;
  uStack_b0 = uStack_b0 & 0xffffff;
  uStack_9c = 0xf;
  if (bVar1) {
    if (0xf < uStack_dc) {
      fn_8265CA20(uStack_f0);
    }
    uStack_dc = 0xf;
    uStack_e0 = 0;
    uStack_f0 = uStack_f0 & 0xffffff;
  }
  if (!bVar1) {
    if (0xf < uStack_bc) {
      fn_8265CA20(uStack_d0);
    }
    uStack_bc = 0xf;
    uStack_c0 = 0;
    uStack_d0 = uStack_d0 & 0xffffff;
  }
  piVar14 = *(int **)(param_2 + 0x88);
  lVar16 = 0;
  if (piVar14 != *(int **)(param_2 + 0x8c)) {
    uVar9 = 0xffffffff821c24f0;
    do {
      fn_82240158(uVar8 - 400,0xffffffff82015a34);
      uVar10 = uVar9;
      if (*piVar14 == 0) {
        if (iVar15 == 0) {
          lVar13 = uVar8 - 400;
          uVar10 = 0xffffffff82026140;
        }
        else {
          fn_8288B2D8(iVar15,lVar16);
          uVar11 = fn_82897BE8();
          uVar12 = fn_82240158(uVar8 - 400,0xffffffff82026130);
          lVar13 = fn_8223B728(uVar12,uVar11);
        }
      }
      else {
        uVar6 = *(unsigned int *)(*piVar14 + 0x10);
        if (iVar15 == 0) {
          uVar11 = fn_82240158(uVar8 - 400,0xffffffff82026154);
          lVar13 = fn_8223FBB0(uVar11,uVar6);
        }
        else {
          fn_8288B2D8(iVar15,lVar16);
          uVar11 = fn_82897BE8();
          uVar12 = fn_82240158(uVar8 - 400,0xffffffff82026154);
          uVar12 = fn_8223FBB0(uVar12,uVar6);
          uVar12 = fn_82240158(uVar12,0xffffffff8202614c);
          lVar13 = fn_8223B728(uVar12,uVar11);
        }
      }
      fn_82240158(lVar13,uVar10);
      fn_82240158(uVar8 - 400,0xffffffff821cc86c);
      piVar14 = piVar14 + 1;
      lVar16 = lVar16 + 1;
    } while (piVar14 != *(int **)(param_2 + 0x8c));
  }
  fn_82240158(uVar8 - 400,0xffffffff82196fb0);
  fn_822403C8(param_1,uVar8 - 0x18c);
  *(unsigned char ***)((int)appuStack_190 + (int)appuStack_190[0][1]) = &lbl_82021284;
  appuStack_190[1] = &lbl_820211D4;
  if ((uStack_14c & 1) != 0) {
    fn_8265CA20(*puStack_17c);
  }
  *puStack_17c = 0;
  *puStack_16c = 0;
  *puStack_15c = 0;
  *puStack_178 = 0;
  *puStack_168 = 0;
  *puStack_158 = 0;
  uStack_14c = uStack_14c & 0xfffffffe;
  uStack_150 = 0;
  appuStack_190[1] = &lbl_8202115C;
  if (puStack_154 != (unsigned int *)0x0) {
    uVar7 = *puStack_154;
    if (uVar7 != 0) {
      fn_82F62680(uVar8 - 0x1a0,0);
      iVar15 = *(int *)(uVar7 + 4);
      if ((iVar15 != 0) && (iVar15 != -1)) {
        *(int *)(uVar7 + 4) = iVar15 + -1;
      }
      puVar17 = (unsigned int *)(-(unsigned int)(*(int *)(uVar7 + 4) == 0) & uVar7);
      fn_82F626D0(uVar8 - 0x1a0);
      if (puVar17 != (unsigned int *)0x0) {
        (**(int (***)())*puVar17)(puVar17,1);
      }
    }
    fn_8265CA20(puStack_154);
  }
  fn_82F62528(uVar8 - 0x188);
  *(unsigned char ***)((int)appuStack_190 + (int)appuStack_190[0][1]) = &lbl_82020F40;
  ppuStack_140 = &lbl_82020F30;
  fn_82F62F60(uVar8 - 0x140);
  return param_1;
}

