unsigned __int64 fn_82C04268(int *param_1,unsigned __int64 param_2)

{
  (**(int (***)())(*param_1 + 0xc))();
  param_1[0x4f] = 1;
  *(unsigned __int64 *)(param_1 + 0x4c) = param_2;
  (**(int (***)())(*param_1 + 0x78))(param_1);
  (**(int (***)())(*param_1 + 0x14))(param_1);
  return 0;
}

