extern int fn_82230300();
extern int fn_8248F8E8();
extern int fn_8248F9A0();
extern unsigned int lbl_821BEC10;


unsigned int * fn_82493198(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821BEC10;
  fn_82230300(param_1 + 0xf,1,0);
  fn_8248F9A0(param_1);
  if ((param_2 & 1) != 0) {
    fn_8248F8E8(param_1);
  }
  return param_1;
}

