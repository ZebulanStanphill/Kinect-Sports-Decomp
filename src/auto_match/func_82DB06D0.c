extern int fn_82DB05D8();


void fn_82DB06D0(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(*(int *)((int)*(char *)(*(int *)(param_1 + 0x10) + 0x10) +
                                       *(int *)(param_1 + 0x10) + 0xcc) + 0x18) + 8);
  (*(int (**)())(*piVar1 + 0x28))(piVar1,param_1);
  fn_82DB05D8(param_1);
  return;
}

