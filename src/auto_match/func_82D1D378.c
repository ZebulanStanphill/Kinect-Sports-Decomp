typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int stack0x00000000;
extern unsigned int uStack_10;
extern unsigned __int64 storeVectorElementWordIndexed();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


unsigned __int64 fn_82D1D378(double param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned char in_vs32 [16];
  unsigned char in_vs35 [16];
  unsigned char in_vs37 [16];
  unsigned char in_vs39 [16];
  unsigned char auVar3 [16];
  unsigned char auVar4 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned char in_vs55 [16];
  unsigned char in_vs57 [16];
  unsigned char in_vs58 [16];
  unsigned char in_vs59 [16];
  unsigned char in_vs61 [16];
  unsigned int uStack_10;
  
  uVar2 = ZEXT48(&stack0x00000000);
  vectorSubtractFloatingPoint(in_vs43,in_vs45);{ V16 _vt0 = vectorSubtractFloatingPoint(in_vs45,in_vs32); memcpy(auVar4, &_vt0, 16); }
  vectorSubtractFloatingPoint(in_vs43,in_vs32);{ V16 _vt1 = vectorSubtractFloatingPoint(in_vs44,in_vs45); memcpy(auVar3, &_vt1, 16); }
  vectorSubtractFloatingPoint(in_vs59,in_vs61);
  vectorSubtractFloatingPoint(in_vs57,in_vs58);
  uVar1 = storeVectorElementWordIndexed(in_vs55,0,uVar2 - 0x10);
  *(unsigned int *)(uVar2 - 0x10) = uVar1;
  if (param_1 <= (double)uStack_10) {
    vectorSubtractFloatingPoint(in_vs44,in_vs32);
    vectorSubtractFloatingPoint(in_vs37,auVar4);
    uVar1 = storeVectorElementWordIndexed(in_vs35,0,uVar2 - 0x10);
    *(unsigned int *)(uVar2 - 0x10) = uVar1;
    if (param_1 <= (double)uStack_10) {
      vectorSubtractFloatingPoint(in_vs39,auVar3);
      uVar1 = storeVectorElementWordIndexed(in_vs37,0,uVar2 - 0x10);
      *(unsigned int *)(uVar2 - 0x10) = uVar1;
      if ((double)uStack_10 < param_1) {
        return 0;
      }
      return 1;
    }
  }
  return 0;
}

