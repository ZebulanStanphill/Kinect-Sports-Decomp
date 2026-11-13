extern int fn_82A47C90();


int fn_82A48C80(int param_1,unsigned int param_2)

{
  fn_82A47C90();
  fn_82A47C90(param_1 + 0x7c);
  *(unsigned int *)(param_1 + 0xf8) = param_2;
  *(unsigned int *)(param_1 + 0xfc) = 0;
  *(unsigned int *)(param_1 + 0x100) = 0;
  *(unsigned int *)(param_1 + 0x104) = 0;
  return param_1;
}

