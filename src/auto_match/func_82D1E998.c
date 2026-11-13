#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_10;
extern unsigned int stack0x00000000;
extern unsigned __int64 storeVectorElementWordIndexed();


/* WARNING: Removing unreachable block (ram,0x82d1e9e8) */

void fn_82D1E998(int param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  int in_r0;
  __int64 lVar4;
  unsigned char in_vs32 [16];
  unsigned char in_vs43 [16];
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned char auStack_10 [16];
  
  puVar1 = *(unsigned int **)(param_2 + 0x14);
  lVar4 = ZEXT48(&stack0x00000000) - 0x20;
  puVar3 = (unsigned int *)((unsigned int)(puVar1 + 4) & 0xfffffff0);
  uVar5 = *puVar3;
  uVar6 = puVar3[1];
  uVar7 = puVar3[2];
  uVar8 = puVar3[3];
  puVar3 = (unsigned int *)((unsigned int)(auStack_10 + in_r0) & 0xfffffff0);
  *puVar3 = uVar5;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  uVar2 = storeVectorElementWordIndexed(in_vs32,0,lVar4);
  *(unsigned int *)lVar4 = uVar2;
  for (; puVar1 != (unsigned int *)0x0; puVar1 = (unsigned int *)*puVar1) {
    lVar4 = ZEXT48(&stack0x00000000) - 0x20;
    uVar2 = storeVectorElementWordIndexed(in_vs43,0,lVar4);
    *(unsigned int *)lVar4 = uVar2;
  }
  puVar1 = (unsigned int *)(in_r0 + param_1 & 0xfffffff0);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1[2] = uVar7;
  puVar1[3] = uVar8;
  return;
}

