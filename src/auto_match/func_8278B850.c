unsigned __int64 fn_8278B850(int param_1,int param_2)

{
  int iVar1;
  
  if (((((*(unsigned short *)(param_1 + 0x2a) >> 2 & 1) != 0) &&
       ((*(unsigned short *)(param_2 + 0x2a) >> 2 & 1) != 0)) &&
      (iVar1 = thunk_FUN_82f65ac0(((unsigned __int64)*(unsigned int *)(param_1 + 8) & 0xfffffffc) + 8,
                                  ((unsigned __int64)*(unsigned int *)(param_2 + 8) & 0xfffffffc) + 8), iVar1 == 0)
      ) || ((((*(unsigned short *)(param_1 + 0x2a) >> 0xb & 1) != 0 &&
             ((*(unsigned short *)(param_2 + 0x2a) >> 0xb & 1) != 0)) &&
            (*(int *)(param_1 + 0x1c) == *(int *)(param_2 + 0x1c))))) {
    if ((((*(unsigned char *)(param_1 + 0x28) ^ *(unsigned char *)(param_2 + 0x28)) & 1) == 0) &&
       (((*(unsigned char *)(param_1 + 0x28) ^ *(unsigned char *)(param_2 + 0x28)) & 2) == 0)) {
      return 1;
    }
  }
  return 0;
}

