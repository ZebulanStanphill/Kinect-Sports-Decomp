extern int fn_828B0328();
extern int fn_828BDE70();
extern unsigned int lbl_82025658;
extern unsigned int lbl_82025660;


void fn_828C8148(unsigned int *param_1)

{
  *param_1 = &lbl_82025660;
  param_1[0x14] = &lbl_82025658;
  if (param_1[0x1b] != 0) {
    fn_828B0328(param_1[0x1b]);
  }
  fn_828BDE70(param_1);
  return;
}

