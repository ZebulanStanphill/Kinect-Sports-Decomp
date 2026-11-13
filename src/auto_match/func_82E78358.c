extern int fn_82E4FE40();
extern int fn_82E77258();
extern unsigned int lbl_8215F018;


unsigned int * fn_82E78358(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8215F018;
  if (param_1[1] == 0) {
    fn_82E77258(param_1,0);
  }
  if ((param_2 & 1) != 0) {
    fn_82E4FE40(param_1);
  }
  return param_1;
}

