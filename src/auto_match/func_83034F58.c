extern __int64 fn_83001F78();


unsigned __int64 fn_83034F58(int param_1)

{
  unsigned __int64 uVar1;
  
  uVar1 = 1;
  if (*(unsigned int *)(param_1 + 4) != 0) {
    uVar1 = fn_83001F78(*(int *)(param_1 + 4));
    *(unsigned int *)(param_1 + 4) = 0;
  }
  return uVar1;
}

