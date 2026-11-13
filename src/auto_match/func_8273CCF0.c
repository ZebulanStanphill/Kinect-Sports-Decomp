extern int fn_826C26B0();
extern int fn_8273CC40();
extern unsigned int lbl_82012168;
extern unsigned int lbl_820121BC;
extern unsigned int lbl_82012280;


void fn_8273CCF0(unsigned int *param_1)

{
  *param_1 = &lbl_820121BC;
  param_1[4] = &lbl_82012168;
  param_1[0xe] = &lbl_82012280;
  fn_826C26B0(param_1 + 0xe);
  fn_8273CC40(param_1);
  return;
}

