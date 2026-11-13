typedef unsigned char bool;
typedef struct { unsigned __int64 lo, hi; } V16;
extern int fn_822C69F0();
extern int fn_822C6D68();
extern unsigned int lbl_82193AF0;
extern V16 vectorSubtractFloatingPoint();


bool fn_822BC0F0(int param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  float *pfVar3;
  unsigned int *puVar4;
  float fVar5;
  int in_r0;
  __int64 lVar6;
  unsigned char in_vs32 [16];
  unsigned char in_vs45 [16];
  float fVar7;
  float fVar8;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  float afStack_50 [20];
  
  lVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0x114) + 0x50;
  fn_822C6D68(lVar6,param_1 + 0x80,param_1 + 0xc0);
  fn_822C69F0(lVar6,param_1 + 0x80,param_1 + 0xc0);
  fVar5 = lbl_82193AF0;
  uVar2 = in_r0 + param_2 & 0xfffffff0;
  fVar7 = *(float *)(uVar2 + 4);
  fVar8 = *(float *)(uVar2 + 8);
  vectorSubtractFloatingPoint(in_vs45,in_vs32);
  fVar7 = fVar7 * fVar7 + 0.0 + fVar8 * fVar8;
  pfVar3 = (float *)((int)afStack_50 + in_r0 & 0xfffffff0);
  *pfVar3 = fVar7;
  pfVar3[1] = fVar7;
  pfVar3[2] = fVar7;
  pfVar3[3] = fVar7;
  if (afStack_50[0] < fVar5) {
    iVar1 = *(int *)(param_1 + 0x114);
    puVar4 = (unsigned int *)(in_r0 + iVar1 + 0x50 & 0xfffffff0);
    *puVar4 = in_register_000104d0;
    puVar4[1] = in_register_000104d4;
    puVar4[2] = in_register_000104d8;
    puVar4[3] = in_vr77;
    *(unsigned int *)(iVar1 + 0x7c) = 0;
    puVar4 = (unsigned int *)(iVar1 + 0x60U & 0xfffffff0);
    *puVar4 = in_register_000104d0;
    puVar4[1] = in_register_000104d4;
    puVar4[2] = in_register_000104d8;
    puVar4[3] = in_vr77;
  }
  return afStack_50[0] < fVar5;
}

