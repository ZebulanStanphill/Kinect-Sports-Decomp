extern int fn_82D70F30();


unsigned int * fn_82D743F0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  if (param_3 != (unsigned int *)0x0) {
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0x80000000;
  }
  fn_82D70F30(param_3);
  return param_3 + 4;
}

