extern int fn_82F53BF0();
extern unsigned int lbl_821655CC;
extern unsigned int lbl_83261820;


unsigned int * fn_82F4D3E8(unsigned int *param_1)

{
  fn_82F53BF0();
  *param_1 = &lbl_821655CC;
  param_1[10] = lbl_83261820;
  lbl_83261820 = lbl_83261820 + 1;
  param_1[0xb] = 0;
  return param_1;
}

