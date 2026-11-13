extern int fn_82230300();
extern int fn_8265CAA0();
extern int fn_82A1E658();
extern int fn_830B4090();
extern unsigned int lbl_821880B0;


void fn_830B3608(unsigned int *param_1)

{
  *param_1 = &lbl_821880B0;
  if (param_1[0x3b] != 0) {
    fn_82A1E658(param_1[0x3b]);
  }
  if (param_1[0x3c] != 0) {
    fn_8265CAA0(param_1[0x3c]);
  }
  fn_82230300(param_1 + 0x3f,1,0);
  fn_830B4090(param_1);
  return;
}

