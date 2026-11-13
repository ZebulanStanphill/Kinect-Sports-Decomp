extern int fn_82A411B8();
extern int fn_82A4F4E0();


unsigned int * fn_82A51800(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = 0;
  fn_82A411B8(param_1 + 0x14);
  fn_82A411B8(param_1 + 2);
  if ((param_2 & 1) != 0) {
    fn_82A4F4E0(param_1);
  }
  return param_1;
}

