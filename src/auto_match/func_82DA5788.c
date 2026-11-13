typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int stack0x00000000;
extern unsigned int *uStack_10;
extern unsigned __int64 storeVectorElementWordIndexed();
extern V16 vectorAddFloatingPoint();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82DA5788(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,float *param_4,float *param_5)

{
  unsigned int uVar1;
  __int64 lVar2;
  __int64 lVar3;
  unsigned char in_vs32 [16];
  unsigned char in_vs34 [16];
  unsigned char in_vs35 [16];
  unsigned char in_vs38 [16];
  unsigned char in_vs42 [16];
  unsigned char auVar4 [16];
  unsigned char in_vs62 [16];
  unsigned char in_vs63 [16];
  unsigned int uStack_10;
  
  lVar3 = ZEXT48(&stack0x00000000) - 0x10;
  lVar2 = ZEXT48(&stack0x00000000) - 0x10;
  vectorSubtractFloatingPoint(in_vs32,in_vs42);
  vectorSubtractFloatingPoint(in_vs34,in_vs35);{ V16 _vt0 = vectorAddFloatingPoint(in_vs63,in_vs38); memcpy(auVar4, &_vt0, 16); }
  uVar1 = storeVectorElementWordIndexed(auVar4,0,lVar3);
  *(unsigned int *)lVar3 = uVar1;
  *param_4 = uStack_10;
  uVar1 = storeVectorElementWordIndexed(in_vs62,0,lVar2);
  *(unsigned int *)lVar2 = uVar1;
  *param_5 = *(float *)(param_1 + 0xc0) * uStack_10 + *(float *)(param_1 + 0xcc);
  return;
}

