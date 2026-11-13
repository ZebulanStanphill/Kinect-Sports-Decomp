typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int fStack_10;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002D08;
extern unsigned int lbl_821389B8;
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000000;
extern unsigned __int64 storeVectorElementWordIndexed();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82D6F438(unsigned char *param_1,float *param_2,float *param_3,float *param_4)

{
  unsigned int uVar1;
  float fVar2;
  float fVar3;
  unsigned __int64 uVar4;
  unsigned char in_vs32 [16];
  unsigned char auVar5 [16];
  unsigned char in_vs36 [16];
  unsigned char in_vs37 [16];
  unsigned char in_vs38 [16];
  unsigned char in_vs41 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs43 [16];
  char in_stack_0000005f;
  float fStack_10;
  
  uVar4 = ZEXT48(&stack0x00000000);
  vectorSubtractFloatingPoint(in_vs43,in_vs32);
  vectorSubtractFloatingPoint(in_vs41,in_vs32);
  vectorSubtractFloatingPoint(in_vs37,in_vs38);
  uVar1 = storeVectorElementWordIndexed(in_vs36,0,uVar4 - 0x10);
  *(unsigned int *)(uVar4 - 0x10) = uVar1;
  if (((in_stack_0000005f == '\0') && (fStack_10 <= lbl_821389B8)) || (lbl_82002D08 <= fStack_10)) {
    vectorSubtractFloatingPoint(in_vs42,in_vs32);
    fVar2 = lbl_82002AE0 / fStack_10;
    uVar1 = storeVectorElementWordIndexed(in_vs41,0,uVar4 - 0x10);
    *(unsigned int *)(uVar4 - 0x10) = uVar1;
    fVar3 = lbl_821AAD20;
    *param_3 = fStack_10;
    if (fVar3 <= fStack_10) {{ V16 _vt0 = vectorSubtractFloatingPoint(in_vs37,in_vs38); memcpy(auVar5, &_vt0, 16); }
      uVar1 = storeVectorElementWordIndexed(in_vs36,0,uVar4 - 0x10);
      *(unsigned int *)(uVar4 - 0x10) = uVar1;
      *param_4 = fStack_10;
      if ((fVar3 <= fStack_10) && (fStack_10 + *param_3 <= fStack_10)) {
        uVar1 = storeVectorElementWordIndexed(auVar5,0,uVar4 - 0x10);
        *(unsigned int *)(uVar4 - 0x10) = uVar1;
        *param_1 = 1;
        *param_2 = fStack_10 * fVar2;
        *param_3 = fVar2 * *param_3;
        *param_4 = *param_4 * fVar2;
        return;
      }
    }
  }
  *param_1 = 0;
  return;
}

