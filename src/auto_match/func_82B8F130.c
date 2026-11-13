void fn_82B8F130(unsigned __int64 param_1,int param_2,int param_3)

{
  int *piVar1;
  
  for (piVar1 = (int *)(*(int *)(param_2 + 4) + 0xc); *piVar1 != param_2;
      piVar1 = (int *)(*piVar1 + 8)) {
  }
  *piVar1 = *(int *)(param_2 + 8);
  *(int *)(param_2 + 4) = param_3;
  *(unsigned int *)(param_2 + 8) = *(unsigned int *)(param_3 + 0xc);
  *(int *)(param_3 + 0xc) = param_2;
  return;
}

