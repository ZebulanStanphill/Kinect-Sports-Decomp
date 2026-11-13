extern int fn_82233888();
extern int fn_8289D4C0();
extern unsigned int lbl_82197080;
extern unsigned int lbl_82198348;
extern unsigned int lbl_821983E8;
extern unsigned int lbl_82198450;
extern unsigned int lbl_821B9610;


static void destroy_82197080(unsigned int *p) { *p = (unsigned int)&lbl_82197080; fn_8289D4C0(p); }
static void destroy_821983E8(unsigned int *p) { *p = (unsigned int)&lbl_821983E8; fn_8289D4C0(p); }
static void destroy_82198348(unsigned int *p) { *p = (unsigned int)&lbl_82198348; fn_8289D4C0(p); }
static void destroy_821B9610(unsigned int *p) { *p = (unsigned int)&lbl_821B9610; fn_8289D4C0(p); }
void fn_82258FB0(unsigned int *param_1)

{
  *param_1 = &lbl_82198450;
  destroy_82197080(param_1 + 0x177);
  destroy_82197080(param_1 + 0x162);
  destroy_821983E8(param_1 + 0x14d);
  fn_8289D4C0(param_1 + 0x138);
  destroy_82198348(param_1 + 0x123);
  destroy_82197080(param_1 + 0x10e);
  destroy_82197080(param_1 + 0xf9);
  destroy_821B9610(param_1 + 0xe4);
  destroy_821B9610(param_1 + 0xcf);
  destroy_821B9610(param_1 + 0xba);
  destroy_821B9610(param_1 + 0xa5);
  destroy_82197080(param_1 + 0x90);
  destroy_821983E8(param_1 + 0x7b);
  fn_82233888(param_1);
  return;
}

