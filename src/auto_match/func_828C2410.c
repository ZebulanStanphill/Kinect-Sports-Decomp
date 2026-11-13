extern int fn_8265CA20();
extern unsigned int lbl_82026054;


unsigned int * fn_828C2410(unsigned int *param_1,unsigned __int64 param_2)

{
  *param_1 = &lbl_82026054;
  if (0xf < (unsigned int)param_1[7]) {
    fn_8265CA20(param_1[2]);
  }
  param_1[6] = 0;
  param_1[7] = 0xf;
  *(unsigned char *)(param_1 + 2) = 0;
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

