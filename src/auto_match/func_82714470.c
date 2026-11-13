extern int fn_826C26B0();
extern int fn_82714420();
extern unsigned int lbl_8200F484;
extern unsigned int lbl_8200F488;
extern unsigned int lbl_8200F588;


void fn_82714470(unsigned int *param_1)

{
  *param_1 = &lbl_8200F488;
  param_1[4] = &lbl_8200F588;
  param_1[0xd] = &lbl_8200F484;
  fn_826C26B0(param_1 + 0xd);
  fn_82714420(param_1);
  return;
}

