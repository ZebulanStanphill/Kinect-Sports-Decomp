extern int fn_83061508();
extern unsigned int lbl_8217E88C;
extern float lbl_831BCA5C;


unsigned int * fn_83062F00(unsigned int *param_1)

{
  param_1[1] = 0;
  *param_1 = &lbl_8217E88C;
  param_1[2] = 0;
  param_1[3] = 0;
  *(unsigned char *)(param_1 + 4) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  fn_83061508(param_1 + 0xd);
  fn_83061508(param_1 + 0x19);
  fn_83061508(param_1 + 0x25);
  *(float *)(param_1 + 0xc) = lbl_831BCA5C;
  return param_1;
}

