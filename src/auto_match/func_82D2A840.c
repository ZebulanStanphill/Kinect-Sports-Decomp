typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int lbl_82002AE0;
extern unsigned int stack0x00000000;
extern unsigned int uStack_10;
extern unsigned __int64 storeVectorElementWordIndexed();
extern V16 loadVectorLeftIndexed128();
extern V16 vectorAddFloatingPoint();
extern V16 vectorSubtractFloatingPoint();


double fn_82D2A840(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned __int64 in_r0;
  double dVar2;
  unsigned char in_vs32 [16];
  unsigned char in_vs38 [16];
  unsigned char in_vs40 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs45 [16];
  unsigned int uStack_10;
  
  vectorAddFloatingPoint(in_vs32,in_vs45);
  loadVectorLeftIndexed128(in_r0,0xffffffff82002c5c);
  vectorSubtractFloatingPoint(in_vs40,in_vs43);
  uVar1 = storeVectorElementWordIndexed(in_vs38,0,ZEXT48(&stack0x00000000) - 0x10);
  *(unsigned int *)(ZEXT48(&stack0x00000000) - 0x10) = uVar1;
  dVar2 = (double)lbl_82002AE0;
  if (*(float *)(param_1 + 0x20) < uStack_10) {
    return dVar2;
  }
  *(unsigned int *)(param_1 + 0x24) = *(unsigned int *)(param_2 + 0x20);
  return dVar2;
}

