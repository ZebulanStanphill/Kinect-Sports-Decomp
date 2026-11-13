typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int fStack_10;
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000000;
extern unsigned __int64 storeVectorElementWordIndexed();
extern V16 vectorSubtractFloatingPoint();


void fn_82D1BD60(int *param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,int param_5)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned char in_vs37 [16];
  unsigned char in_vs39 [16];
  unsigned char in_vs40 [16];
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  float fStack_10;
  
  puVar2 = (unsigned int *)(in_r0 + param_3 * 0x10 + *param_1 & 0xfffffff0);
  uVar3 = *puVar2;
  uVar4 = puVar2[1];
  uVar5 = puVar2[2];
  uVar6 = puVar2[3];
  vectorSubtractFloatingPoint(in_vs39,in_vs40);
  puVar2 = (unsigned int *)(in_r0 + param_5 & 0xfffffff0);
  *puVar2 = uVar3;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  uVar1 = storeVectorElementWordIndexed(in_vs37,0,ZEXT48(&stack0x00000000) - 0x10);
  *(unsigned int *)(ZEXT48(&stack0x00000000) - 0x10) = uVar1;
  if (fStack_10 <= lbl_821AAD20) {
    return;
  }
  puVar2 = (unsigned int *)(in_r0 + param_5 & 0xfffffff0);
  *puVar2 = uVar3;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  return;
}

