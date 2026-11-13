#define NAN(x) ((x) != (x))
extern unsigned int *auStack_20;
extern unsigned int fStack_1c;
extern int fn_824AA258();
extern int fn_824AA3D8();
extern unsigned int lbl_821914EC;
extern unsigned int lbl_821914FC;
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;


double fn_824A9FD8(int param_1,unsigned __int64 param_2)

{
  float fVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int in_r0;
  int iVar4;
  float *pfVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned char auStack_20 [4];
  float fStack_1c;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    pfVar5 = (float *)&lbl_821914EC;
  }
  else {
    pfVar5 = (float *)&lbl_821914FC;
  }
  if (pfVar5[3] == 0.0) {
    iVar4 = fn_824AA258(auStack_20,param_1,param_2,pfVar5[2]);
  }
  else {
    iVar4 = fn_824AA3D8();
  }
  puVar2 = (unsigned int *)(in_r0 + iVar4 & 0xfffffff0);
  uVar10 = puVar2[1];
  uVar11 = puVar2[2];
  uVar12 = puVar2[3];
  fVar1 = *pfVar5;
  puVar3 = (unsigned int *)((unsigned int)(auStack_20 + in_r0) & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar10;
  puVar3[2] = uVar11;
  puVar3[3] = uVar12;
  dVar6 = -(double)fStack_1c;
  dVar8 = (double)ltcg_pool_0_0f;
  if ((double)fVar1 <= dVar6) {
    dVar9 = (double)pfVar5[1];
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((dVar6 < dVar8) << 2) | (unsigned int)(NAN(dVar6) || NAN(dVar8)) << 2)) <
        0.0) {
      dVar6 = dVar8;
    }
    dVar7 = dVar9;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)(((double)(float)(dVar6 - dVar9) < dVar8) << 2) |
                  (unsigned int)(NAN((double)(float)(dVar6 - dVar9)) || NAN(dVar8)) << 2)) < 0.0) {
      dVar7 = dVar6;
    }
    dVar8 = (double)(float)(dVar7 / dVar9);
  }
  return dVar8;
}

