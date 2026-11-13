typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int lbl_82002AE0;
extern unsigned int stack0x00000000;
extern unsigned int uStack_10;
extern unsigned __int64 storeVectorElementWordIndexed();
extern V16 vectorAddFloatingPoint();
extern V16 vectorSubtractFloatingPoint();


double fn_82D1E5F8(int param_1,unsigned int param_2)

{
  unsigned int uVar1;
  unsigned char in_vs32 [16];
  unsigned char in_vs40 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs45 [16];
  unsigned int uStack_10;
  
  vectorAddFloatingPoint(in_vs32,in_vs45);
  vectorSubtractFloatingPoint(in_vs43,in_vs42);
  uVar1 = storeVectorElementWordIndexed(in_vs40,0,ZEXT48(&stack0x00000000) - 0x10);
  *(unsigned int *)(ZEXT48(&stack0x00000000) - 0x10) = uVar1;
  if (uStack_10 < *(float *)(param_1 + 0x20)) {
    *(float *)(param_1 + 0x20) = uStack_10;
    *(unsigned int *)(param_1 + 0x30) = param_2;
    return (double)lbl_82002AE0;
  }
  return (double)lbl_82002AE0;
}

