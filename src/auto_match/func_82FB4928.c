void fn_82FB4928(unsigned __int64 param_1,int param_2,int *param_3,unsigned int *param_4)

{
  int iVar1;
  
  iVar1 = (**(int (***)())(**(int **)(param_2 + 0x1c) + 0x18))();
  *param_3 = iVar1;
  if (iVar1 == 0) {
    param_3[1] = 0;
    *param_4 = *(unsigned int *)(param_2 + 0x48);
  }
  else {
    param_3[1] = *(int *)(iVar1 + 4);
    *param_4 = *(unsigned int *)(param_2 + 0x48);
  }
  return;
}

