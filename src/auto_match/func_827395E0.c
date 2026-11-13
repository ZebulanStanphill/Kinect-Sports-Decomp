extern int fn_826B14D8();


void fn_827395E0(int param_1,int param_2)

{
  unsigned int uVar1;
  
  *(unsigned __int64 *)(param_1 + 0x30) = 0;
  *(unsigned int *)(param_1 + 0x38) = 0;
  *(unsigned int *)(param_1 + 0x3c) = 0;
  *(unsigned int *)(param_1 + 0x40) = 0;
  *(unsigned __int64 *)(param_1 + 0x48) = 0;
  *(unsigned int *)(param_1 + 0x50) = 0;
  *(unsigned int *)(param_1 + 0x54) = 0;
  *(unsigned int *)(param_1 + 0x58) = 0;
  *(unsigned int *)(param_1 + 0x5c) = 0;
  uVar1 = fn_826B14D8(*(unsigned int *)(param_2 + 0x78),0x14);
  (*(int (**)())(*(int *)(param_1 + 0x10) + 0x34))(param_1 + 0x10,param_2 + 0x78,uVar1);
  return;
}

