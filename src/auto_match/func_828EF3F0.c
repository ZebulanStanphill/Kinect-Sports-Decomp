extern int fn_8265CA20();
extern unsigned int lbl_820275E8;


unsigned int * fn_828EF3F0(unsigned int *param_1,unsigned __int64 param_2)

{
  *param_1 = &lbl_820275E8;
  if (0xf < (unsigned int)param_1[0x23]) {
    fn_8265CA20(param_1[0x1e]);
  }
  param_1[0x22] = 0;
  param_1[0x23] = 0xf;
  *(unsigned char *)(param_1 + 0x1e) = 0;
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

