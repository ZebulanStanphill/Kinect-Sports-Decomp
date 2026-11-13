extern int fn_822315A0();
extern int fn_8229A230();
extern int fn_8265CA20();
extern int fn_82672660();
extern unsigned int lbl_821AC5E0;
extern unsigned int lbl_821B7D68;


void fn_824050F0(unsigned int *param_1)

{
  int iVar1;
  int iVar2;
  
  *param_1 = &lbl_821B7D68;
  fn_82672660(param_1[0x44],param_1 + 0x44);
  fn_8229A230(param_1 + 0x44);
  if (param_1[0x45] != 0) {
    fn_822315A0();
  }
  fn_82672660(param_1[0x3f],param_1 + 0x30);
  if (param_1[0x40] != 0) {
    fn_822315A0();
  }
  if (param_1[0x2c] != 0) {
    fn_822315A0();
  }
  if (param_1[0x2a] != 0) {
    fn_822315A0();
  }
  iVar2 = param_1[7];
  if (iVar2 != 0) {
    iVar1 = param_1[8];
    for (; iVar2 != iVar1; iVar2 = iVar2 + 8) {
      if (*(int *)(iVar2 + 4) != 0) {
        fn_822315A0();
      }
    }
    fn_8265CA20(param_1[7]);
  }
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *param_1 = &lbl_821AC5E0;
  return;
}

