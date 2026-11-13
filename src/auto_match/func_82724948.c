extern int fn_8267C498();
extern int fn_8268BA10();


int fn_82724948(int param_1,int param_2)

{
  int iVar1;
  
  fn_8268BA10();
  iVar1 = *(int *)(param_2 + 4);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  }
  if (*(unsigned int *)(param_1 + 4) != 0) {
    fn_8267C498(*(unsigned int *)(param_1 + 4));
  }
  *(unsigned int *)(param_1 + 4) = *(unsigned int *)(param_2 + 4);
  return param_1;
}

