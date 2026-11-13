typedef struct { unsigned __int64 lo, hi; } V16;
extern int fn_8253FE20();
extern int fn_82626258();
extern int fn_8262D810();
extern int fn_8262E990();
extern int fn_8262EB98();
extern int fn_8262EE50();
extern V16 vectorSubtractFloatingPoint();


unsigned __int64 fn_82627340(double param_1,unsigned __int64 param_2,__int64 param_3,unsigned __int64 param_4,
                       unsigned int *param_5,unsigned int *param_6)

{
  float fVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  float *pfVar6;
  int in_r0;
  int iVar8;
  unsigned __int64 uVar7;
  __int64 lVar9;
  int *piVar10;
  unsigned char in_vs32 [16];
  unsigned char in_vs45 [16];
  float fVar11;
  float fVar12;
  int aiStack_60 [4];
  float afStack_50 [20];
  
  iVar5 = (int)param_3;
  iVar2 = *(int *)(iVar5 + 0x1c4);
  if ((*(unsigned short *)(iVar5 + 0xa0) & 8) != 0) {
    if ((double)*(float *)(iVar5 + 0xf8) <= param_1) {
      return 0;
    }
    *(float *)(iVar5 + 0xf8) = (float)((double)*(float *)(iVar5 + 0xf8) - param_1);
  }
  if ((*(unsigned short *)(iVar5 + 0xa0) & 4) != 0) {
    fn_8262E990(param_1,param_3 + 0x170);
  }
  iVar8 = fn_82626258(param_1,param_2,param_3,aiStack_60);
  if (iVar8 == 0) {
    uVar3 = *(unsigned int *)(iVar5 + 0xa4);
    *param_5 = 0;
    *param_6 = uVar3;
    fn_8262EB98(param_1,param_3 + 0xa8);
    fn_8253FE20((double)*(float *)(iVar5 + 0xf0),param_1,param_3 + 0x7c);
    if ((*(unsigned short *)(iVar5 + 0xa0) & 1) != 0) {
      fn_8262EE50(param_1,param_3 + 0x110);
    }
    if ((*(unsigned short *)(iVar5 + 0xa0) & 2) != 0) {
      lVar9 = param_3 + 0x188;
      fn_8262E990(param_1,lVar9);
      fn_8262E990(param_1,lVar9 + 0x14);
      fn_8262E990(param_1,lVar9 + 0x28);
    }
    uVar4 = *(unsigned int *)(iVar2 + 0x20);
    *(float *)(iVar5 + 0x184) = (float)((double)*(float *)(iVar5 + 0x184) - param_1);
    if ((uVar4 & 0x4000) != 0) {
      uVar4 = in_r0 + iVar5 & 0xfffffff0;
      fVar11 = *(float *)(uVar4 + 4);
      fVar12 = *(float *)(uVar4 + 8);
      fVar1 = *(float *)(iVar2 + 0x188);
      vectorSubtractFloatingPoint(in_vs32,in_vs45);
      fVar11 = fVar11 * fVar11 + 0.0 + fVar12 * fVar12;
      pfVar6 = (float *)((int)afStack_50 + in_r0 & 0xfffffff0);
      *pfVar6 = fVar11;
      pfVar6[1] = fVar11;
      pfVar6[2] = fVar11;
      pfVar6[3] = fVar11;
      if (fVar1 < afStack_50[0]) {
        iVar2 = *(int *)(iVar5 + 0x1c4);
        if (*(int *)(iVar2 + 0x224) == 0) {
          iVar8 = 0;
          for (piVar10 = *(int **)(iVar5 + 0x1c8); piVar10[1] != 2;
              piVar10 = (int *)(*piVar10 + (int)piVar10)) {
            if (piVar10[1] == 0x1b5e) {
              *(int *)(iVar2 + 0x224) = iVar8;
              iVar8 = *piVar10 + (int)piVar10;
            }
          }
        }
        if (*(int *)(iVar2 + 0x224) != 0) {
          *(int *)(iVar5 + 0x1c8) = *(int *)(iVar2 + 0x224);
        }
      }
    }
    uVar7 = fn_8262D810(param_3,param_3 + 0x1c8);
  }
  else {
    *param_5 = 1;
    uVar7 = (unsigned __int64)(aiStack_60[0] == 0);
  }
  return uVar7;
}

