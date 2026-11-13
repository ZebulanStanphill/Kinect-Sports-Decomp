extern int fn_822B1A68();


void fn_8244C208(int param_1)

{
  int *piVar1;
  
  fn_822B1A68(*(unsigned int *)(param_1 + 0x3c));
  piVar1 = *(int **)(*(int *)(param_1 + 0x3c) + 8);
  (*(int (**)())(*piVar1 + 0x14))(piVar1,9);
  piVar1 = *(int **)(*(int *)(param_1 + 0x3c) + 8);
  (*(int (**)())(*piVar1 + 0x14))(piVar1,0xe);
  return;
}

