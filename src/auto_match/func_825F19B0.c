extern int fn_8251FA58();
extern int fn_82522ED8();
extern int fn_82545950();
extern int fn_82545A90();
extern int fn_8262FEC8();


void fn_825F19B0(unsigned int *param_1)

{
  if (*param_1 != 0) {
    fn_8251FA58(*param_1);
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    fn_8251FA58(param_1[1]);
    param_1[1] = 0;
  }
  param_1[6] = 0;
  if (param_1[0xd] != 0) {
    fn_8262FEC8(param_1[0xd]);
  }
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  if (param_1[0x1d] != 0) {
    fn_82545950(param_1 + 0x1d);
  }
  if (param_1[0x1e] != 0) {
    fn_82545A90(param_1 + 0x1e);
  }
  fn_82522ED8(param_1);
  return;
}

