#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82CECE68();
extern unsigned int stack0x00000000;
extern unsigned int uStack_10;
extern unsigned int uStack_c;
extern unsigned __int64 storeVectorElementWordIndexed();


void fn_82D9D718(void)

{
  unsigned int uVar1;
  __int64 lVar2;
  __int64 lVar3;
  unsigned char in_vs42 [16];
  unsigned char in_vs44 [16];
  unsigned int uStack_10;
  unsigned int uStack_c;
  
  lVar3 = ZEXT48(&stack0x00000000) - 0xc;
  lVar2 = ZEXT48(&stack0x00000000) - 0x10;
  uVar1 = storeVectorElementWordIndexed(in_vs44,0,lVar3);
  *(unsigned int *)lVar3 = uVar1;
  uVar1 = storeVectorElementWordIndexed(in_vs42,0,lVar2);
  *(unsigned int *)lVar2 = uVar1;
  fn_82CECE68((double)uStack_c,(double)uStack_10);
  return;
}

