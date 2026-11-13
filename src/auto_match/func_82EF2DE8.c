extern int fn_82E4FE40();
extern int fn_82EE0A68();
extern unsigned int lbl_8215FA48;


unsigned int * fn_82EF2DE8(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8215FA48;
  if (param_1[1] == 0) {
    fn_82EE0A68(param_1,0);
  }
  if ((param_2 & 1) != 0) {
    fn_82E4FE40(param_1);
  }
  return param_1;
}

