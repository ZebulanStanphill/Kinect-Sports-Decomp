extern void fn_822315A0(unsigned int);
extern void fn_8265CA20(void *);
extern unsigned int lbl_82197048;


unsigned int *fn_82400C78(unsigned int *param_1, unsigned int param_2)

{
  if (param_1[0x1f] != 0) {
    fn_822315A0(param_1[0x1f]);
  }
  if (param_1[0x1d] != 0) {
    fn_822315A0(param_1[0x1d]);
  }
  if (param_1[0x1b] != 0) {
    fn_822315A0(param_1[0x1b]);
  }
  if (param_1[0x19] != 0) {
    fn_822315A0(param_1[0x19]);
  }
  if (param_1[0x17] != 0) {
    fn_822315A0(param_1[0x17]);
  }
  if (param_1[0x15] != 0) {
    fn_822315A0(param_1[0x15]);
  }
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
  *param_1 = (unsigned int)&lbl_82197048;
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

