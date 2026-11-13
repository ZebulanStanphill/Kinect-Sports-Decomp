extern int fn_83011CF8(int a, int b, int c, unsigned char d);
extern int fn_83011EE0(int a, int b, int c, unsigned char d);
extern int fn_8303ECC0(int a, int b, int c);
extern int fn_8303EE40(int a, int b, int c);
extern int fn_8303EFB8(int a, int b, int c);
extern int lbl_832642E4;

int fn_8303DFC8(int param_1, int param_2)
{
  int result;
  int v;

  v = *(int *)(param_2 + 0x34);
  result = 1;
  switch ((int)(*(unsigned int *)(param_1 + 0x14) >> 8)) {
  case 0x3010:
  case 0x3011:
    result = fn_8303EFB8(param_1, 2, v);
    fn_83011CF8(lbl_832642E4, *(int *)(param_1 + 0x10), v,
                *(unsigned char *)(param_1 + 0x28));
    break;
  case 0x3020:
  case 0x3021:
    fn_8303EE40(param_1, 2, v);
    fn_83011CF8(lbl_832642E4, *(int *)(param_1 + 0x10), v,
                *(unsigned char *)(param_1 + 0x28));
    break;
  case 0x3040:
  case 0x3041:
    fn_8303ECC0(param_1, 2, v);
    fn_83011EE0(lbl_832642E4, v, param_1 + 0x1c,
                *(unsigned char *)(param_1 + 0x28));
    break;
  }
  return result;
}
