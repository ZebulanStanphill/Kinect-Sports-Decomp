extern int fn_82670230();
extern int fn_82689570();


void fn_826899B8(unsigned int param_1,unsigned __int64 param_2,int param_3)

{
  int *piVar1;
  
  fn_82689570();
  piVar1 = *(int **)(param_1 + 4);
  if (((piVar1 != (int *)0x0) && (param_3 == 1)) && (*(int *)(param_1 + 0xc) == 0)) {
    (**(int (***)())(*piVar1 + 0x30))(piVar1,-(unsigned int)(param_1 != 8) & param_1);
    if (*(int *)(param_1 + 4) != 0) {
      fn_82670230();
    }
    *(unsigned int *)(param_1 + 4) = 0;
  }
  return;
}

