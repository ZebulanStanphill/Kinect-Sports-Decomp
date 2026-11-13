extern int fn_82CE3F80();
extern int fn_82CE3FE8();
extern int fn_82DAF480();


unsigned __int64 fn_82D81720(unsigned __int64 param_1,int param_2)

{
  int *piVar1;
  unsigned __int64 uVar2;
  
  fn_82CE3F80();
  *(int *)(param_2 + 0xbc) = *(int *)(param_2 + 0xbc) + 1;
  fn_82DAF480(param_2);
  uVar2 = (**(int (***)())(**(int **)(param_2 + 8) + 0xc))(param_1);
  piVar1 = *(int **)(param_2 + 0x5c);
  if (piVar1 != (int *)0x0) {
    if (*(char *)(param_2 + 0x60) == '\0') {
      (**(int (***)())(*piVar1 + 0x14))(piVar1,0);
    }
    else {
      (**(int (***)())(*piVar1 + 0xc))(piVar1,0,0);
    }
  }
  *(int *)(param_2 + 0xbc) = *(int *)(param_2 + 0xbc) + -1;
  fn_82CE3FE8();
  return uVar2;
}

