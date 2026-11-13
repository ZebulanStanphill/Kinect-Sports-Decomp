extern int fn_8267BE38();
extern unsigned int lbl_8200612C;


unsigned int * fn_826954D8(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8200612C;
  if ((param_2 & 1) != 0) {
    fn_8267BE38();
  }
  return param_1;
}

