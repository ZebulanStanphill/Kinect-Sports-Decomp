typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int fStack_10;
extern unsigned int stack0x00000000;
extern unsigned __int64 storeVectorElementWordIndexed();
extern V16 vectorSubtractFloatingPoint();


unsigned __int64 fn_82DD7830(int param_1,int param_2,int param_3)

{
  unsigned char bVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int in_r0;
  unsigned char in_vs32 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  float fStack_10;
  
  bVar1 = *(unsigned char *)(param_2 + 4);
  puVar2 = (unsigned int *)((unsigned int)*(unsigned char *)(param_2 + 5) + param_1 & 0xfffffff0);
  uVar4 = *puVar2;
  uVar5 = puVar2[1];
  uVar7 = puVar2[2];
  uVar8 = puVar2[3];
  vectorSubtractFloatingPoint(in_vs45,in_vs32);
  uVar6 = storeVectorElementWordIndexed(in_vs44,0,ZEXT48(&stack0x00000000) - 0x10);
  *(unsigned int *)(ZEXT48(&stack0x00000000) - 0x10) = uVar6;
  if (*(float *)(param_1 + 0x11c) < fStack_10) {
    return 1;
  }
  puVar2 = (unsigned int *)(param_3 + 0x10U & 0xfffffff0);
  *puVar2 = uVar4;
  puVar2[1] = uVar5;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  puVar2 = (unsigned int *)(param_1 + 0x100U & 0xfffffff0);
  uVar6 = puVar2[1];
  uVar4 = puVar2[2];
  uVar5 = puVar2[3];
  puVar3 = (unsigned int *)(param_3 + 0x20U & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar6;
  puVar3[2] = uVar4;
  puVar3[3] = uVar5;
  puVar2 = (unsigned int *)(in_r0 + (unsigned int)bVar1 + param_1 & 0xfffffff0);
  uVar6 = puVar2[1];
  uVar4 = puVar2[2];
  uVar5 = puVar2[3];
  puVar3 = (unsigned int *)(in_r0 + param_3 & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar6;
  puVar3[2] = uVar4;
  puVar3[3] = uVar5;
  return 0;
}

