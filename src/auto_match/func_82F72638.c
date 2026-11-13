void fn_82F72638(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  
  uVar1 = (**(int (***)())(**(int **)(param_1 + 4) + 8))();
  if ((uVar1 & 0xffffffff) < (param_3 & 0xffffffff)) {
    (**(int (***)())(**(int **)(param_1 + 8) + 8))(*(int **)(param_1 + 8),uVar1,param_3);
  }
  return;
}

