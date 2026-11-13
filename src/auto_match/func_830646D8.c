extern int fn_83061508();
extern int fn_83063DA0();
extern unsigned int lbl_8217E88C;


unsigned int * fn_830646D8(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  param_1[1] = 0;
  *param_1 = &lbl_8217E88C;
  param_1[2] = 0;
  param_1[3] = 0;
  *(unsigned char *)(param_1 + 4) = 0;
  param_1[0xb] = 0;
  fn_83061508(param_1 + 0xd);
  fn_83061508(param_1 + 0x19);
  fn_83061508(param_1 + 0x25);
  fn_83063DA0(param_1,param_2,param_3);
  return param_1;
}

