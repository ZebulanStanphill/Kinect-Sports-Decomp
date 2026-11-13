extern int fn_82E583E0();
extern int fn_82EE0A68();
extern int fn_82EF3920();
extern unsigned int lbl_8215FA48;
extern unsigned int lbl_8216055C;
extern unsigned int lbl_82160570;


void fn_82EF3998(unsigned int *param_1)

{
  *param_1 = &lbl_82160570;
  param_1[1] = &lbl_8216055C;
  fn_82EF3920(param_1 + 1);
  param_1[0x16] = &lbl_8215FA48;
  if (param_1[0x17] == 0) {
    fn_82EE0A68(param_1 + 0x16,0);
  }
  fn_82E583E0(param_1);
  return;
}

