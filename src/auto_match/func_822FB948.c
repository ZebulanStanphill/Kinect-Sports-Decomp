extern int fn_82230300();
extern int fn_822C71C8();
extern int fn_82359C18();
extern unsigned int lbl_821AE848;


void fn_822FB948(unsigned int *param_1)

{
  *param_1 = &lbl_821AE848;
  fn_82359C18(param_1 + 0x20);
  fn_82230300(param_1 + 0x17,1,0);
  fn_822C71C8(param_1);
  return;
}

