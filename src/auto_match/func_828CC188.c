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


unsigned __int64 fn_828CC188(unsigned __int64 param_1,int param_2,unsigned __int64 param_3)

{
  bool bVar1;
  unsigned char uVar2;
  unsigned char uVar3;
  int iVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned __int64 uVar9;
  int *piVar15;
  int iVar16;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  __int64 lVar14;
  __int64 lVar17;
  unsigned int *puVar18;
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
  
  uVar9 = ZEXT48(&stack0x00000000);
  ppuStack_140 = &lbl_82020F40;
  appuStack_190[0] = (unsigned char **)&lbl_821AA8E0;
  fn_8223CD08(uVar9 - 0x140,uVar9 - 0x18c,0);
  *(unsigned char ***)((int)appuStack_190 + (int)appuStack_190[0][1]) = &lbl_82021284;
  fn_8223CF38(uVar9 - 0x18c,2);
  piVar15 = (int *)fn_8288F1E8(*(unsigned int *)(param_2 + 0x6c),param_2 + 0x80);
  if (piVar15 == (int *)0x0) {
    iVar16 = 0;
  }
  else {
    iVar16 = (**(int (***)())(*piVar15 + 8))();
    iVar16 = *(int *)(iVar16 + 0x10);
  }
  bVar1 = piVar15 == (int *)0x0;
  if (bVar1) {
    uVar10 = fn_82230110(uVar9 - 0xf0,0xffffffff82025294);
  }
  else {
    uVar10 = (**(int (***)())(*piVar15 + 0x10))(uVar9 - 0xd0,piVar15,param_3);
  }
  iVar4 = *(int *)(param_2 + 0x94);
  iVar5 = *(int *)(param_2 + 0x90);
  uVar6 = *(unsigned int *)(param_2 + 0xa0);
  uVar2 = *(unsigned char *)(param_2 + 0x8d);
  uVar3 = *(unsigned char *)(param_2 + 0x8c);
  uVar7 = *(unsigned int *)(param_2 + 0x88);
  uVar11 = fn_828B5A20(uVar9 - 0xb0,param_2 + 0x80,param_3,*(unsigned int *)(param_2 + 0x6c));
  uVar12 = fn_82240158(uVar9 - 400,0xffffffff82026528);
  uVar12 = fn_82240158(uVar12,0xffffffff82026200);
  uVar11 = fn_8223B728(uVar12,uVar11);
  uVar11 = fn_82240158(uVar11,0xffffffff820261ec);
  uVar10 = fn_8223B728(uVar11,uVar10);
  uVar10 = fn_82240158(uVar10,0xffffffff820263f0);
  uVar10 = fn_82520AC8(uVar10,uVar7);
  uVar10 = fn_82240158(uVar10,0xffffffff8202650c);
  uVar10 = fn_82520AC8(uVar10,uVar3);
  uVar10 = fn_82240158(uVar10,0xffffffff820264f4);
  uVar10 = fn_828A8E18(uVar10,uVar2);
  uVar10 = fn_82240158(uVar10,0xffffffff820264d0);
  uVar10 = fn_82520AC8(uVar10,uVar6);
  uVar10 = fn_82240158(uVar10,0xffffffff820262b8);
  uVar10 = fn_82520AC8(uVar10,iVar4 - iVar5 >> 2);
  fn_82240158(uVar10,0xffffffff8202616c);
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
  piVar15 = *(int **)(param_2 + 0x90);
  lVar17 = 0;
  if (piVar15 != *(int **)(param_2 + 0x94)) {
    uVar10 = 0xffffffff821c24f0;
    do {
      fn_82240158(uVar9 - 400,0xffffffff82015a34);
      uVar11 = uVar10;
      if (*piVar15 == 0) {
        if (iVar16 == 0) {
          lVar14 = uVar9 - 400;
          uVar11 = 0xffffffff82026140;
        }
        else {
          fn_8288B2D8(iVar16,lVar17);
          uVar12 = fn_82897BE8();
          uVar13 = fn_82240158(uVar9 - 400,0xffffffff82026130);
          lVar14 = fn_8223B728(uVar13,uVar12);
        }
      }
      else {
        uVar6 = *(unsigned int *)(*piVar15 + 0x10);
        if (iVar16 == 0) {
          uVar12 = fn_82240158(uVar9 - 400,0xffffffff82026154);
          lVar14 = fn_8223FBB0(uVar12,uVar6);
        }
        else {
          fn_8288B2D8(iVar16,lVar17);
          uVar12 = fn_82897BE8();
          uVar13 = fn_82240158(uVar9 - 400,0xffffffff82026154);
          uVar13 = fn_8223FBB0(uVar13,uVar6);
          uVar13 = fn_82240158(uVar13,0xffffffff8202614c);
          lVar14 = fn_8223B728(uVar13,uVar12);
        }
      }
      fn_82240158(lVar14,uVar11);
      fn_82240158(uVar9 - 400,0xffffffff821cc86c);
      piVar15 = piVar15 + 1;
      lVar17 = lVar17 + 1;
    } while (piVar15 != *(int **)(param_2 + 0x94));
  }
  fn_82240158(uVar9 - 400,0xffffffff82196fb0);
  fn_822403C8(param_1,uVar9 - 0x18c);
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
    uVar8 = *puStack_154;
    if (uVar8 != 0) {
      fn_82F62680(uVar9 - 0x1a0,0);
      iVar16 = *(int *)(uVar8 + 4);
      if ((iVar16 != 0) && (iVar16 != -1)) {
        *(int *)(uVar8 + 4) = iVar16 + -1;
      }
      puVar18 = (unsigned int *)(-(unsigned int)(*(int *)(uVar8 + 4) == 0) & uVar8);
      fn_82F626D0(uVar9 - 0x1a0);
      if (puVar18 != (unsigned int *)0x0) {
        (**(int (***)())*puVar18)(puVar18,1);
      }
    }
    fn_8265CA20(puStack_154);
  }
  fn_82F62528(uVar9 - 0x188);
  *(unsigned char ***)((int)appuStack_190 + (int)appuStack_190[0][1]) = &lbl_82020F40;
  ppuStack_140 = &lbl_82020F30;
  fn_82F62F60(uVar9 - 0x140);
  return param_1;
}

