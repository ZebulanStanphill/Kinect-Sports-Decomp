extern int fn_827B6E70();
extern int fn_827B7098();


void fn_827B8018(int param_1)

{
  fn_827B7098();
  *(unsigned int *)(param_1 + 0x1c) = 0;
  *(unsigned int *)(param_1 + 0x30) = 0;
  *(unsigned int *)(param_1 + 0x2c4) = 0;
  *(unsigned int *)(param_1 + 0x2c8) = 0;
  *(unsigned int *)(param_1 + 0x2cc) = 0;
  fn_827B6E70(param_1 + 0x710);
  return;
}

