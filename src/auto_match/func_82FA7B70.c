extern int fn_8265CA20();
extern unsigned int lbl_8217D040;
extern unsigned int lbl_83264230;


unsigned int * fn_82FA7B70(unsigned int *param_1,unsigned int param_2)

{
  lbl_83264230 = 0;
  *param_1 = &lbl_8217D040;
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

