extern int fn_8269A678();
extern int fn_826A7398();


__int64 fn_826953D8(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int iVar2;
  
  if (*(unsigned int *)(param_1 + 4) != 0) {
    uVar1 = fn_826A7398(param_2);
    iVar2 = fn_8269A678(*(unsigned int *)(param_1 + 4),uVar1);
    if (iVar2 != 0) {
      return (unsigned __int64)*(unsigned int *)(param_1 + 4) + 0xc;
    }
  }
  return (unsigned __int64)*(unsigned int *)(param_2 + 0x78) + 8;
}

