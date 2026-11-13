extern int fn_8265CA20();
extern unsigned int lbl_82026038;


unsigned int * fn_828C0DA8(unsigned int *param_1,unsigned __int64 param_2)

{
  *param_1 = &lbl_82026038;
  if (7 < (unsigned int)param_1[9]) {
    fn_8265CA20(param_1[4]);
  }
  param_1[8] = 0;
  param_1[9] = 7;
  *(unsigned short *)(param_1 + 4) = 0;
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

