extern int fn_822315A0();
extern int fn_8265CA20();
extern unsigned int lbl_82197048;


unsigned int * fn_8224BB60(unsigned int *param_1,unsigned int param_2)

{
  if (param_1[0x13] != 0) {
    fn_822315A0(param_1[0x13]);
  }
  if (param_1[0x11] != 0) {
    fn_822315A0(param_1[0x11]);
  }
  if (param_1[0xf] != 0) {
    fn_822315A0(param_1[0xf]);
  }
  if (param_1[0xd] != 0) {
    fn_822315A0(param_1[0xd]);
  }
  if (param_1[0xb] != 0) {
    fn_822315A0(param_1[0xb]);
  }
  if (param_1[9] != 0) {
    fn_822315A0(param_1[9]);
  }
  *param_1 = &lbl_82197048;
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

