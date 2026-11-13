extern int fn_82545950();
extern int fn_82545A90();


void fn_824E8300(unsigned int *param_1)

{
  if (*param_1 != 0) {
    fn_82545950();
  }
  if (param_1[1] != 0) {
    fn_82545950(param_1 + 1);
  }
  if (param_1[2] != 0) {
    fn_82545950(param_1 + 2);
  }
  if (param_1[3] != 0) {
    fn_82545950(param_1 + 3);
  }
  if (param_1[4] != 0) {
    fn_82545950(param_1 + 4);
  }
  if (param_1[5] != 0) {
    fn_82545950(param_1 + 5);
  }
  if (param_1[6] != 0) {
    fn_82545950(param_1 + 6);
  }
  if (param_1[7] != 0) {
    fn_82545950(param_1 + 7);
  }
  if (param_1[8] != 0) {
    fn_82545A90(param_1 + 8);
  }
  if (param_1[9] != 0) {
    fn_82545A90(param_1 + 9);
  }
  if (param_1[10] != 0) {
    fn_82545A90(param_1 + 10);
  }
  if (param_1[0xb] != 0) {
    fn_82545A90(param_1 + 0xb);
  }
  if (param_1[0xc] != 0) {
    fn_82545A90(param_1 + 0xc);
  }
  if (param_1[0xd] != 0) {
    fn_82545A90(param_1 + 0xd);
  }
  return;
}

