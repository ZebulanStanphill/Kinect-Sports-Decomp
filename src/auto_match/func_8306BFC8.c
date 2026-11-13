extern int fn_8306BEB8();


void fn_8306BFC8(unsigned int *param_1,unsigned __int64 param_2)

{
  if (param_1 != (unsigned int *)0x0) {
    *(unsigned char *)(param_1 + 0xfe) = 0;
    fn_8306BEB8(param_2,param_1);
    *param_1 = 1;
  }
  return;
}

