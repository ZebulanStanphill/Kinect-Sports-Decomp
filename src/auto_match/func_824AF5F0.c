typedef struct { unsigned __int64 lo, hi; } V16;
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int *auStack_10;
extern unsigned int fStack_18;
extern unsigned int fStack_8;
extern unsigned int lbl_821917C0;
extern V16 vectorSubtractFloatingPoint();


unsigned __int64 fn_824AF5F0(int param_1)

{
  __int64 lVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int in_r0;
  int iVar4;
  int iVar5;
  unsigned char in_vs32 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int in_register_000100c0;
  unsigned int in_register_000100c4;
  unsigned int in_register_000100c8;
  unsigned int in_vr12;
  float afStack_20 [2];
  float fStack_18;
  unsigned char auStack_10 [8];
  float fStack_8;
  
  iVar5 = *(int *)(param_1 + 0x3c);
  iVar4 = *(int *)(iVar5 + 0x14);
  if (iVar4 != 0) {
    lVar1 = -(unsigned __int64)(*(int *)(iVar5 + 0x38) == 0);
    if (iVar4 == 0) {
      iVar5 = 0;
    }
    else {
      iVar4 = iVar4 + -1;
      if ((*(int *)(iVar5 + 8) - *(int *)(iVar5 + 0xc)) / 0xf0 <= iVar4) {
        iVar4 = iVar4 - (*(int *)(iVar5 + 8) - *(int *)(iVar5 + 4)) / 0xf0;
      }
      iVar5 = iVar4 * 0xf0 + *(int *)(iVar5 + 0xc);
    }
    puVar2 = (unsigned int *)((int)((lVar1 + 1U & 0xffffffff) << 4) + iVar5 & 0xfffffff0);
    uVar6 = puVar2[1];
    uVar7 = puVar2[2];
    uVar8 = puVar2[3];
    puVar3 = (unsigned int *)((unsigned int)(auStack_10 + in_r0) & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar6;
    puVar3[2] = uVar7;
    puVar3[3] = uVar8;
    puVar2 = (unsigned int *)((int)((lVar1 + 9U & 0xffffffff) << 4) + iVar5 & 0xfffffff0);
    uVar6 = puVar2[1];
    uVar7 = puVar2[2];
    uVar8 = puVar2[3];
    vectorSubtractFloatingPoint(in_vs45,in_vs32);
    puVar3 = (unsigned int *)((int)afStack_20 + in_r0 & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar6;
    puVar3[2] = uVar7;
    puVar3[3] = uVar8;
    puVar2 = (unsigned int *)((int)afStack_20 + in_r0 & 0xfffffff0);
    *puVar2 = in_register_000100c0;
    puVar2[1] = in_register_000100c4;
    puVar2[2] = in_register_000100c8;
    puVar2[3] = in_vr12;
    if ((fStack_8 < fStack_18) &&
       (lbl_821917C0 < SQRT(fStack_18 * fStack_18 + afStack_20[0] * afStack_20[0]))) {
      return 1;
    }
  }
  return 0;
}

