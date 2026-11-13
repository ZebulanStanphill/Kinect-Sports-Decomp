extern int fn_83050AC8();
extern int fn_830561A0();
extern unsigned int lbl_8217DDBC;
extern unsigned int lbl_8217DE98;
extern unsigned int lbl_8217DECC;


void fn_83051070(unsigned int *param_1)

{
  *param_1 = &lbl_8217DECC;
  param_1[0x1e] = &lbl_8217DE98;
  if ((param_1[0x1d] & 0x2000000) != 0) {
    fn_830561A0(param_1[0x18]);
  }
  param_1[0x1e] = &lbl_8217DDBC;
  fn_83050AC8(param_1);
  return;
}

