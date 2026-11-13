int fn_82A2C770(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned int uVar1;
  
  if (((((*(unsigned int *)(param_1 + 0x24) & param_4) == 0) &&
       ((*(unsigned int *)(param_1 + 0x24) & param_2 & 0xfff) == 0)) && (param_3 >= 0x1000)) &&
     ((((param_3 + param_4 ^ param_4 + 0xfff) & 0xfffff000) != 0 &&
      (uVar1 = MmQueryAddressProtect(param_2), (uVar1 & 0x600) == 0)))) {
    return 0;
  }
  return 1;
}

