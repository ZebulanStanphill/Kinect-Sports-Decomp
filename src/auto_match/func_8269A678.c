extern int fn_826A98D8();


unsigned __int64 fn_8269A678(int param_1,int param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  
  if ((unsigned __int64)*(unsigned int *)(param_1 + 4) != 0) {
    return (unsigned __int64)*(unsigned int *)(param_1 + 4);
  }
  if ((*(int *)(param_2 + 0x68) == 0) || (*(int *)(*(int *)(param_1 + 0xc) + 0x10) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar1 = (**(int (***)())(**(int **)(param_2 + 0x68) + 0x5c))();
    uVar2 = fn_826A98D8(uVar1,(int *)(param_1 + 0xc),0);
  }
  return uVar2;
}

