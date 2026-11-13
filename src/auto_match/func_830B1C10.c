typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int stack0x00000000;
extern unsigned int uStack_10;
extern unsigned __int64 storeVectorElementWordIndexed();
extern V16 vectorMaximumFloatingPoint();
extern V16 vectorMergeHighWord();
extern V16 vectorMultiplyAddFloatingPoint();
extern V16 vectorNegativeMultiplySubtractFloatingPoint();
extern V16 vectorReciprocalEstimateFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


double fn_830B1C10(void)

{
  unsigned int uVar1;
  unsigned char in_vs32 [16];
  unsigned char auVar2 [16];
  unsigned char in_vs33 [16];
  unsigned char in_vs35 [16];
  unsigned char in_vs36 [16];
  unsigned char in_vs39 [16];
  unsigned char auVar3 [16];
  unsigned char in_vs43 [16];
  unsigned char auVar4 [16];
  unsigned char in_vs45 [16];
  unsigned char in_vs59 [16];
  unsigned char auVar5 [16];
  unsigned char auVar6 [16];
  unsigned int uStack_10;{ V16 _vt0 = vectorMaximumFloatingPoint(in_vs39,in_vs32); memcpy(auVar4, &_vt0, 16); }{ V16 _vt1 = vectorReciprocalEstimateFloatingPoint(auVar4); memcpy(auVar2, &_vt1, 16); }{ V16 _vt2 = vectorMergeHighWord(in_vs36,in_vs45); memcpy(auVar6, &_vt2, 16); }{ V16 _vt3 = vectorMergeHighWord(in_vs35,in_vs33); memcpy(auVar5, &_vt3, 16); }{ V16 _vt4 = vectorNegativeMultiplySubtractFloatingPoint(auVar2,auVar4,in_vs43); memcpy(auVar3, &_vt4, 16); }
  vectorMergeHighWord(auVar5,auVar6);{ V16 _vt5 = vectorMultiplyAddFloatingPoint(auVar3,auVar2,auVar2); memcpy(auVar2, &_vt5, 16); }
  vectorMultiplyAddFloatingPoint(auVar2,auVar4,in_vs45);
  uVar1 = storeVectorElementWordIndexed(in_vs59,0,ZEXT48(&stack0x00000000) - 0x10);
  *(unsigned int *)(ZEXT48(&stack0x00000000) - 0x10) = uVar1;
  return (double)uStack_10;
}

