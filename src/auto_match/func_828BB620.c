extern int fn_8265CA20();
extern unsigned int lbl_82025418;


unsigned int * fn_828BB620(unsigned int *param_1,unsigned __int64 param_2)

{
  *param_1 = &lbl_82025418;
  if (0xf < (unsigned int)param_1[8]) {
    fn_8265CA20(param_1[3]);
  }
  param_1[7] = 0;
  param_1[8] = 0xf;
  *(unsigned char *)(param_1 + 3) = 0;
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

