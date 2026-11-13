extern int fn_82575DF0();
extern unsigned int lbl_821C1424;
extern unsigned int lbl_821C144C;


void fn_824E46E8(unsigned int *param_1)

{
  *param_1 = &lbl_821C144C;
  if (param_1[2] != 0) {
    fn_82575DF0(param_1[1], param_1[2]);
    param_1[2] = 0;
  }
  if (param_1[3] != 0) {
    fn_82575DF0(param_1[1], param_1[3]);
    param_1[3] = 0;
  }
  if (param_1[4] != 0) {
    fn_82575DF0(param_1[1], param_1[4]);
    param_1[4] = 0;
  }
  *param_1 = &lbl_821C1424;
  return;
}

