void fn_82C0D9B8(int *param_1,unsigned int param_2)

{
  (*(int (**)())(*param_1 + 0xc))();
  param_1[0x37] = param_1[0x37] & ~param_2;
  (*(int (**)())(*param_1 + 0x14))(param_1);
  return;
}

