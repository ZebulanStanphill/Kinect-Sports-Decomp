extern int fn_8251FA58();
extern int fn_82522ED8();
extern int fn_82545950();
extern int fn_82545A90();
extern int fn_8262FEC8();


void fn_825F1900(unsigned int *param_1)

{
  if (*param_1 != 0) {
    fn_8251FA58(*param_1);
    *param_1 = 0;
    param_1[2] = 0;
  }
  if (param_1[1] != 0) {
    fn_8251FA58(param_1[1]);
    param_1[1] = 0;
    param_1[3] = 0;
  }
  param_1[7] = 0;
  if (param_1[9] != 0) {
    fn_8262FEC8(param_1[9]);
  }
  param_1[9] = 0;
  param_1[8] = 0;
  if (param_1[10] != 0) {
    fn_82545950(param_1 + 10);
  }
  if (param_1[0xb] != 0) {
    fn_82545A90(param_1 + 0xb);
  }
  fn_82522ED8(param_1);
  return;
}

