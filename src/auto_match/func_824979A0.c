extern int fn_8248F8E8();
extern int fn_82497EA8();
extern int fn_82497F18();
extern int fn_82558B08();
extern unsigned int lbl_821BEF50;


unsigned int * fn_824979A0(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821BEF50;
  fn_82558B08();
  fn_82497EA8(param_1,0);
  fn_82497F18(param_1);
  if ((param_2 & 1) != 0) {
    fn_8248F8E8(param_1);
  }
  return param_1;
}

