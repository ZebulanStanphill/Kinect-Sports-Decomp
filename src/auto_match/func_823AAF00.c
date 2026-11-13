extern unsigned int ltcg_pool_0_0f;


void fn_823AAF00(int param_1,unsigned __int64 param_2,int param_3,unsigned int param_4)

{
  unsigned int uVar1;
  
  uVar1 = ltcg_pool_0_0f;
  *(unsigned int *)((param_3 + 0x19) * 4 + param_1) = param_4;
  *(unsigned int *)(param_1 + 0x58) = uVar1;
  *(int *)(param_1 + 0xc) = param_3;
  *(unsigned int *)(param_1 + 0x14) = param_4;
  *(unsigned int *)(param_1 + 4) = 1;
  *(unsigned int *)(param_1 + 0x20) = 0;
  *(unsigned int *)(param_1 + 0x30) = 0;
  *(unsigned int *)(param_1 + 0x34) = 0;
  *(unsigned int *)(param_1 + 0x38) = 0;
  *(unsigned int *)(param_1 + 0x40) = 0;
  *(unsigned int *)(param_1 + 0x48) = 0;
  *(unsigned int *)(param_1 + 0x50) = 0;
  *(unsigned int *)(param_1 + 0x3c) = 8;
  *(unsigned int *)(param_1 + 0x44) = 8;
  *(unsigned int *)(param_1 + 0x4c) = 8;
  *(unsigned int *)(param_1 + 0x54) = 9;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  *(unsigned int *)((param_3 + 0x1b) * 4 + param_1) = param_4 ^ 1;
  return;
}

