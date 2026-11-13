typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_8253D4E8();
extern int fn_82601A00();
extern int fn_82602058();
extern int fn_826267D0();
extern V16 vectorAddFloatingPoint();


void fn_826022E0(int param_1,int param_2,__int64 param_3)

{
  unsigned int *puVar1;
  int in_r0;
  unsigned char in_vs32 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned char auStack_40 [16];
  unsigned char auStack_30 [48];
  
  fn_82602058(param_1,auStack_40);
  puVar1 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  puVar1 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  puVar1 = (unsigned int *)(param_2 + 0x20U & 0xfffffff0);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  fn_82601A00(param_1,auStack_40,auStack_30);
  puVar1 = (unsigned int *)((unsigned int)(auStack_30 + in_r0) & 0xfffffff0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  puVar1 = (unsigned int *)(in_r0 + param_2 + 0x40 & 0xfffffff0);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  vectorAddFloatingPoint(in_vs32,in_vs45);
  puVar1 = (unsigned int *)(in_r0 + param_2 + 0x40 & 0xfffffff0);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  *(unsigned int *)(param_2 + 0x10) = *(unsigned int *)(param_1 + 0x94);
  *(unsigned int *)(param_2 + 0x14) = *(unsigned int *)(param_1 + 0x98);
  *(unsigned int *)(param_2 + 0x18) = *(unsigned int *)(param_1 + 0x9c);
  if (*(int *)(param_1 + 0x254) == 7) {
    fn_826267D0(param_2,*(unsigned int *)(param_1 + 0x294));
    fn_8253D4E8(param_3 + 0x1f0,param_3,*(unsigned int *)(param_2 + 0x30),0);
  }
  return;
}

