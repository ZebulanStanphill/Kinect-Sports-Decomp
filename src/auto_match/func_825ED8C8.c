extern int fn_82622B68();
extern int fn_8265CA20();
extern unsigned int lbl_821CA230;


unsigned int * fn_825ED8C8(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821CA230;
  fn_82622B68();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

