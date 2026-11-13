#define NAN(x) ((x) != (x))
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int fStack_4c;
extern unsigned int fStack_5c;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_88;
extern unsigned int uStack_90;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


void fn_824A2988(int param_1,int *param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  unsigned int uVar5;
  int iVar6;
  unsigned int uVar7;
  int iVar8;
  unsigned int *puVar9;
  unsigned int *puVar10;
  float *pfVar11;
  unsigned __int64 in_r0;
  __int64 lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  unsigned int uVar17;
  unsigned int uVar18;
  unsigned int uVar19;
  unsigned int uStack_a0;
  unsigned int uStack_9c;
  int aiStack_98 [2];
  unsigned __int64 uStack_90;
  unsigned __int64 uStack_88;
  __int64 lStack_80;
  float afStack_70 [4];
  unsigned char auStack_60 [4];
  float fStack_5c;
  unsigned char auStack_50 [4];
  float fStack_4c;
  
  (**(int (***)())*param_2)(param_2,&uStack_9c,&uStack_a0);
  dVar15 = (double)ltcg_pool_0_0f;
  *(float *)(param_1 + 0x60) = ltcg_pool_0_0f;
  lVar12 = (unsigned __int64)*(unsigned int *)(param_1 + 0x40) - 1;
  if (-1 < lVar12) {
    dVar16 = (double)lbl_821CA460;
    do {
      uStack_90 = (unsigned __int64)uStack_9c;
      uStack_88 = (unsigned __int64)uStack_a0 - lVar12 & 0xffffffff;
      dVar14 = (double)(float)((double)uStack_88 - (double)uStack_90);
      dVar13 = (double)uStack_88;
      if (*(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)((dVar14 < dVar15) << 2) | (unsigned int)(NAN(dVar14) || NAN(dVar15)) << 2)
                    ) < 0.0) {
        dVar13 = (double)uStack_90;
      }
      lStack_80 = (__int64)(int)dVar13;
      (**(int (***)())(*param_2 + 4))(param_2,(int)dVar13,aiStack_98);
      iVar2 = *(int *)(param_1 + 0x44);
      iVar6 = (int)in_r0;
      uVar5 = iVar6 + param_1 + 0x50 & 0xfffffff0;
      fVar1 = *(float *)(param_1 + 0x3c);
      iVar3 = *(int *)(aiStack_98[0] + 0x40);
      iVar8 = ((-(unsigned int)(iVar2 != 0) & 5) + 10) * 0x40 + iVar3;
      uVar7 = iVar8 + 0x10U & 0xfffffff0;
      fVar4 = *(float *)(uVar7 + 4) * *(float *)(uVar5 + 4) + 0.0 +
              *(float *)(uVar7 + 8) * *(float *)(uVar5 + 8);
      puVar9 = (unsigned int *)(iVar6 + iVar8 & 0xfffffff0);
      uVar17 = puVar9[1];
      uVar18 = puVar9[2];
      uVar19 = puVar9[3];
      puVar10 = (unsigned int *)((unsigned int)(auStack_60 + iVar6) & 0xfffffff0);
      *puVar10 = *puVar9;
      puVar10[1] = uVar17;
      puVar10[2] = uVar18;
      puVar10[3] = uVar19;
      puVar9 = (unsigned int *)(((-(unsigned int)(iVar2 != 0) & 5) + 8) * 0x40 + iVar3 & 0xfffffff0);
      uVar17 = puVar9[1];
      uVar18 = puVar9[2];
      uVar19 = puVar9[3];
      puVar10 = (unsigned int *)((unsigned int)(auStack_50 + iVar6) & 0xfffffff0);
      *puVar10 = *puVar9;
      puVar10[1] = uVar17;
      puVar10[2] = uVar18;
      puVar10[3] = uVar19;
      pfVar11 = (float *)((int)afStack_70 + iVar6 & 0xfffffff0);
      *pfVar11 = fVar4;
      pfVar11[1] = fVar4;
      pfVar11[2] = fVar4;
      pfVar11[3] = fVar4;
      if ((fVar1 <= afStack_70[0]) && (fStack_5c < fStack_4c)) {
        *(float *)(param_1 + 0x60) = (float)((double)*(float *)(param_1 + 0x60) + dVar16);
      }
      lVar12 = lVar12 + -1;
    } while (-1 < lVar12);
  }
  *(unsigned int *)(param_1 + 100) =
       (unsigned int)((float)(__int64)*(int *)(param_1 + 0x40) <= *(float *)(param_1 + 0x60));
  return;
}

