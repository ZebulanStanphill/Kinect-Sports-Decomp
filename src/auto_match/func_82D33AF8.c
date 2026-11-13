typedef struct { unsigned __int64 lo, hi; } V16;
extern V16 vectorMaximumFloatingPoint();
extern V16 vectorMinimumFloatingPoint();


void fn_82D33AF8(int param_1,int param_2,unsigned int param_3,unsigned __int64 param_4)

{
  unsigned int *puVar1;
  int in_r0;
  int iVar2;
  int iVar3;
  unsigned char in_vs32 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs45 [16];
  unsigned int in_register_00010090;
  unsigned int in_register_00010094;
  unsigned int in_register_00010098;
  unsigned int in_vr9;
  unsigned int in_register_000100c0;
  unsigned int in_register_000100c4;
  unsigned int in_register_000100c8;
  unsigned int in_vr12;
  
  *(int *)(param_2 + 0x2c) = (int)param_4;
  if ((*(unsigned int *)(param_2 + 0x28) & 0x80000000) == 0) {
    iVar3 = *(int *)(param_2 + 0x20) * 0x30 + *(int *)(param_1 + 0x1c);
    iVar2 = *(int *)(param_2 + 0x24) * 0x30 + *(int *)(param_1 + 0x1c);
    *(unsigned int *)(iVar3 + 0x28) = *(unsigned int *)(iVar3 + 0x28) & 0x80000000 | param_3;
    *(unsigned int *)(iVar2 + 0x28) = *(unsigned int *)(iVar2 + 0x28) & 0x80000000 | param_3;
    fn_82D33AF8(param_1,iVar3,*(unsigned int *)(param_2 + 0x20),*(unsigned int *)(param_2 + 0x24));
    fn_82D33AF8(param_1,iVar2,*(unsigned int *)(param_2 + 0x24),param_4);
    vectorMinimumFloatingPoint(in_vs45,in_vs32);
    puVar1 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
    *puVar1 = in_register_000100c0;
    puVar1[1] = in_register_000100c4;
    puVar1[2] = in_register_000100c8;
    puVar1[3] = in_vr12;
    vectorMaximumFloatingPoint(in_vs42,in_vs43);
    puVar1 = (unsigned int *)(param_2 + 0x10U & 0xfffffff0);
    *puVar1 = in_register_00010090;
    puVar1[1] = in_register_00010094;
    puVar1[2] = in_register_00010098;
    puVar1[3] = in_vr9;
  }
  return;
}

