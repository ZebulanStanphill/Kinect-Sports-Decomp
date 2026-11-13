extern int fn_8265CA20();
extern int fn_8281F820();
extern int fn_8281FB48();
extern unsigned int lbl_8201EBA0;


unsigned int * fn_8281FC60(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8201EBA0;
  if (*(char *)(param_1 + 3) == '\x01') {
    fn_8281F820();
    fn_8281FB48();
  }
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

