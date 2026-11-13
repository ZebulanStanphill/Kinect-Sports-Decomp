extern int fn_8265C990();


unsigned __int64 fn_82C02EA0(unsigned int *param_1)

{
  if (param_1[0xb] != 0) {
    fn_8265C990(param_1[0xb],0x208c8017);
    param_1[0xb] = 0;
  }
  (*(int (**)())(*param_1 + 0x4c))(param_1);
  (*(int (**)())(*param_1 + 0x50))(param_1);
  (*(int (**)())(*param_1 + 0x84))(param_1);
  return 0;
}

