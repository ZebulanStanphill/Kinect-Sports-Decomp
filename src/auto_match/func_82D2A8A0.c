#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int stack0x00000000;
extern unsigned __int64 storeVectorElementWordIndexed();


/* WARNING: Removing unreachable block (ram,0x82d2a91c) */

void fn_82D2A8A0(int param_1,unsigned __int64 param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  __int64 lVar3;
  __int64 lVar4;
  unsigned char in_vs43 [16];
  unsigned char in_vs44 [16];
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  
  lVar3 = ZEXT48(&stack0x00000000) - 0x30;
  lVar4 = 2;
  puVar1 = (unsigned int *)(*(int *)(*(int *)(param_1 + 4) + 8) + 0x10U & 0xfffffff0);
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  puVar2 = (unsigned int *)(in_r0 + param_3 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  *(unsigned int *)(param_3 + 0xc) = 0x3f000000;
  uVar5 = storeVectorElementWordIndexed(in_vs43,0,lVar3);
  *(unsigned int *)lVar3 = uVar5;
  do {
    lVar3 = ZEXT48(&stack0x00000000) - 0x30;
    uVar5 = storeVectorElementWordIndexed(in_vs44,0,lVar3);
    *(unsigned int *)lVar3 = uVar5;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return;
}

