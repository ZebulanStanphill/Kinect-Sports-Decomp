extern int fn_82A4F4E0();
extern int fn_82A5DD00();
extern unsigned int lbl_82089E70;


unsigned int * fn_82A4D040(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_82089E70;
  fn_82A5DD00();
  if ((param_2 & 1) != 0) {
    fn_82A4F4E0(param_1);
  }
  return param_1;
}

