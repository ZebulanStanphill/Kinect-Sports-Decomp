#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int stack0x00000000;
extern unsigned int uStack_10;
extern unsigned int uStack_c;
extern unsigned __int64 storeVectorElementWordIndexed();


double fn_82DBC6D8(double param_1)

{
  unsigned int uVar1;
  __int64 lVar2;
  __int64 lVar3;
  unsigned char in_vs43 [16];
  unsigned char in_vs45 [16];
  unsigned int uStack_10;
  unsigned int uStack_c;
  
  lVar2 = ZEXT48(&stack0x00000000) - 0xc;
  lVar3 = ZEXT48(&stack0x00000000) - 0x10;
  uVar1 = storeVectorElementWordIndexed(in_vs45,0,lVar3);
  *(unsigned int *)lVar3 = uVar1;
  uVar1 = storeVectorElementWordIndexed(in_vs43,0,lVar2);
  *(unsigned int *)lVar2 = uVar1;
  return (double)(float)((double)(float)((double)uStack_c * param_1) * param_1 + (double)uStack_10);
}

