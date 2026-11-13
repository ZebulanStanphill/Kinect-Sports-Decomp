extern int fn_825D6AD8();
extern int fn_825F1900();
extern unsigned int lbl_821CACBC;


void fn_82615AA0(unsigned int *param_1)

{
  *param_1 = &lbl_821CACBC;
  if (param_1[0xd] != 0) {
    fn_825D6AD8(param_1[0xd]);
    param_1[0xd] = 0;
  }
  if (param_1[0xe] != 0) {
    fn_825D6AD8(param_1[0xe]);
    param_1[0xe] = 0;
  }
  if (param_1[0xf] != 0) {
    fn_825D6AD8(param_1[0xf]);
    param_1[0xf] = 0;
  }
  if (param_1[0x10] != 0) {
    fn_825F1900(param_1[0x10]);
    param_1[0x10] = 0;
  }
  return;
}

