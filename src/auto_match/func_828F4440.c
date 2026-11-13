extern int fn_828F9D68();
extern int fn_82920528();


int fn_828F4440(int param_1)

{
  fn_828F9D68();
  fn_82920528(param_1 + 0x3c);
  *(unsigned int *)(param_1 + 0x38) = 0;
  *(unsigned int *)(param_1 + 0x48) = 0;
  *(unsigned int *)(param_1 + 0x54) = 0;
  *(unsigned int *)(param_1 + 0x58) = 0;
  *(unsigned int *)(param_1 + 0x4c) = 0;
  *(unsigned int *)(param_1 + 0x50) = 0;
  *(unsigned int *)(param_1 + 0x5c) = 0;
  return param_1;
}

