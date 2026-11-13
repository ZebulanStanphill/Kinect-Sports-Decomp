typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int stack0x00000000;
extern unsigned int *uStack_10;
extern unsigned __int64 storeVectorElementWordIndexed();
extern V16 vectorSubtractFloatingPoint();


double fn_82DD36F8(void)

{
  unsigned int uVar1;
  unsigned char in_vs32 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs45 [16];
  unsigned int uStack_10;
  
  vectorSubtractFloatingPoint(in_vs45,in_vs32);
  uVar1 = storeVectorElementWordIndexed(in_vs42,0,ZEXT48(&stack0x00000000) - 0x10);
  *(unsigned int *)(ZEXT48(&stack0x00000000) - 0x10) = uVar1;
  return (double)(ABS(uStack_10) * uStack_10);
}

