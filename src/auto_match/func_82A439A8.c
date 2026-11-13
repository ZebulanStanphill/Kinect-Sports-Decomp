int fn_82A439A8(int param_1,unsigned int param_2)

{
  int lVar1;
  
  (*(int (**)())(*(int *)(*(int *)(param_1 + 0x34) + 0x2c) + 8))(*(int *)(param_1 + 0x34) + 0x2c);
  lVar1 = 0;
  if ((param_2 != *(unsigned int *)(param_1 + 0xd4)) &&
     (lVar1 = (*(int (**)())(**(int **)(param_1 + 0x90) + 0x30))(*(int **)(param_1 + 0x90),param_2),
     lVar1 >= 0)) {
    *(int *)(param_1 + 0xd4) = param_2;
  }
  (*(int (**)())(*(int *)(*(int *)(param_1 + 0x34) + 0x2c) + 0x14))(*(int *)(param_1 + 0x34) + 0x2c);
  return lVar1;
}

