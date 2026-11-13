extern unsigned int *auStack_128;
extern unsigned int *auStack_150;
extern unsigned int *auStack_170;
extern unsigned int *auStack_180;
extern unsigned int *auStack_184;
extern int fn_8223B728();
extern int fn_8223CD08();
extern int fn_8223CF38();
extern int fn_82240158();
extern int fn_822403C8();
extern int fn_82520AC8();
extern int fn_8265CA20();
extern int fn_8288B2D8();
extern int fn_8288CD40();
extern int fn_82890328();
extern int fn_828958A0();
extern int fn_82897BE8();
extern int fn_828A12E8();
extern int fn_828B55F8();
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
extern unsigned int uStack00000014;
extern unsigned int uStack_13c;
extern unsigned int uStack_140;
extern unsigned int uStack_15c;
extern unsigned int uStack_160;
extern unsigned int uStack_188;
extern unsigned int uStack_19c;
extern unsigned int uStack_1a0;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;


/* WARNING: Type propagation algorithm not settling */

unsigned __int64 fn_82895C50(unsigned __int64 param_1,int param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  int *piVar10;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  int iVar11;
  unsigned int *puVar12;
  unsigned char **ppuVar13;
  unsigned char **ppuVar14;
  unsigned int *puVar15;
  unsigned int *puVar16;
  unsigned int uStack00000014;
  unsigned int uStack_1a0;
  unsigned char uStack_19c;
  unsigned char **ppuStack_198;
  unsigned char **ppuStack_194;
  unsigned int *puStack_190;
  unsigned int *puStack_18c;
  unsigned int uStack_188;
  unsigned char auStack_184 [4];
  unsigned char auStack_180 [16];
  unsigned int auStack_170 [4];
  unsigned int uStack_160;
  unsigned int uStack_15c;
  unsigned int auStack_150 [4];
  unsigned int uStack_140;
  unsigned int uStack_13c;
  unsigned char **appuStack_130 [2];
  unsigned char auStack_128 [12];
  unsigned int *puStack_11c;
  unsigned int *puStack_118;
  unsigned int *puStack_10c;
  unsigned int *puStack_108;
  unsigned int *puStack_fc;
  unsigned int *puStack_f8;
  unsigned int *puStack_f4;
  unsigned int uStack_f0;
  unsigned int uStack_ec;
  unsigned char ** appuStack_e0;
  
  uStack00000014 = (unsigned int)param_1;
  appuStack_e0 = &lbl_82020F40;
  appuStack_130[0] = (unsigned char **)&lbl_821AA8E0;
  ppuStack_194 = &lbl_82020F40;
  fn_8223CD08(&appuStack_e0,appuStack_130 + 1,0);
  ppuStack_198 = &lbl_82021284;
  *(unsigned char ***)((int)appuStack_130 + (int)appuStack_130[0][1]) = &lbl_82021284;
  fn_8223CF38(appuStack_130 + 1,2);
  puStack_190 = (unsigned int *)0x0;
  puStack_18c = (unsigned int *)0x0;
  uStack_188 = 0;
  lVar6 = fn_828A12E8(*(unsigned int *)(param_2 + 0x6c));
  fn_828958A0(param_2,&puStack_190);
  puVar5 = puStack_18c;
  puVar16 = puStack_190;
  uVar1 = *(unsigned int *)(param_2 + 0x4bc);
  iVar11 = (int)puStack_18c - (int)puStack_190;
  uVar7 = fn_82240158(appuStack_130,0xffffffff8202394c);
  uVar7 = fn_82520AC8(uVar7,uVar1);
  uVar7 = fn_82240158(uVar7,0xffffffff82023934);
  uVar7 = fn_82520AC8(uVar7,iVar11 >> 5);
  fn_82240158(uVar7,0xffffffff82023800);
  ppuVar13 = &lbl_82020F40;
  ppuVar14 = &lbl_82021284;
  if (puVar16 != puVar5) {
    puVar15 = puVar16 + 2;
    do {
      uStack_1a0 = fn_828B55F8(puVar15 + -2);
      piVar10 = (int *)fn_8288CD40(auStack_180,lVar6 + 0x94,&uStack_1a0);
      piVar10 = (int *)fn_8288B2D8(*(unsigned int *)(*piVar10 + 0x40),*puVar15);
      uVar1 = puVar15[5];
      uVar2 = *puVar15;
      uVar3 = *(unsigned int *)(param_2 + 0x6c);
      uStack_1a0 = (**(int (***)())(*piVar10 + 0xc))(auStack_170,piVar10,param_3,puVar15 + 1);
      uVar7 = fn_82897BE8(piVar10);
      uVar8 = fn_828B5A20(auStack_150,puVar15 + -2,param_3,uVar3);
      uVar9 = fn_82240158(appuStack_130,0xffffffff82023920);
      uVar8 = fn_8223B728(uVar9,uVar8);
      uVar8 = fn_82240158(uVar8,0xffffffff82023910);
      uVar7 = fn_8223B728(uVar8,uVar7);
      uVar7 = fn_82240158(uVar7,0xffffffff82023824);
      uVar7 = fn_82520AC8(uVar7,uVar2);
      uVar7 = fn_82240158(uVar7,0xffffffff82023900);
      uVar7 = fn_82520AC8(uVar7,uVar1);
      uVar7 = fn_82240158(uVar7,0xffffffff82023800);
      fn_8223B728(uVar7,uStack_1a0);
      if (0xf < uStack_13c) {
        fn_8265CA20(auStack_150[0]);
      }
      uStack_13c = 0xf;
      uStack_140 = 0;
      auStack_150[0] = auStack_150[0] & 0xffffff;
      if (0xf < uStack_15c) {
        fn_8265CA20(auStack_170[0]);
      }
      uStack_15c = 0xf;
      uStack_160 = 0;
      puVar12 = puVar15 + 6;
      auStack_170[0] = auStack_170[0] & 0xffffff;
      puVar15 = puVar15 + 8;
    } while (puVar12 != puVar5);
    param_1 = (unsigned __int64)uStack00000014;
    ppuVar13 = ppuStack_194;
    ppuVar14 = ppuStack_198;
  }
  fn_822403C8(param_1,appuStack_130 + 1);
  if (puVar16 != (unsigned int *)0x0) {
    fn_82890328(puVar16,puVar5,auStack_184,uStack_19c);
    fn_8265CA20(puVar16);
  }
  *(unsigned char ***)((int)appuStack_130 + (int)appuStack_130[0][1]) = ppuVar14;
  appuStack_130[1] = &lbl_820211D4;
  if ((uStack_ec & 1) != 0) {
    fn_8265CA20(*puStack_11c);
  }
  *puStack_11c = 0;
  *puStack_10c = 0;
  *puStack_fc = 0;
  *puStack_118 = 0;
  *puStack_108 = 0;
  *puStack_f8 = 0;
  uStack_ec = uStack_ec & 0xfffffffe;
  uStack_f0 = 0;
  appuStack_130[1] = &lbl_8202115C;
  if (puStack_f4 != (unsigned int *)0x0) {
    uVar4 = *puStack_f4;
    if (uVar4 != 0) {
      fn_82F62680(&ppuStack_198,0);
      iVar11 = *(int *)(uVar4 + 4);
      if ((iVar11 != 0) && (iVar11 != -1)) {
        *(int *)(uVar4 + 4) = iVar11 + -1;
      }
      puVar16 = (unsigned int *)(-(unsigned int)(*(int *)(uVar4 + 4) == 0) & uVar4);
      fn_82F626D0(&ppuStack_198);
      if (puVar16 != (unsigned int *)0x0) {
        (**(int (***)())*puVar16)(puVar16,1);
      }
    }
    fn_8265CA20(puStack_f4);
  }
  fn_82F62528(auStack_128);
  *(unsigned char ***)((int)appuStack_130 + (int)appuStack_130[0][1]) = ppuVar13;
  appuStack_e0 = &lbl_82020F30;
  fn_82F62F60(&appuStack_e0);
  return param_1;
}

