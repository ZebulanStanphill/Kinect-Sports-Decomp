extern int fn_828289F0();
extern int fn_82F62F60();
extern unsigned int lbl_82020F30;


void fn_82828C08(int param_1)

{
  fn_828289F0(param_1 + 0x58);
  *(unsigned char ***)(param_1 + 0x58) = &lbl_82020F30;
  fn_82F62F60(param_1 + 0x58);
  return;
}

