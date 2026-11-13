void fn_82A43D00(int *param_1)

{
  (*(int (**)())(param_1[1] + 0x5c))(param_1 + 1);
  if (param_1[2] != 2) {
    *(int *)(param_1[0xd] + 0x28) = *(int *)(param_1[0xd] + 0x28) - param_1[0xb];
  }
  (*(int (**)())(*param_1 + 0x78))(param_1,1);
  return;
}

