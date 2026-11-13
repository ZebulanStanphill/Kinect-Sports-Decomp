extern void fn_822315A0(void *);
extern void fn_8265CA20(void *);
extern unsigned int lbl_82197048;


unsigned int * fn_82393F38(unsigned int *param_1,unsigned int param_2)

{
  if (param_1[0x1c] != 0) {
    fn_822315A0((void *)param_1[0x1c]);
  }
  if (param_1[0x1a] != 0) {
    fn_822315A0((void *)param_1[0x1a]);
  }
  if (param_1[0x18] != 0) {
    fn_822315A0((void *)param_1[0x18]);
  }
  if (param_1[0x16] != 0) {
    fn_822315A0((void *)param_1[0x16]);
  }
  if (param_1[0x14] != 0) {
    fn_822315A0((void *)param_1[0x14]);
  }
  if (param_1[0x12] != 0) {
    fn_822315A0((void *)param_1[0x12]);
  }
  if (param_1[0x10] != 0) {
    fn_822315A0((void *)param_1[0x10]);
  }
  if (param_1[0xe] != 0) {
    fn_822315A0((void *)param_1[0xe]);
  }
  if (param_1[0xc] != 0) {
    fn_822315A0((void *)param_1[0xc]);
  }
  *param_1 = &lbl_82197048;
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

