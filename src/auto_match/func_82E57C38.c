extern int fn_82E4FE40();
extern int fn_82F37588();
extern unsigned int lbl_82162BB0;


unsigned int * fn_82E57C38(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_82162BB0;
  if (param_1[1] == 0) {
    fn_82F37588(param_1,0);
  }
  if ((param_2 & 1) != 0) {
    fn_82E4FE40(param_1);
  }
  return param_1;
}

