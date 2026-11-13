extern unsigned int *auStack_20;
extern int fn_828A2240();
extern unsigned int lbl_820260D8;


unsigned int * fn_828C61B8(unsigned int *param_1)

{
  unsigned char auStack_20 [16];
  
  param_1[1] = 0;
  *param_1 = &lbl_820260D8;
  param_1[2] = 0;
  fn_828A2240(param_1 + 3,auStack_20,auStack_20);
  return param_1;
}

