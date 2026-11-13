extern int fn_8267BE38();
extern int fn_826C2EA0();
extern unsigned int lbl_82015C38;


int fn_827526E8(int param_1,unsigned int param_2)

{
  *(unsigned char ***)(param_1 + 0x34) = &lbl_82015C38;
  fn_826C2EA0();
  if ((param_2 & 1) != 0) {
    fn_8267BE38(param_1);
  }
  return param_1;
}

