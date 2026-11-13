typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int fStack_10;
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000000;
extern unsigned __int64 storeVectorElementWordIndexed();
extern V16 vectorSubtractFloatingPoint();


void fn_82D3BCD8(int param_1,unsigned __int64 param_2,int param_3)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned char in_vs32 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  float fStack_10;
  
  puVar2 = (unsigned int *)(param_1 + 0x20U & 0xfffffff0);
  uVar3 = *puVar2;
  uVar4 = puVar2[1];
  uVar5 = puVar2[2];
  uVar6 = puVar2[3];
  puVar2 = (unsigned int *)(param_1 + 0x30U & 0xfffffff0);
  uVar7 = *puVar2;
  uVar8 = puVar2[1];
  uVar9 = puVar2[2];
  uVar10 = puVar2[3];
  vectorSubtractFloatingPoint(in_vs45,in_vs32);
  uVar1 = storeVectorElementWordIndexed(in_vs42,0,ZEXT48(&stack0x00000000) - 0x10);
  *(unsigned int *)(ZEXT48(&stack0x00000000) - 0x10) = uVar1;
  if (fStack_10 < lbl_821AAD20) {
    puVar2 = (unsigned int *)(in_r0 + param_3 & 0xfffffff0);
    *puVar2 = uVar3;
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
    *(unsigned int *)(param_3 + 0xc) = 0x3f000000;
    return;
  }
  puVar2 = (unsigned int *)(in_r0 + param_3 & 0xfffffff0);
  *puVar2 = uVar7;
  puVar2[1] = uVar8;
  puVar2[2] = uVar9;
  puVar2[3] = uVar10;
  *(unsigned int *)(param_3 + 0xc) = 0x3f000010;
  return;
}

