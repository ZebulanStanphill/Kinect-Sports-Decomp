extern int fn_8248F8E8();
extern int fn_82499CB8();
extern int fn_82558B08();
extern unsigned int lbl_821BEFC0;


unsigned int * fn_82499498(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821BEFC0;
  fn_82558B08();
  fn_82499CB8(param_1);
  if ((param_2 & 1) != 0) {
    fn_8248F8E8(param_1);
  }
  return param_1;
}

