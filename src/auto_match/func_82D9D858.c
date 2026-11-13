typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_830A5FF8();
extern unsigned int iStack_2c;
extern unsigned int uStack_30;
extern V16 vectorSubtractFloatingPoint();


void fn_82D9D858(unsigned __int64 param_1,int *param_2,unsigned int *param_3,unsigned __int64 param_4,
                  int param_5,int param_6,unsigned __int64 param_7)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int in_r0;
  unsigned char in_vs32 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int in_register_000100c0;
  unsigned int in_register_000100c4;
  unsigned int in_register_000100c8;
  unsigned int in_vr12;
  unsigned char auStack_50 [16];
  unsigned char auStack_40 [16];
  unsigned int uStack_30;
  int iStack_2c;
  
  iVar1 = *param_2;
  iStack_2c = *(int *)(param_6 + 0x4c);
  *param_2 = iVar1 + 4;
  puVar2 = (unsigned int *)*param_3;
  puVar3 = (unsigned int *)((*(int *)(iVar1 + 4) + 2) * 0x10 + param_5 & 0xfffffff0);
  uVar4 = *puVar3;
  uVar5 = puVar3[1];
  uVar6 = puVar3[2];
  uVar7 = puVar3[3];
  *param_3 = puVar2 + 4;
  iVar1 = *(int *)(param_5 + 0xb8);
  puVar3 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar3 = uVar4;
  puVar3[1] = uVar5;
  puVar3[2] = uVar6;
  puVar3[3] = uVar7;
  vectorSubtractFloatingPoint(in_vs32,in_vs45);
  iStack_2c = iVar1 * 8 + iStack_2c;
  puVar3 = (unsigned int *)((unsigned int)(auStack_50 + in_r0) & 0xfffffff0);
  *puVar3 = in_register_000100c0;
  puVar3[1] = in_register_000100c4;
  puVar3[2] = in_register_000100c8;
  puVar3[3] = in_vr12;
  uStack_30 = *puVar2;
  fn_830A5FF8(auStack_50,param_6,param_7);
  *(int *)(param_5 + 0xb8) = *(int *)(param_5 + 0xb8) + 1;
  return;
}

