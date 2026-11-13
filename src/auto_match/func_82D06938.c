#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_10;
extern unsigned int *auStack_20;
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int stack0x00000000;
extern unsigned int uStack_50;
extern unsigned __int64 storeVectorElementWordIndexed();


void fn_82D06938(unsigned int *param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  __int64 lVar3;
  __int64 lVar4;
  unsigned char in_vs44 [16];
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  unsigned int uVar18;
  unsigned int uVar19;
  unsigned int uStack_50;
  unsigned char auStack_40 [16];
  unsigned char auStack_30 [16];
  unsigned char auStack_20 [16];
  unsigned char auStack_10 [16];
  
  puVar1 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
  uVar5 = *puVar1;
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  puVar1 = (unsigned int *)(param_2 + 0x10U & 0xfffffff0);
  uVar17 = puVar1[1];
  uVar18 = puVar1[2];
  uVar19 = puVar1[3];
  puVar2 = (unsigned int *)(param_2 + 0x20U & 0xfffffff0);
  uVar13 = *puVar2;
  uVar14 = puVar2[1];
  uVar15 = puVar2[2];
  uVar16 = puVar2[3];
  puVar2 = (unsigned int *)(param_2 + 0x30U & 0xfffffff0);
  uVar9 = *puVar2;
  uVar10 = puVar2[1];
  uVar11 = puVar2[2];
  uVar12 = puVar2[3];
  puVar2 = (unsigned int *)((unsigned int)(auStack_30 + in_r0) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar17;
  puVar2[2] = uVar18;
  puVar2[3] = uVar19;
  puVar1 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1[2] = uVar7;
  puVar1[3] = uVar8;
  lVar3 = 4;
  puVar1 = (unsigned int *)((unsigned int)(auStack_20 + in_r0) & 0xfffffff0);
  *puVar1 = uVar13;
  puVar1[1] = uVar14;
  puVar1[2] = uVar15;
  puVar1[3] = uVar16;
  puVar1 = (unsigned int *)((unsigned int)(auStack_10 + in_r0) & 0xfffffff0);
  *puVar1 = uVar9;
  puVar1[1] = uVar10;
  puVar1[2] = uVar11;
  puVar1[3] = uVar12;
  do {
    lVar4 = 4;
    do {
      uVar5 = storeVectorElementWordIndexed(in_vs44,0,ZEXT48(&stack0x00000000) - 0x50);
      *(unsigned int *)(ZEXT48(&stack0x00000000) - 0x50) = uVar5;
      *param_1 = uStack_50;
      param_1 = param_1 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}

