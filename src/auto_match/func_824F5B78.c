extern int fn_82545810();
extern int fn_82545950();
extern int fn_82545A90();
extern unsigned int lbl_821C1424;
extern unsigned int lbl_821C1E80;


void fn_824F5B78(unsigned int *param_1)

{
  *param_1 = &lbl_821C1E80;
  if (param_1[3] != 0) {
    fn_82545950(param_1 + 3);
  }
  if (param_1[4] != 0) {
    fn_82545A90(param_1 + 4);
  }
  if (param_1[5] != 0) {
    fn_82545810(param_1 + 5);
  }
  *param_1 = &lbl_821C1424;
  return;
}

