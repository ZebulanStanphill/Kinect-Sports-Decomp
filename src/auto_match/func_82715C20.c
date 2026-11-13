extern int fn_826C26B0();
extern int fn_82714420();
extern unsigned int lbl_8200F6C8;
extern unsigned int lbl_8200F6CC;
extern unsigned int lbl_8200F7A0;


void fn_82715C20(unsigned int *param_1)

{
  *param_1 = &lbl_8200F6CC;
  param_1[4] = &lbl_8200F7A0;
  param_1[0xd] = &lbl_8200F6C8;
  fn_826C26B0(param_1 + 0xd);
  fn_82714420(param_1);
  return;
}

