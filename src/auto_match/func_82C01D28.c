extern int fn_8265C990();


unsigned __int64 fn_82C01D28(unsigned int *param_1)

{
  if (param_1[0x83] != 0) {
    fn_8265C990(param_1[0x83],0x208c801d);
    param_1[0x83] = 0;
  }
  (*(int (**)())(*param_1 + 0x4c))(param_1);
  (*(int (**)())(*param_1 + 0x50))(param_1);
  (*(int (**)())(*param_1 + 0x84))(param_1);
  return 0;
}

