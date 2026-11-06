extern void fn_83011240(unsigned int, int, int);
extern void fn_83011630(unsigned int, int, int);
extern void fn_83011A38(unsigned int, int);
extern void fn_83011B20(unsigned int, int);
extern void fn_8303ECC0(int, int, int);
extern int fn_8303EE40(int, int, int);
extern int fn_8303EFB8(int, int, int);
extern unsigned int lbl_832642E4;
extern void (*lbl_83264340)(void);
int fn_830380E0(int param_1, int param_2)
{
  int a = *(int *)(param_2 + 0x34);
  int ret = 1;
  switch ((int)(*(unsigned int *)(param_1 + 0x14) >> 8)) {
  case 0x1010:
    fn_83011B20(lbl_832642E4, *(int *)(param_1 + 0x10));
    fn_83011A38(lbl_832642E4, *(int *)(param_1 + 0x10));
  case 0x1011:
    ret = fn_8303EFB8(param_1, 0, a);
    fn_83011240(lbl_832642E4, *(int *)(param_1 + 0x10), a);
    break;
  case 0x1020:
    if (lbl_83264340 != 0) lbl_83264340();
  case 0x1021:
    fn_8303EE40(param_1, 0, a);
    fn_83011240(lbl_832642E4, *(int *)(param_1 + 0x10), a);
    break;
  case 0x1040:
  case 0x1041:
    fn_8303ECC0(param_1, 0, a);
    fn_83011630(lbl_832642E4, a, param_1 + 0x1c);
    break;
  }
  return ret;
}
