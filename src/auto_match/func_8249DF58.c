typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int fStack_18;
extern int fn_8249ABC0();
extern int fn_8249E0C8();
extern int fn_8249E418();
extern V16 vectorSubtractFloatingPoint();


void fn_8249DF58(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int in_r0;
  int iVar5;
  int iVar6;
  unsigned char in_vs32 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  float afStack_20 [2];
  float fStack_18;
  
  iVar5 = fn_8249ABC0();
  if (*(int *)(*(int *)(iVar5 + 0x110) + 0x34) == 0) {
    if (*(int *)(param_1 + 0x28) == 0) {
      fn_8249E418(param_1);
    }
    uVar1 = *(unsigned int *)(param_1 + 200);
    if (uVar1 != 0) {
      if (uVar1 == 1) {
        if ((*(int *)(param_1 + 0xc4) < 2) ||
           ((iVar5 = *(int *)(param_1 + 4), *(int *)(iVar5 + 0x20) < 0 &&
            (*(int *)(*(int *)(param_1 + 8) + 0x20) < 0)))) {
          *(unsigned int *)(*(int *)(param_1 + 0xc) + 0x20) = *(unsigned int *)(param_1 + 0xcc);
          *(unsigned int *)(*(int *)(param_1 + 0x10) + 0x20) = 0xffffffff;
        }
        else if (*(int *)(param_1 + 0x1c) != 0) {
          uVar2 = *(unsigned int *)(param_1 + 0xcc);
          puVar3 = (unsigned int *)(param_1 + 0x50U & 0xfffffff0);
          uVar7 = puVar3[1];
          uVar8 = puVar3[2];
          uVar9 = puVar3[3];
          puVar4 = (unsigned int *)(param_1 + 0x60U & 0xfffffff0);
          uVar10 = *puVar4;
          uVar11 = puVar4[1];
          uVar12 = puVar4[2];
          uVar13 = puVar4[3];
          vectorSubtractFloatingPoint(in_vs32,in_vs44);
          vectorSubtractFloatingPoint(in_vs45,in_vs44);
          puVar4 = (unsigned int *)((int)afStack_20 + in_r0 & 0xfffffff0);
          *puVar4 = *puVar3;
          puVar4[1] = uVar7;
          puVar4[2] = uVar8;
          puVar4[3] = uVar9;
          puVar3 = (unsigned int *)((int)afStack_20 + in_r0 & 0xfffffff0);
          *puVar3 = uVar10;
          puVar3[1] = uVar11;
          puVar3[2] = uVar12;
          puVar3[3] = uVar13;
          iVar6 = iVar5;
          if (fStack_18 * fStack_18 + afStack_20[0] * afStack_20[0] <=
              fStack_18 * fStack_18 + afStack_20[0] * afStack_20[0]) {
            iVar6 = *(int *)(param_1 + 8);
          }
          if (iVar6 == iVar5) {
            iVar5 = *(int *)(param_1 + 8);
          }
          *(unsigned int *)(iVar6 + 0x20) = uVar2;
          *(unsigned int *)(iVar5 + 0x20) = 0xffffffff;
        }
        *(unsigned int *)(param_1 + 0xec) = 0;
        return;
      }
      if (2 < uVar1) {
        return;
      }
      fn_8249E0C8(param_1);
      return;
    }
  }
  *(unsigned int *)(*(int *)(param_1 + 4) + 0x20) = 0xffffffff;
  *(unsigned int *)(*(int *)(param_1 + 8) + 0x20) = 0xffffffff;
  *(unsigned int *)(param_1 + 0xec) = 0;
  return;
}

