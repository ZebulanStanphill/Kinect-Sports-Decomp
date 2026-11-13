extern int fn_82E23B80();
extern unsigned int lbl_82153A68;


unsigned int * fn_82E49458(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_82153A68;
  if ((param_2 & 1) != 0) {
    fn_82E23B80();
  }
  return param_1;
}

