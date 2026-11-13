extern int fn_82CE3F80();
extern int fn_82CE3FE8();


unsigned __int64 fn_82D817F0(unsigned __int64 param_1,int param_2)

{
  unsigned __int64 uVar1;
  
  fn_82CE3F80();
  *(int *)(param_2 + 0xbc) = *(int *)(param_2 + 0xbc) + 1;
  uVar1 = (**(int (***)())(**(int **)(param_2 + 8) + 0x10))(param_1);
  *(int *)(param_2 + 0xbc) = *(int *)(param_2 + 0xbc) + -1;
  fn_82CE3FE8();
  return uVar1;
}

