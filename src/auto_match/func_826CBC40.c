extern int fn_826C26B0();
extern int fn_82714420();
extern unsigned int lbl_8200BF44;
extern unsigned int lbl_8200BF48;
extern unsigned int lbl_8200C0D0;


void fn_826CBC40(unsigned int *param_1)

{
  *param_1 = &lbl_8200BF48;
  param_1[4] = &lbl_8200C0D0;
  param_1[0xe] = &lbl_8200BF44;
  fn_826C26B0(param_1 + 0xe);
  fn_82714420(param_1);
  return;
}

