typedef unsigned char bool;
#define true 1
#define false 0
typedef struct { unsigned __int64 lo, hi; } V16;
extern int fn_8249E728();
extern unsigned int lbl_82186E64;
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_82191FB8;
extern unsigned int lbl_8327F880;
extern V16 vectorSubtractFloatingPoint();


unsigned __int64 fn_8249E5D8(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  bool bVar6;
  int in_r0;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned char in_vs32 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  float afStack_30 [4];
  float afStack_20 [8];
  
  fVar3 = lbl_8218E8E8;
  if (param_2 == 2) {
    fVar1 = *(float *)(param_1 + 0x78);
    fVar2 = *(float *)(param_1 + 0x88);
    puVar4 = (unsigned int *)(param_1 + 0x30U & 0xfffffff0);
    uVar9 = *puVar4;
    uVar10 = puVar4[1];
    uVar11 = puVar4[2];
    uVar12 = puVar4[3];
    puVar4 = (unsigned int *)(param_1 + 0x70U & 0xfffffff0);
    uVar13 = puVar4[1];
    uVar14 = puVar4[2];
    uVar15 = puVar4[3];
    vectorSubtractFloatingPoint(in_vs32,in_vs45);
    vectorSubtractFloatingPoint(in_vs32,in_vs44);
    puVar5 = (unsigned int *)((int)afStack_30 + in_r0 & 0xfffffff0);
    *puVar5 = *puVar4;
    puVar5[1] = uVar13;
    puVar5[2] = uVar14;
    puVar5[3] = uVar15;
    puVar4 = (unsigned int *)((int)afStack_20 + in_r0 & 0xfffffff0);
    *puVar4 = uVar9;
    puVar4[1] = uVar10;
    puVar4[2] = uVar11;
    puVar4[3] = uVar12;
    if ((fVar3 < ABS(fVar1 - fVar2)) || (bVar6 = true, fVar3 < ABS(afStack_30[0] - afStack_20[0])))
    {
      bVar6 = false;
    }
    uVar8 = (unsigned __int64)!bVar6;
  }
  else {
    if (param_2 == 3) {
      if (*(int *)(param_1 + 0xd0) < 0) {
        return 0;
      }
      uVar8 = 1;
      goto LAB_8249e708;
    }
    if (param_2 < 4) {
      return 0;
    }
    fVar3 = lbl_8327F880 * lbl_82186E64 * lbl_8327F880 * lbl_82186E64;
    fVar1 = lbl_8327F880 * lbl_82191FB8 * lbl_8327F880 * lbl_82191FB8;
    if ((fVar3 <= *(float *)(param_1 + 0xb8)) || (uVar7 = 1, *(float *)(param_1 + 0xbc) <= fVar1)) {
      uVar7 = 0;
    }
    if ((fVar3 <= *(float *)(param_1 + 0xbc)) || (uVar8 = 1, *(float *)(param_1 + 0xb8) <= fVar1)) {
      uVar8 = 0;
    }
    uVar8 = uVar8 | uVar7;
  }
  if ((int)uVar8 == 0) {
    return uVar8;
  }
LAB_8249e708:
  fn_8249E728(param_1,param_2,0,uVar8);
  return uVar8;
}

