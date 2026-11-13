typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int stack0x00000000;
extern unsigned int uStack_10;
extern unsigned __int64 storeVectorElementWordIndexed();
extern V16 vectorAddFloatingPoint();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


double fn_82D95480(void)

{
  unsigned int uVar1;
  unsigned char in_vs32 [16];
  unsigned char in_vs34 [16];
  unsigned char in_vs36 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned char in_vs50 [16];
  unsigned char auVar2 [16];
  unsigned char auVar3 [16];
  unsigned char in_vs56 [16];
  unsigned char in_vs57 [16];
  unsigned char in_vs58 [16];
  unsigned char in_vs59 [16];
  unsigned int uStack_10;
  
  vectorSubtractFloatingPoint(in_vs32,in_vs44);
  vectorSubtractFloatingPoint(in_vs32,in_vs45);{ V16 _vt0 = vectorSubtractFloatingPoint(in_vs57,in_vs58); memcpy(auVar3, &_vt0, 16); }{ V16 _vt1 = vectorSubtractFloatingPoint(in_vs56,in_vs59); memcpy(auVar2, &_vt1, 16); }{ V16 _vt2 = vectorAddFloatingPoint(auVar3,in_vs36); memcpy(auVar3, &_vt2, 16); }{ V16 _vt3 = vectorAddFloatingPoint(auVar2,in_vs34); memcpy(auVar2, &_vt3, 16); }
  vectorSubtractFloatingPoint(auVar2,auVar3);
  uVar1 = storeVectorElementWordIndexed(in_vs50,0,ZEXT48(&stack0x00000000) - 0x10);
  *(unsigned int *)(ZEXT48(&stack0x00000000) - 0x10) = uVar1;
  return (double)uStack_10;
}

