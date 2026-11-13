extern int fn_82F398D0();
extern unsigned int lbl_82162C1C;


unsigned int * fn_82F39F50(unsigned int *param_1,int param_2)

{
  fn_82F398D0();
  *param_1 = &lbl_82162C1C;
  param_1[0x2f] = *(unsigned int *)(param_2 + 0xbc);
  return param_1;
}

