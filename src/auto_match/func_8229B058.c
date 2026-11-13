extern int fn_82292450();
extern int fn_8229AA08();
extern int fn_8265CA20();
extern unsigned int lbl_821AAF44;


unsigned int * fn_8229B058(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821AAF44;
  if (param_1[0xf] != 0) {
    fn_82292450(param_1[0xf],1);
  }
  if (param_1[0xe] != 0) {
    fn_82292450(param_1[0xe],1);
  }
  fn_8229AA08(param_1);
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

