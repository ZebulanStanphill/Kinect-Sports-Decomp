extern int fn_822315A0();
extern int fn_8265CA20();
extern unsigned int lbl_8219689C;


void fn_828E3228(unsigned int *param_1)

{
  *param_1 = &lbl_8219689C;
  if (0xf < (unsigned int)param_1[8]) {
    fn_8265CA20(param_1[3]);
  }
  param_1[7] = 0;
  param_1[8] = 0xf;
  *(unsigned char *)(param_1 + 3) = 0;
  if (param_1[2] != 0) {
    fn_822315A0();
  }
  return;
}

