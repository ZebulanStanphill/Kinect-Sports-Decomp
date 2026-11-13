extern int fn_82686D60();
extern int fn_8268B330();
extern unsigned int lbl_8200C938;


unsigned int * fn_826DFC10(unsigned int *param_1)

{
  fn_82686D60();
  *param_1 = &lbl_8200C938;
  fn_8268B330(param_1 + 7);
  *(unsigned short *)((int)param_1 + 0x16) = 0;
  param_1[6] = 1;
  return param_1;
}

