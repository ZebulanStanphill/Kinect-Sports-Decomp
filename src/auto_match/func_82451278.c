typedef struct { unsigned __int64 lo, hi; } V16;
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern unsigned int fStack_dc;
extern unsigned int fStack_e4;
extern unsigned int fStack_e8;
extern int fn_82291E90();
extern int fn_822ABA88();
extern int fn_82338740();
extern int fn_8242C1B8();
extern int fn_8242C410();
extern int fn_824334C0();
extern int fn_8249ABC0();
extern int fn_8249D070();
extern int fn_8249D128();
extern int fn_82F68CC0();
extern unsigned int lbl_82005748;
extern unsigned int lbl_821917B0;
extern unsigned int lbl_821922D4;
extern unsigned int lbl_82192754;
extern unsigned int lbl_82193CC0;
extern unsigned int lbl_82193E50;
extern unsigned int lbl_82195600;
extern unsigned int lbl_821956C8;
extern unsigned int lbl_82195E74;
extern unsigned int lbl_821CA1A0;
extern unsigned int lbl_821CA1A8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_f0;
extern V16 loadVectorLeftIndexed128();


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82451278(int *param_1)

{
  float *pfVar1;
  int *piVar2;
  float fVar3;
  unsigned int uVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  unsigned int uVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  double dVar13;
  unsigned __int64 uStack_f0;
  float fStack_e8;
  float fStack_e4;
  unsigned char auStack_e0 [4];
  float fStack_dc;
  unsigned char auStack_d0 [84];
  unsigned int uStack_7c;
  unsigned int uStack_78;
  
  fn_8242C1B8(*(unsigned int *)param_1[0x10]);
  dVar13 = (double)ltcg_pool_0_0f;
  (**(int (***)())(*param_1 + 0x1c))(dVar13,&uStack_f0,param_1);
  (**(int (***)())(*param_1 + 0x20))(dVar13,auStack_e0,param_1);
  fStack_dc = fStack_dc + lbl_82193E50;
  loadVectorLeftIndexed128(0xffffffff821917a8,0xffffffffffffd140);
  (**(int (***)())(*(int *)param_1[0x11] + 4))
            ((int *)param_1[0x11],*(unsigned int *)(*(int *)(*(int *)param_1[0x10] + 0x174) + 0x9c),
             lbl_821CA1A0,(unsigned __int64)lbl_821CA1A8 << 0x20);
  iVar7 = param_1[0x11];
  iVar9 = **(int **)(iVar7 + 4);
  if ((iVar9 != 0) && (*(int *)(iVar9 + 0x1d0) == 0)) {
    *(unsigned int *)(iVar9 + 0x1d0) = 1;
  }
  uVar4 = lbl_82192754;
  uVar10 = lbl_821922D4;
  *(unsigned int *)(*(int *)(iVar7 + 4) + 0x2c) = 0;
  iVar7 = param_1[0x11];
  *(float *)(*(int *)(iVar7 + 0x14) + 0x104) = (float)dVar13;
  *(unsigned int *)(*(int *)(iVar7 + 0x14) + 0x108) = uVar10;
  *(unsigned int *)(*(int *)(iVar7 + 0x14) + 0x11c) = uVar10;
  *(unsigned int *)(*(int *)(iVar7 + 0x14) + 0x120) = uVar4;
  *(unsigned int *)(*(int *)(iVar7 + 0x14) + 0x134) = uVar4;
  *(unsigned int *)(*(int *)(iVar7 + 0x14) + 0x138) = lbl_82195600;
  iVar7 = *(int *)(**(int **)(param_1[0x11] + 4) + 0x7c0);
  if ((iVar7 != 0) && (iVar7 = *(int *)(iVar7 + 0x10), iVar7 != 0)) {
    *(unsigned int *)(iVar7 + 0x10) = lbl_82193CC0;
  }
  uVar12 = ZEXT48((unsigned int *)param_1[0x10]);
  iVar9 = 0;
  uVar11 = (unsigned __int64)*(unsigned int *)param_1[0x10];
  iVar7 = fn_8242C410(uVar11);
  if (0 < iVar7) {
    iVar7 = 0;
    do {
      piVar2 = *(int **)(**(int **)((int)uVar11 + 8) + iVar7);
      fn_822ABA88((double)*(float *)((int)uVar12 + 0x16c),*(unsigned int *)(piVar2[4] * 4 + *piVar2),
                   0);
      fn_82338740();
      uVar12 = ZEXT48((unsigned int *)param_1[0x10]);
      iVar9 = iVar9 + 1;
      iVar7 = iVar7 + 4;
      uVar11 = (unsigned __int64)*(unsigned int *)param_1[0x10];
      iVar8 = fn_8242C410(uVar11);
    } while (iVar9 < iVar8);
  }
  fn_824334C0(param_1);
  iVar7 = fn_8242C1B8(*(unsigned int *)param_1[0x10]);
  iVar7 = *(int *)(*(int *)(*(int *)(iVar7 + 0x24) + 0xfc) + 0x20);
  if (iVar7 != 0) {
    *(unsigned int *)(*(int *)(iVar7 + 0x3c) + 0x3c) = 0;
  }
  fn_82291E90(*(unsigned int *)(*(int *)param_1[0x10] + 0xd4),0,0);
  fVar6 = lbl_82195E74;
  fVar5 = lbl_821956C8;
  fVar3 = lbl_82005748;
  *(unsigned char *)(param_1[0x11] + 0x30) = 0;
  *(unsigned char *)(param_1[0x11] + 0x38) = 0;
  *(float *)(param_1[0x11] + 0x40) = (float)dVar13;
  *(int *)(param_1[0x11] + 0x24) =
       (int)((float)(__int64)*(int *)(param_1[0x10] + 0x118) * fVar6 * fVar3);
  uStack_f0 = (__int64)*(int *)(param_1[0x10] + 0x118);
  *(int *)(param_1[0x11] + 0x28) = (int)((float)uStack_f0 * fVar5 * fVar3);
  dVar13 = (double)*(float *)(param_1[0x11] + 0x50);
  if (*(int *)(param_1[0x10] + 0x1ac) != -1) {
    iVar7 = param_1[0x10];
    iVar9 = fn_8249ABC0();
    fn_8249D128(*(unsigned int *)(iVar9 + 0xec),*(unsigned int *)(iVar7 + 0x1ac));
  }
  iVar7 = fn_8249ABC0();
  pfVar1 = *(float **)(iVar7 + 0xec);
  fStack_e4 = pfVar1[3];
  fStack_e8 = (float)((double)pfVar1[2] - dVar13);
  uStack_f0 = CONCAT44((float)((double)*pfVar1 + dVar13),pfVar1[1]);
  iVar9 = fn_8249ABC0();
  iVar7 = param_1[0x10];
  uVar10 = fn_8249D070(*(unsigned int *)(iVar9 + 0xec),uStack_f0,CONCAT44(fStack_e8,fStack_e4));
  *(unsigned int *)(iVar7 + 0x1ac) = uVar10;
  iVar7 = *(int *)(*(int *)(*(int *)(*(int *)param_1[0x10] + 0x174) + 0x9c) + 0x8c8);
  if ((iVar7 != 0) &&
     (fn_82F68CC0(auStack_d0,
                   (unsigned __int64)*(unsigned int *)(*(int *)(*(int *)param_1[0x10] + 0x174) + 0x5c) + 0x238,0x6c
                  ), *(int *)(iVar7 + 4) != 0)) {
    *(unsigned int *)(iVar7 + 0x1d8) = lbl_821917B0;
    *(unsigned int *)(iVar7 + 0x1d4) = 1;
    *(unsigned int *)(iVar7 + 0x1d0) = uStack_78;
    *(unsigned int *)(iVar7 + 0x1cc) = uStack_7c;
    uVar10 = lbl_821CA460;
    *(unsigned int *)(iVar7 + 0x1dc) = lbl_821CA460;
    *(unsigned int *)(iVar7 + 0x1e0) = uVar10;
  }
  return;
}

