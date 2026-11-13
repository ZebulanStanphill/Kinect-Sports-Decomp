extern int fn_8267C488();
extern int fn_826FDF58();
extern int fn_8278B290();
extern unsigned int lbl_82010C6C;


void fn_82793280(int param_1)

{
  *(unsigned char ***)(param_1 + 0x3c) = &lbl_82010C6C;
  fn_8278B290(param_1 + 0x3c);
  fn_8267C488(param_1 + 0x3c);
  fn_826FDF58(param_1 + 0x10);
  return;
}

