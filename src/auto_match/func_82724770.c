extern int fn_8268C2D0();


int fn_82724770(int param_1,int param_2)

{
  unsigned int iVar1;
  
  fn_8268C2D0();
  iVar1 = *(int *)(param_2 + 4);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  }
  *(unsigned int *)(param_1 + 4) = *(unsigned int *)(param_2 + 4);
  return param_1;
}

