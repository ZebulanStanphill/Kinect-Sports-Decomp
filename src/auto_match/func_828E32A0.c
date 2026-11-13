extern int fn_822315A0();
extern int fn_8265CA20();
extern unsigned int lbl_8219688C;


void fn_828E32A0(unsigned int *param_1)

{
  *param_1 = &lbl_8219688C;
  if (0xf < (unsigned int)param_1[9]) {
    fn_8265CA20(param_1[4]);
  }
  param_1[8] = 0;
  param_1[9] = 0xf;
  *(unsigned char *)(param_1 + 4) = 0;
  if (param_1[3] != 0) {
    fn_822315A0();
  }
  return;
}

