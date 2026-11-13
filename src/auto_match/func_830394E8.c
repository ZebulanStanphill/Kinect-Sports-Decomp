extern int fn_83038550();
extern unsigned int lbl_8217D264;
extern unsigned int lbl_8217D2B0;
extern unsigned int lbl_8217D2B8;


unsigned int * fn_830394E8(unsigned int *param_1)

{
  unsigned int in_stack_0000006c;
  
  fn_83038550();
  param_1[0x7b] = in_stack_0000006c;
  param_1[3] = &lbl_8217D264;
  *param_1 = &lbl_8217D2B8;
  param_1[1] = &lbl_8217D2B0;
  *(unsigned char *)(param_1 + 0x7a) = 1;
  param_1[0x7c] = *(unsigned int *)(param_1[0x75] + 0x6c);
  param_1[0x7d] = *(unsigned int *)(param_1[0x75] + 0x74);
  return param_1;
}

