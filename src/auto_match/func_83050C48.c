extern int fn_83050AC8();
extern int fn_830560D0();
extern unsigned int lbl_8217DD8C;
extern unsigned int lbl_8217DE3C;
extern unsigned int lbl_8217DE6C;


void fn_83050C48(unsigned int *param_1)

{
  *param_1 = &lbl_8217DE6C;
  param_1[0x1e] = &lbl_8217DE3C;
  if ((param_1[0x1d] & 0x2000000) != 0) {
    fn_830560D0(param_1[0x18]);
  }
  param_1[0x1e] = &lbl_8217DD8C;
  fn_83050AC8(param_1);
  return;
}

