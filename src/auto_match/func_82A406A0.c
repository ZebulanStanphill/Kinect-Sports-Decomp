void fn_82A406A0(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x50);
  (*(int (**)())(*(int *)(param_1 + 0x50) + 8))(piVar1);
  if (*(int *)(param_1 + 0xa8) != 0) {
    (*(int (**)())(*(int *)(param_1 + 0x2c) + 0x14))(param_1 + 0x2c);
    (*(int (**)())(**(int **)(param_1 + 0xb0) + 0x3c))(*(int **)(param_1 + 0xb0),param_2);
    (*(int (**)())(*(int *)(param_1 + 0x2c) + 8))(param_1 + 0x2c);
    *(unsigned int *)(param_1 + 0xac) = 0;
    *(unsigned int *)(param_1 + 0xa8) =
         (param_2 != 1);
  }
  (*(int (**)())(*piVar1 + 0x14))(piVar1);
  return;
}

