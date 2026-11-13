extern __int64 fn_8269A678();
extern __int64 fn_826A7398();


unsigned __int64 fn_82695370(char *param_1,unsigned int param_2)

{
  unsigned __int64 uVar1;
  
  if (((*param_1 == '\a') && ((param_2 & 0xffffffff) != 0)) && (*(unsigned int *)(param_1 + 4) != 0)) {
    uVar1 = fn_826A7398(param_2);
    uVar1 = fn_8269A678(*(unsigned int *)(param_1 + 4),uVar1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

