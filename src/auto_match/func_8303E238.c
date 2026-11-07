typedef unsigned char undefined1;
typedef unsigned int undefined4;
typedef unsigned int uint;

extern int fn_83010BF0(int a, int b, int c, unsigned char d);
extern int fn_83011448(int a, int b, int c, unsigned char d);
extern int fn_8303ECC0(int a, int b, int c);
extern int fn_8303EE40(int a, int b, int c);
extern int fn_8303EFB8(int a, int b, int c);
extern int lbl_832642E4;

int fn_8303E238(int param_1, int param_2)
{
  int result;
  int v;

  v = *(int *)(param_2 + 0x34);
  result = 1;
  switch ((int)(*(uint *)(param_1 + 0x14) >> 8)) {
  case 0x2010:
  case 0x2011:
    result = fn_8303EFB8(param_1, 1, v);
    fn_83010BF0(lbl_832642E4, *(int *)(param_1 + 0x10), v,
                *(unsigned char *)(param_1 + 0x2c));
    break;
  case 0x2020:
  case 0x2021:
    fn_8303EE40(param_1, 1, v);
    fn_83010BF0(lbl_832642E4, *(int *)(param_1 + 0x10), v,
                *(unsigned char *)(param_1 + 0x2c));
    break;
  case 0x2040:
  case 0x2041:
    fn_8303ECC0(param_1, 1, v);
    fn_83011448(lbl_832642E4, v, param_1 + 0x1c,
                *(unsigned char *)(param_1 + 0x2c));
    break;
  }
  return result;
}
