extern int fn_82E3BCC8();
extern int fn_82EE3128();
extern unsigned int lbl_82152F14;
extern unsigned int lbl_8215FC70;


void fn_82EE3730(unsigned int *param_1)

{
  param_1[0x11] = &lbl_8215FC70;
  if (param_1[0x12] == 0) {
    fn_82EE3128(param_1 + 0x11,0);
  }
  *param_1 = &lbl_82152F14;
  if (param_1[1] == 0) {
    fn_82E3BCC8(param_1,0);
  }
  return;
}

