extern int fn_828B55B0();
extern int fn_828BDE70();
extern unsigned int lbl_821B5AD0;
extern unsigned int lbl_821B5B50;
extern unsigned int lbl_821C8118;
extern unsigned int lbl_821C8198;


void fn_825AC770(unsigned int *param_1)

{
  *param_1 = &lbl_821C8118;
  param_1[0x14] = &lbl_821C8198;
  fn_828B55B0(param_1 + 0x21);
  *param_1 = &lbl_821B5AD0;
  param_1[0x14] = &lbl_821B5B50;
  fn_828BDE70(param_1);
  return;
}

