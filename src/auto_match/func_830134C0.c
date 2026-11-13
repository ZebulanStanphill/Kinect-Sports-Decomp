extern int fn_8265CA20();
extern int fn_83037638();
extern unsigned int lbl_8217C360;
extern unsigned int lbl_8217D040;


unsigned int * fn_830134C0(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8217C360;
  fn_83037638(param_1 + 0x27);
  *param_1 = &lbl_8217D040;
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

