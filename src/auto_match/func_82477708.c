typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int fStack_4c;
extern unsigned int fStack_5c;
extern int fn_82275128();
extern int fn_824779E0();
extern int fn_82477F00();
extern int fn_82F4EBC0();
extern int fn_82F4EFF8();
extern int fn_82F50108();
extern int fn_82F50D98();
extern unsigned int lbl_821916FC;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831D3B9C;
extern unsigned int lbl_831D3BA4;
extern unsigned int lbl_831D3BAC;
extern unsigned int lbl_831D3BB0;
extern unsigned int lbl_831D3BB4;
extern unsigned int lbl_831D3BB8;
extern unsigned int lbl_831D3BBC;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorAddFloatingPoint();


void fn_82477708(double param_1,int param_2)

{
  int *piVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  unsigned __int64 in_r0;
  unsigned char bVar8;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  int iVar7;
  double dVar9;
  unsigned char in_vs32 [16];
  unsigned char in_vs45 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  unsigned char auStack_80 [16];
  unsigned char auStack_70 [16];
  unsigned char auStack_60 [4];
  float fStack_5c;
  unsigned char auStack_50 [4];
  float fStack_4c;
  
  bVar8 = 0;
  if (lbl_831D3B9C == 0) {
    if (*(int *)(param_2 + 0x160) == 0) {
      iVar7 = fn_82275128();
      uVar5 = fn_82F4EBC0(*(unsigned int *)(iVar7 + 8) & 0xff);
      uVar6 = fn_82F4EFF8();
      uVar6 = uVar6 & 0xff;
    }
    else {
      piVar1 = *(int **)(*(int *)(param_2 + 0x160) + 0xb60);
      uVar5 = fn_82F50D98(piVar1);
      uVar6 = (**(int (***)())(*piVar1 + 4))(piVar1);
    }
    if (((uVar5 & 0xffffffff) != 0) && (uVar6 != 0)) {
      fn_82F50108(uVar5,10,2,auStack_60,0,0,0);
      fn_82F50108(uVar5,0xf,2,auStack_50,0,0,0);
      fn_82F50108(uVar5,8,2,auStack_80,0,0,0);
      fn_82F50108(uVar5,0xd,2,auStack_70,0,0,0);
      iVar7 = (int)in_r0;
      pfVar2 = (float *)((unsigned int)(auStack_70 + iVar7) & 0xfffffff0);
      fVar13 = pfVar2[1];
      fVar14 = pfVar2[2];
      fVar15 = pfVar2[3];
      pfVar3 = (float *)((unsigned int)(auStack_80 + iVar7) & 0xfffffff0);
      fVar10 = pfVar3[1];
      fVar11 = pfVar3[2];
      fVar12 = pfVar3[3];
      vectorAddFloatingPoint(in_vs32,in_vs45);
      loadVectorLeftIndexed128(in_r0,0xffffffff8218e8e8);
      pfVar4 = (float *)((unsigned int)(auStack_60 + iVar7) & 0xfffffff0);
      *pfVar4 = *pfVar3 * *pfVar2;
      pfVar4[1] = fVar10 * fVar13;
      pfVar4[2] = fVar11 * fVar14;
      pfVar4[3] = fVar12 * fVar15;
      if (fStack_5c < fStack_4c) {
        bVar8 = 1;
      }
    }
  }
  else {
    bVar8 = fn_82477F00((double)lbl_831D3BAC,(double)lbl_831D3BB0,(double)lbl_831D3BB4,
                              (double)lbl_831D3BB8);
  }
  fVar10 = ltcg_pool_0_0f;
  bVar8 = -((*(unsigned int *)(param_2 + 0xe8) & 8) != 0) & bVar8;
  if (*(char *)(param_2 + 0x144) == '\0') {
    if ((bVar8 == 0) && (*(char *)(param_2 + 0x188) == '\0')) {
      *(float *)(param_2 + 0x13c) = ltcg_pool_0_0f;
    }
    else {
      *(float *)(param_2 + 0x13c) = (float)(param_1 + (double)*(float *)(param_2 + 0x13c));
    }
    fVar11 = lbl_831D3BBC;
    if (*(char *)(param_2 + 0x188) != '\0') {
      fVar11 = lbl_821916FC;
    }
    if (fVar11 < *(float *)(param_2 + 0x13c)) {
      *(float *)(param_2 + 0x140) = fVar10;
      *(float *)(param_2 + 0x13c) = fVar10;
      *(unsigned char *)(param_2 + 0x144) = 1;
      *(unsigned int *)(param_2 + 0xec) = *(unsigned int *)(param_2 + 0xec) | 8;
    }
  }
  else {
    dVar9 = (double)ltcg_pool_0_0f;
    if (((double)*(float *)(param_2 + 0x140) <= dVar9) && (lbl_831D3BA4 != 0)) {
      fn_824779E0(param_2,*(char *)(param_2 + 0x188) == '\0');
    }
    *(float *)(param_2 + 0x140) = (float)((double)*(float *)(param_2 + 0x140) - param_1);
    if ((bVar8 == 0) && (*(char *)(param_2 + 0x188) == '\0')) {
      *(float *)(param_2 + 0x13c) = (float)(param_1 + (double)*(float *)(param_2 + 0x13c));
    }
    else {
      *(float *)(param_2 + 0x13c) = (float)dVar9;
    }
    if (lbl_831D3BBC < *(float *)(param_2 + 0x13c)) {
      *(float *)(param_2 + 0x13c) = (float)dVar9;
      *(unsigned char *)(param_2 + 0x144) = 0;
    }
  }
  if (*(char *)(param_2 + 0x144) != '\0') {
    *(unsigned int *)(param_2 + 0xf0) = *(unsigned int *)(param_2 + 0xf0) | 8;
  }
  return;
}

