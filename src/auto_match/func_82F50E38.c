extern int fn_8265CA20();
extern unsigned int lbl_82165B20;


unsigned int * fn_82F50E38(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_82165B20;
  if ((param_2 & 1) != 0) {
    fn_8265CA20();
  }
  return param_1;
}

