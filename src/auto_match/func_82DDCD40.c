typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int fStack_8c;
extern unsigned int fStack_90;
extern int fn_82DDC940();
extern unsigned int stack0x00000000;
extern unsigned int uStack_40;
extern unsigned __int64 storeVectorElementWordIndexed();
extern V16 vectorSubtractFloatingPoint();


void fn_82DDCD40(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4,
                  float *param_5)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned __int64 uVar3;
  unsigned char in_vs32 [16];
  unsigned char in_vs36 [16];
  unsigned char in_vs38 [16];
  unsigned char in_vs40 [16];
  unsigned char in_vs43 [16];
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int in_register_000100c0;
  unsigned int in_register_000100c4;
  unsigned int in_register_000100c8;
  unsigned int in_vr12;
  unsigned int uVar9;
  unsigned int uVar10;
  float fStack_90;
  float fStack_8c;
  unsigned char auStack_80 [16];
  unsigned char auStack_70 [16];
  unsigned char auStack_60 [16];
  unsigned char auStack_50 [16];
  unsigned int uStack_40;
  
  uVar3 = ZEXT48(&stack0x00000000);
  puVar1 = (unsigned int *)((unsigned int)(auStack_80 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_000100c0;
  puVar1[1] = in_register_000100c4;
  puVar1[2] = in_register_000100c8;
  puVar1[3] = in_vr12;
  fn_82DDC940(param_1,param_2,uVar3 - 0x70);
  fn_82DDC940(param_1,uVar3 - 0x80,param_4);
  puVar1 = (unsigned int *)((unsigned int)(auStack_70 + in_r0) & 0xfffffff0);
  uVar4 = *puVar1;
  uVar5 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  vectorSubtractFloatingPoint(in_vs32,in_vs43);
  uVar6 = storeVectorElementWordIndexed(in_vs40,0,uVar3 - 0x90);
  *(unsigned int *)(uVar3 - 0x90) = uVar6;
  vectorSubtractFloatingPoint(in_vs38,in_vs43);
  uVar6 = storeVectorElementWordIndexed(in_vs36,0,uVar3 - 0x8c);
  *(unsigned int *)(uVar3 - 0x8c) = uVar6;
  if (fStack_90 < fStack_8c) {
    *param_5 = fStack_8c;
  }
  else {
    puVar1 = (unsigned int *)(in_r0 + param_4 & 0xfffffff0);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    puVar1[2] = uVar7;
    puVar1[3] = uVar8;
    puVar1 = (unsigned int *)((unsigned int)(auStack_60 + in_r0) & 0xfffffff0);
    uVar6 = puVar1[1];
    uVar4 = puVar1[2];
    uVar5 = puVar1[3];
    puVar2 = (unsigned int *)((unsigned int)(auStack_50 + in_r0) & 0xfffffff0);
    uVar7 = *puVar2;
    uVar8 = puVar2[1];
    uVar9 = puVar2[2];
    uVar10 = puVar2[3];
    puVar2 = (unsigned int *)(param_4 + 0x10U & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar6;
    puVar2[2] = uVar4;
    puVar2[3] = uVar5;
    puVar1 = (unsigned int *)(param_4 + 0x20U & 0xfffffff0);
    *puVar1 = uVar7;
    puVar1[1] = uVar8;
    puVar1[2] = uVar9;
    puVar1[3] = uVar10;
    *(unsigned int *)(param_4 + 0x30) = uStack_40;
    *param_5 = fStack_90;
  }
  return;
}

