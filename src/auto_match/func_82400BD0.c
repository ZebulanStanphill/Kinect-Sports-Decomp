extern int fn_822315A0();
extern int fn_8265CA20();
extern unsigned int lbl_82197048;


unsigned int * fn_82400BD0(unsigned int *param_1,int param_2)

{
  if (param_1[0x10] != 0) {
    fn_822315A0(param_1[0x10]);
  }
  if (param_1[0xe] != 0) {
    fn_822315A0(param_1[0xe]);
  }
  if (param_1[0xc] != 0) {
    fn_822315A0(param_1[0xc]);
  }
  if (param_1[10] != 0) {
    fn_822315A0(param_1[10]);
  }
  if (param_1[8] != 0) {
    fn_822315A0(param_1[8]);
  }
  *param_1 = &lbl_82197048;
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

