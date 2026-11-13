typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int lbl_82142CD0;
extern unsigned int stack0x00000000;
extern unsigned int uStack_10;
extern unsigned __int64 storeVectorElementWordIndexed();
extern V16 vectorSubtractFloatingPoint();


unsigned __int64 fn_82DDDED0(unsigned __int64 param_1,unsigned __int64 param_2,float *param_3,float *param_4)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned char in_vs32 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs44 [16];
  unsigned int uStack_10;
  
  uVar2 = 1;
  vectorSubtractFloatingPoint(in_vs32,in_vs44);
  uVar1 = storeVectorElementWordIndexed(in_vs42,0,ZEXT48(&stack0x00000000) - 0x10);
  *(unsigned int *)(ZEXT48(&stack0x00000000) - 0x10) = uVar1;
  if (uStack_10 <= *param_3) {
    if (*param_3 < uStack_10 + lbl_82142CD0) {
      *param_3 = uStack_10 + lbl_82142CD0;
    }
    uVar2 = 2;
  }
  else if (uStack_10 < *param_4) {
    *param_4 = uStack_10;
  }
  if (*param_3 < *param_4) {
    return uVar2;
  }
  return 4;
}

