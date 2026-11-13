#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82529508();
extern int fn_825296E8();
extern int fn_82529A38();
extern int fn_82587AC0();
extern unsigned int stack0x00000000;
extern unsigned __int64 storeVectorElementWordIndexed();


void fn_8235FDE8(void)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  int iVar5;
  unsigned int *puVar6;
  __int64 lVar7;
  unsigned char in_vs32 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  
  uVar3 = ZEXT48(&stack0x00000000);
  fn_82529508(uVar3 - 0x5f0);
  uVar1 = storeVectorElementWordIndexed(in_vs32,0,uVar3 - 0x558);
  *(unsigned int *)(uVar3 - 0x558) = uVar1;
  storeVectorElementWordIndexed(in_vs45,uVar3 - 0x558,4);
  storeVectorElementWordIndexed(in_vs44,uVar3 - 0x558,8);
  fn_825296E8(uVar3 - 0x5f0,uVar3 + 0x40);
  uVar4 = fn_82587AC0(uVar3 - 0x5a5);
  iVar5 = fn_82529A38(uVar4,uVar3 - 0x5f0,0);
  puVar6 = (unsigned int *)(iVar5 + 0x1dc);
  lVar7 = 2;
  do {
    puVar2 = puVar6 + 1;
    puVar6 = puVar6 + 1;
    *puVar6 = *puVar2 | 2;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return;
}

