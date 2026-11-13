extern int fn_8265CA20();
extern int fn_82893C48();
extern unsigned int lbl_8202439C;


unsigned int * fn_828A8D28(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8202439C;
  *(unsigned int *)(param_1[4] + 0x2c8) = 0;
  fn_82893C48();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

