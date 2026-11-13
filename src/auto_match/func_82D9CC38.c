typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int stack0x00000000;
extern unsigned int uStack_10;
extern unsigned __int64 storeVectorElementWordIndexed();
extern V16 vectorAddFloatingPoint();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82D9CC38(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int *param_4,
                  unsigned int *param_5)

{
  unsigned int uVar1;
  unsigned char in_vs32 [16];
  unsigned char in_vs34 [16];
  unsigned char in_vs35 [16];
  unsigned char in_vs38 [16];
  unsigned char in_vs42 [16];
  unsigned char auVar2 [16];
  unsigned char in_vs63 [16];
  unsigned int uStack_10;
  
  vectorSubtractFloatingPoint(in_vs32,in_vs42);
  vectorSubtractFloatingPoint(in_vs34,in_vs35);{ V16 _vt0 = vectorAddFloatingPoint(in_vs63,in_vs38); memcpy(auVar2, &_vt0, 16); }
  uVar1 = storeVectorElementWordIndexed(auVar2,0,ZEXT48(&stack0x00000000) - 0x10);
  *(unsigned int *)(ZEXT48(&stack0x00000000) - 0x10) = uVar1;
  *param_4 = uStack_10;
  *param_5 = *(unsigned int *)(param_1 + 0xcc);
  return;
}

