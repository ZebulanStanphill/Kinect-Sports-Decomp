typedef struct { unsigned __int64 lo, hi; } V16;
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
#define TBLr 0
extern int fn_82CE5410();
extern int fn_82CE89A8();
extern int fn_82CE8B30();
extern int fn_82D80B90();
extern int fn_82D80C18();
extern int fn_82D80C30();
extern int fn_82D82CA8();
extern int fn_82D839C0();
extern int fn_82D90A58();
extern int fn_82DA3048();
extern int fn_82DA35A0();
extern int fn_82DAF270();
extern int fn_830A8AF0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8202CF7C;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8323B4A0;
extern unsigned int lbl_8323C860;
extern unsigned int stack0x00000000;
extern unsigned int uStack_70;
extern unsigned int uStack_88;
extern V16 loadVectorLeftIndexed128();


unsigned __int64 fn_82DA7F00(double param_1,int param_2,unsigned __int64 param_3)

{
  unsigned int *puVar1;
  int *piVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned __int64 uVar5;
  float *pfVar6;
  float *pfVar7;
  unsigned int *puVar8;
  unsigned int *puVar9;
  unsigned __int64 in_r0;
  unsigned __int64 uVar10;
  int iVar11;
  char cVar13;
  int iVar12;
  __int64 lVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  float in_register_00010080;
  float in_register_00010084;
  float in_register_00010088;
  float in_vr8;
  float fVar18;
  float fVar19;
  float fVar20;
  float in_register_000100d0;
  float in_register_000100d4;
  float in_register_000100d8;
  float in_vr13;
  unsigned int uStack_88;
  unsigned __int64 uStack_70;
  
  uVar10 = ZEXT48(&stack0x00000000);
  iVar11 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar11 + 4);
  if (puVar1 < *(unsigned int **)(iVar11 + 0xc)) {
    *puVar1 = "LtPhysics";
    puVar1[3] = "StInit";
    uVar5 = TBLr;
    puVar1[1] = (int)uVar5;
    *(unsigned int **)(iVar11 + 4) = puVar1 + 4;
  }
  *(unsigned char *)(param_2 + 0x68) = 1;
  fVar19 = lbl_821AAD20;
  *(int *)(*(int *)(param_2 + 0xc) + 0x94) = *(int *)(*(int *)(param_2 + 0xc) + 0x94) + 1;
  *(float *)(param_2 + 0x1c) = (float)param_1;
  fVar18 = (float)((double)(float)((double)*(float *)(param_2 + 0x18) + param_1) -
                  (double)*(float *)(param_2 + 0x18));
  if (fVar18 != fVar19) {
    fVar19 = lbl_82002AE0 / fVar18;
  }
  iVar11 = *(int *)(param_2 + 0xc);
  *(unsigned __int64 *)(iVar11 + 0x1d0) = uStack_70;
  *(unsigned __int64 *)(iVar11 + 0x1d8) = CONCAT44(fVar18,fVar19);
  iVar11 = *(int *)(*(int *)(param_2 + 0xc) + 0x78);
  *(unsigned __int64 *)(iVar11 + 0x50) = uStack_70;
  *(unsigned __int64 *)(iVar11 + 0x58) = CONCAT44(fVar18,fVar19);
  piVar2 = *(int **)(*(int *)(param_2 + 0xc) + 0x4c);
  (**(int (***)())(*piVar2 + 0x14))(piVar2,*(int *)(param_2 + 0xc),uVar10 - 0x70);
  fn_82D90A58(*(unsigned int *)(param_2 + 0xc));
  fn_82D82CA8(*(unsigned int *)(param_2 + 0xc),uVar10 - 0x88);
  iVar11 = fn_82CE5410();
  cVar13 = (**(int (***)())(**(int **)(iVar11 + 0x18) + 0x20))(*(int **)(iVar11 + 0x18),uStack_88);
  if (cVar13 == '\0') {
    iVar11 = fn_82D839C0(*(unsigned int *)(param_2 + 0xc));
    if (iVar11 == 0) {
      if (*(char *)(*(int *)(param_2 + 0xc) + 0x54) != '\0') {
        trapWord(0x1f,in_r0,0x16);
      }
      *(unsigned int *)(param_2 + 0x28) = 1;
      return 1;
    }
    iVar11 = *(int *)(param_2 + 0xc);
    lVar14 = (unsigned __int64)*(unsigned int *)(iVar11 + 0x94) - 1;
    *(int *)(iVar11 + 0x94) = (int)lVar14;
    if ((lVar14 == 0) && (*(char *)(iVar11 + 0x9c) == '\0')) {
      if (*(int *)(iVar11 + 0x8c) != 0) {
        fn_82D80C18(iVar11);
      }
      if ((*(int *)(iVar11 + 0xa4) == 1) && (*(int *)(iVar11 + 0x90) != 0)) {
        fn_82D80C30(iVar11);
      }
    }
    fn_82DAF270(*(unsigned int *)(param_2 + 0xc));
    *(int *)(*(int *)(param_2 + 0xc) + 0x94) = *(int *)(*(int *)(param_2 + 0xc) + 0x94) + 1;
  }
  fn_830A8AF0();
  iVar11 = *(int *)(param_2 + 0xc);
  *(unsigned __int64 *)(iVar11 + 0x1d0) = uStack_70;
  *(unsigned __int64 *)(iVar11 + 0x1d8) = CONCAT44(fVar18,fVar19);
  uVar3 = *(unsigned int *)(param_2 + 0xc);
  *(float *)(uVar3 + 0x2ec) = *(float *)(uVar3 + 0x300) * fVar18;
  *(float *)(uVar3 + 0x2f0) = (float)(__int64)*(int *)(uVar3 + 0x2f4) * fVar19;
  loadVectorLeftIndexed128(in_r0,(unsigned __int64)uVar3 + 0x2ec);
  pfVar6 = (float *)(*(int *)(param_2 + 0xc) + 0x10U & 0xfffffff0);
  fVar18 = pfVar6[1];
  fVar19 = pfVar6[2];
  fVar20 = pfVar6[3];
  pfVar7 = (float *)(uVar3 + 0x1f0 & 0xfffffff0);
  *pfVar7 = *pfVar6 * in_register_000100d0;
  pfVar7[1] = fVar18 * in_register_000100d4;
  pfVar7[2] = fVar19 * in_register_000100d8;
  pfVar7[3] = fVar20 * in_vr13;
  pfVar6 = (float *)(*(int *)(param_2 + 0xc) + 0x10U & 0xfffffff0);
  fVar18 = pfVar6[1];
  fVar19 = pfVar6[2];
  fVar20 = pfVar6[3];
  loadVectorLeftIndexed128(in_r0,uVar10 - 0x90);
  pfVar7 = (float *)(uVar3 + 0x200 & 0xfffffff0);
  *pfVar7 = *pfVar6 * in_register_00010080;
  pfVar7[1] = fVar18 * in_register_00010084;
  pfVar7[2] = fVar19 * in_register_00010088;
  pfVar7[3] = fVar20 * in_vr8;
  puVar1 = *(unsigned int **)(*(int *)(param_2 + 0xc) + 0x74);
  puVar1[0x3d] = *(int *)(param_2 + 0xc) + 0x1d0;
  puVar4 = *(unsigned int **)(*(int *)(param_2 + 0xc) + 0x78);
  puVar1[0x1c] = *puVar4;
  *(unsigned char *)(puVar1 + 0x1d) = *(unsigned char *)(puVar4 + 1);
  puVar1[0x1e] = puVar4[2];
  puVar1[0x1f] = puVar4[3];
  puVar1[0x20] = puVar4[4];
  puVar1[0x21] = puVar4[5];
  puVar8 = (unsigned int *)((int)puVar4 + (int)in_r0 + 0x20 & 0xfffffff0);
  uVar15 = puVar8[1];
  uVar16 = puVar8[2];
  uVar17 = puVar8[3];
  puVar9 = (unsigned int *)((int)puVar1 + (int)in_r0 + 0x90 & 0xfffffff0);
  *puVar9 = *puVar8;
  puVar9[1] = uVar15;
  puVar9[2] = uVar16;
  puVar9[3] = uVar17;
  puVar8 = (unsigned int *)((unsigned int)(puVar4 + 0xc) & 0xfffffff0);
  uVar15 = puVar8[1];
  uVar16 = puVar8[2];
  uVar17 = puVar8[3];
  puVar9 = (unsigned int *)((unsigned int)(puVar1 + 0x28) & 0xfffffff0);
  *puVar9 = *puVar8;
  puVar9[1] = uVar15;
  puVar9[2] = uVar16;
  puVar9[3] = uVar17;
  puVar8 = (unsigned int *)((unsigned int)(puVar4 + 0x10) & 0xfffffff0);
  uVar15 = puVar8[1];
  uVar16 = puVar8[2];
  uVar17 = puVar8[3];
  puVar9 = (unsigned int *)((unsigned int)(puVar1 + 0x2c) & 0xfffffff0);
  *puVar9 = *puVar8;
  puVar9[1] = uVar15;
  puVar9[2] = uVar16;
  puVar9[3] = uVar17;
  *(unsigned __int64 *)(puVar1 + 0x30) = *(unsigned __int64 *)(puVar4 + 0x14);
  *(unsigned __int64 *)(puVar1 + 0x32) = *(unsigned __int64 *)(puVar4 + 0x16);
  puVar1[0x34] = puVar4[0x18];
  puVar1[0x36] = puVar4[0x1a];
  *(unsigned char *)(puVar1 + 0x37) = *(unsigned char *)(puVar4 + 0x1b);
  *(unsigned char *)((int)puVar1 + 0xdd) = *(unsigned char *)((int)puVar4 + 0x6d);
  puVar1[0x38] = puVar4[0x1c];
  iVar11 = *(int *)(param_2 + 0xc);
  puVar1[4] = *(unsigned int *)(iVar11 + 0x2ec);
  puVar1[5] = *(float *)(iVar11 + 0x2fc) * *(float *)(iVar11 + 0x2ec);
  puVar1[6] = *(unsigned int *)(iVar11 + 0x2f0);
  puVar1[9] = *(unsigned int *)(iVar11 + 0x300);
  puVar1[10] = *(float *)(iVar11 + 0x300) * *(float *)(iVar11 + 0x2fc);
  puVar1[0x14] = *(unsigned int *)(iVar11 + 0x1e4);
  puVar1[0x15] = *(unsigned int *)(iVar11 + 0x1e8);
  puVar1[0xb] = *(float *)(iVar11 + 0x234) * *(float *)(iVar11 + 0x2f0);
  puVar1[0xc] = *(unsigned int *)(iVar11 + 0x1e8);
  puVar1[0xd] = *(float *)(iVar11 + 0x23c) * *(float *)(iVar11 + 0x2f0);
  puVar1[7] = *(unsigned int *)(iVar11 + 0x1d8);
  puVar1[8] = *(unsigned int *)(iVar11 + 0x1dc);
  puVar1[0x3c] = param_2;
  puVar1[0x3e] = *(unsigned int *)(*(int *)(*(int *)(param_2 + 0xc) + 0x78) + 8);
  puVar1[0x3f] = &lbl_8323C860;
  *puVar1 = *(unsigned int *)(param_2 + 0xc);
  iVar11 = *(int *)(*(int *)(param_2 + 0xc) + 0x2c);
  if (0 < iVar11) {
    if (*(char *)(*(int *)(param_2 + 0xc) + 0xb0) != '\0') {
      iVar12 = KeTlsGetValue(lbl_8323B4A0);
      puVar1 = *(unsigned int **)(iVar12 + 4);
      if (puVar1 < *(unsigned int **)(iVar12 + 0xc)) {
        *puVar1 = "StActions";
        uVar5 = TBLr;
        puVar1[1] = (int)uVar5;
        *(unsigned int **)(iVar12 + 4) = puVar1 + 3;
      }
      *(int *)(*(int *)(param_2 + 0xc) + 0x98) = *(int *)(*(int *)(param_2 + 0xc) + 0x98) + -1;
      fn_82DA35A0(param_2);
      *(int *)(*(int *)(param_2 + 0xc) + 0x98) = *(int *)(*(int *)(param_2 + 0xc) + 0x98) + 1;
    }
    fn_82CE89A8(param_3,0,iVar11);
    fn_82CE89A8(param_3,1,iVar11);
    fn_82CE8B30(param_3,uVar10 - 0x60,1);
  }
  fn_82DA3048((unsigned __int64)*(unsigned int *)(param_2 + 0xc) + 0x1e0);
  *(unsigned int *)(param_2 + 0xc0) = *(unsigned int *)(*(int *)(param_2 + 0xc) + 0x2c);
  *(unsigned int *)(param_2 + 0xc4) = *(unsigned int *)(*(int *)(param_2 + 0xc) + 0x38);
  fn_82D80B90();
  iVar11 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar11 + 4);
  if (puVar1 < *(unsigned int **)(iVar11 + 0xc)) {
    *puVar1 = &lbl_8202CF7C;
    uVar5 = TBLr;
    puVar1[1] = (int)uVar5;
    *(unsigned int **)(iVar11 + 4) = puVar1 + 3;
  }
  return 0;
}

