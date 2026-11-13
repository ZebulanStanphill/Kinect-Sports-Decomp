extern int fn_8267C488();
extern int fn_826FDF58();
extern int fn_8278B290();
extern unsigned int lbl_82010C6C;


void fn_827A7148(int param_1)

{
  *(unsigned char ***)(param_1 + 0x2c) = &lbl_82010C6C;
  fn_8278B290(param_1 + 0x2c);
  fn_8267C488(param_1 + 0x2c);
  fn_826FDF58(param_1);
  return;
}

