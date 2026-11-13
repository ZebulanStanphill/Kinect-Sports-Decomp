typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_60;
extern unsigned int fStack0000001c;
extern unsigned int fStack_68;
extern unsigned int fStack_6c;
extern unsigned int fStack_70;
extern int fn_82CE5040();
extern int fn_82CE5410();
extern int fn_82CE6310();
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000000;
extern unsigned int uStack_64;
extern V16 loadVectorLeftIndexed128();


void fn_82D45CE8(double param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,int *param_5)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  unsigned __int64 in_r0;
  unsigned __int64 uVar8;
  int iVar9;
  __int64 lVar10;
  int iVar11;
  float in_register_00010000;
  float fVar12;
  unsigned int uVar13;
  float fVar14;
  unsigned int uVar15;
  float fVar16;
  unsigned int uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fStack0000001c;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  unsigned int uStack_64;
  unsigned char auStack_60 [96];
  
  uVar8 = ZEXT48(&stack0x00000000);
  fStack0000001c = (float)param_1;
  iVar11 = *(int *)(param_2 + 0x14) / 3;
  iVar9 = fn_82CE5410();
  if ((int)(param_5[2] & 0x3fffffffU) < iVar11) {
    lVar10 = ((unsigned __int64)(unsigned int)param_5[2] & 0x3fffffff) << 1;
    if ((int)lVar10 <= iVar11) {
      lVar10 = (__int64)iVar11;
    }
    fn_82CE6310(*(unsigned int *)(iVar9 + 0x10),param_5,lVar10,0x10);
  }
  param_5[1] = iVar11;
  iVar11 = 0;
  if (0 < *(int *)(param_2 + 0x14)) {
    iVar9 = 0;
    loadVectorLeftIndexed128(in_r0,uVar8 + 0x1c);
    uStack_64 = lbl_821AAD20;
    fVar23 = in_register_00010000;
    fVar22 = in_register_00010000;
    fVar21 = in_register_00010000;
    do {
      iVar1 = *(int *)(param_2 + 0x10);
      iVar3 = (int)in_r0;
      pfVar2 = (float *)(iVar3 + param_2 & 0xfffffff0);
      fVar18 = pfVar2[1];
      fVar19 = pfVar2[2];
      fVar20 = pfVar2[3];
      fStack_70 = (float)*(unsigned short *)(iVar9 + iVar1);
      fStack_6c = (float)*(unsigned short *)(iVar9 + iVar1 + 2);
      fStack_68 = (float)*(unsigned short *)(iVar9 + iVar1 + 4);
      pfVar4 = (float *)((int)&fStack_70 + iVar3 & 0xfffffff0);
      fVar12 = pfVar4[1];
      fVar14 = pfVar4[2];
      fVar16 = pfVar4[3];
      pfVar5 = (float *)((unsigned int)(auStack_60 + iVar3) & 0xfffffff0);
      *pfVar5 = fVar21 * *pfVar4 + *pfVar2;
      pfVar5[1] = fVar22 * fVar12 + fVar18;
      pfVar5[2] = fVar23 * fVar14 + fVar19;
      pfVar5[3] = in_register_00010000 * fVar16 + fVar20;
      fn_82CE5040(uVar8 - 0x60,param_4,uVar8 - 0x60);
      iVar1 = iVar11 / 3;
      iVar11 = iVar11 + 3;
      iVar9 = iVar9 + 6;
      puVar6 = (unsigned int *)((unsigned int)(auStack_60 + (int)in_r0) & 0xfffffff0);
      uVar13 = puVar6[1];
      uVar15 = puVar6[2];
      uVar17 = puVar6[3];
      puVar7 = (unsigned int *)(iVar1 * 0x10 + *param_5 & 0xfffffff0);
      *puVar7 = *puVar6;
      puVar7[1] = uVar13;
      puVar7[2] = uVar15;
      puVar7[3] = uVar17;
    } while (iVar11 < *(int *)(param_2 + 0x14));
  }
  return;
}

