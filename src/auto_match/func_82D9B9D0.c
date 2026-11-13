typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int stack0x00000000;
extern unsigned int uStack_10;
extern unsigned __int64 storeVectorElementWordIndexed();
extern V16 vectorAddFloatingPoint();
extern V16 vectorMergeHighWord();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82D9B9D0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,float *param_4,float *param_5)

{
  unsigned int uVar1;
  __int64 lVar2;
  __int64 lVar3;
  unsigned char in_vs32 [16];
  unsigned char in_vs34 [16];
  unsigned char in_vs35 [16];
  unsigned char in_vs38 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs50 [16];
  unsigned char auVar4 [16];
  unsigned char in_vs55 [16];
  unsigned char in_vs56 [16];
  unsigned char in_vs57 [16];
  unsigned char auVar5 [16];
  unsigned char in_vs63 [16];
  unsigned int uStack_10;
  
  lVar2 = ZEXT48(&stack0x00000000) - 0x10;
  vectorSubtractFloatingPoint(in_vs32,in_vs42);
  lVar3 = ZEXT48(&stack0x00000000) - 0x10;
  vectorSubtractFloatingPoint(in_vs34,in_vs35);{ V16 _vt0 = vectorAddFloatingPoint(in_vs63,in_vs38); memcpy(auVar5, &_vt0, 16); }
  uVar1 = storeVectorElementWordIndexed(auVar5,0,lVar2);
  *(unsigned int *)lVar2 = uVar1;
  *param_4 = uStack_10;{ V16 _vt1 = vectorMergeHighWord(in_vs55,in_vs32); memcpy(auVar5, &_vt1, 16); }{ V16 _vt2 = vectorMergeHighWord(in_vs57,in_vs56); memcpy(auVar4, &_vt2, 16); }
  vectorMergeHighWord(auVar4,auVar5);
  uVar1 = storeVectorElementWordIndexed(in_vs50,0,lVar3);
  *(unsigned int *)lVar3 = uVar1;
  *param_5 = *(float *)(param_1 + 0xcc) + uStack_10;
  return;
}

