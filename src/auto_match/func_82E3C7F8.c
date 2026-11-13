extern int fn_82E3BCC8();
extern int fn_82E4FE40();
extern unsigned int lbl_82152F14;


unsigned int * fn_82E3C7F8(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_82152F14;
  if (param_1[1] == 0) {
    fn_82E3BCC8(param_1,0);
  }
  if ((param_2 & 1) != 0) {
    fn_82E4FE40(param_1);
  }
  return param_1;
}

