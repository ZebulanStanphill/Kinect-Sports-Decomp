extern int fn_8305ABE0();
extern int fn_8305B1D0();
extern int fn_8305B208();


int fn_8305B120(int param_1,unsigned __int64 param_2)

{
  fn_8305B1D0();
  *(unsigned int *)(param_1 + 0x14) = 0;
  fn_8305B208(param_1,0x27c0);
  fn_8305ABE0(param_1 + 0x14,param_1,param_2);
  return param_1;
}

