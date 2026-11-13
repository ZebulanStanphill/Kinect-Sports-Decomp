void fn_82C0DA20(int *param_1,unsigned int param_2)

{
  (*(int (**)())(*param_1 + 0xc))();
  param_1[0x38] = param_1[0x38] & ~param_2;
  (*(int (**)())(*param_1 + 0x14))(param_1);
  return;
}

