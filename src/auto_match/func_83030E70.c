extern int fn_8300C9F8();
extern int fn_8300CA08();
extern int fn_8302EFD8();
extern int fn_83030A78();
extern int fn_83031598();
extern int fn_83031790();
extern int fn_830338F0();
extern int fn_83033EA0();
extern unsigned int lbl_8217C940;
extern unsigned int lbl_8217CAA8;
extern unsigned int lbl_8217CAAC;
extern unsigned int lbl_8217CAB8;


void fn_83030E70(unsigned int *param_1)

{
  *param_1 = &lbl_8217CAB8;
  param_1[7] = &lbl_8217C940;
  param_1[0x2a] = &lbl_8217CAAC;
  param_1[0x2b] = &lbl_8217CAA8;
  fn_8300CA08(param_1 + 0x2a);
  fn_83030A78(param_1);
  fn_8302EFD8(param_1);
  fn_83031598(param_1 + 0x41);
  fn_83031790(param_1 + 0x39);
  fn_83031790(param_1 + 0x31);
  fn_83033EA0(param_1);
  fn_8300C9F8(param_1 + 0x2a);
  fn_830338F0(param_1);
  return;
}

