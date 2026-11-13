typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int fStack_10;
extern unsigned int fStack_8;
extern unsigned int fStack_c;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000000;
extern unsigned __int64 storeVectorElementWordIndexed();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


/* WARNING: Removing unreachable block (ram,0x82d76728) */

void fn_82D76578(void)

{
  unsigned int uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  unsigned __int64 uVar6;
  float *in_r7;
  unsigned char auVar7 [16];
  unsigned char in_vs39 [16];
  unsigned char in_vs40 [16];
  unsigned char in_vs41 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs44 [16];
  unsigned char auVar8 [16];
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  uVar6 = ZEXT48(&stack0x00000000);{ V16 _vt0 = vectorSubtractFloatingPoint(in_vs42,in_vs44); memcpy(auVar7, &_vt0, 16); }{ V16 _vt1 = vectorSubtractFloatingPoint(in_vs43,in_vs44); memcpy(auVar8, &_vt1, 16); }
  uVar1 = storeVectorElementWordIndexed(in_vs41,0,uVar6 - 0xc);
  *(unsigned int *)(uVar6 - 0xc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(in_vs40,0,uVar6 - 0x10);
  *(unsigned int *)(uVar6 - 0x10) = uVar1;
  uVar1 = storeVectorElementWordIndexed(in_vs39,0,uVar6 - 8);
  *(unsigned int *)(uVar6 - 8) = uVar1;
  fVar2 = lbl_821AAD20;
  fVar5 = fStack_10 * fStack_c - fStack_8 * fStack_8;
  if (lbl_821AAD20 < fVar5) {
    vectorSubtractFloatingPoint(in_vs44,in_vs43);
    fVar4 = lbl_82002AE0 / fVar5;
    uVar1 = storeVectorElementWordIndexed(in_vs41,0,uVar6 - 8);
    *(unsigned int *)(uVar6 - 8) = uVar1;
    uVar1 = storeVectorElementWordIndexed(in_vs40,0,uVar6 - 0xc);
    *(unsigned int *)(uVar6 - 0xc) = uVar1;
    fVar3 = fStack_c * fStack_8 - fStack_8 * fStack_10;
    *in_r7 = fVar3 * fVar4;
    fVar2 = fStack_8 * fStack_8 - fStack_c * fStack_c;
    in_r7[2] = fVar2 * fVar4;
    in_r7[1] = ((fVar5 - fVar3) - fVar2) * fVar4;
    return;
  }
  vectorSubtractFloatingPoint(in_vs42,in_vs43);
  uVar1 = storeVectorElementWordIndexed(in_vs41,0,uVar6 - 0x10);
  *(unsigned int *)(uVar6 - 0x10) = uVar1;
  if (fStack_c < fStack_10) {
    vectorSubtractFloatingPoint(auVar7,in_vs43);
    uVar1 = storeVectorElementWordIndexed(in_vs44,0,uVar6 - 8);
    *(unsigned int *)(uVar6 - 8) = uVar1;
    fVar5 = lbl_82002AE0 - fStack_8 / fStack_10;
    in_r7[1] = fVar2;
    *in_r7 = fStack_8 / fStack_10;
    in_r7[2] = fVar5;
    return;
  }
  if (fStack_10 < fStack_c) {
    vectorSubtractFloatingPoint(auVar8,in_vs44);
    uVar1 = storeVectorElementWordIndexed(in_vs43,0,uVar6 - 8);
    *(unsigned int *)(uVar6 - 8) = uVar1;
    fVar5 = lbl_82002AE0 - fStack_8 / fStack_c;
    in_r7[2] = fVar2;
    *in_r7 = fStack_8 / fStack_c;
    in_r7[1] = fVar5;
    return;
  }
  in_r7[1] = fVar2;
  if (fStack_10 <= fVar2) {
    in_r7[2] = fVar2;
    *in_r7 = fVar2;
    return;
  }
  vectorSubtractFloatingPoint(auVar8,auVar7);
  uVar1 = storeVectorElementWordIndexed(in_vs43,0,uVar6 - 8);
  *(unsigned int *)(uVar6 - 8) = uVar1;
  fVar5 = lbl_82002AE0 - fStack_8 / fStack_10;
  *in_r7 = fStack_8 / fStack_10;
  in_r7[2] = fVar5;
  return;
}

