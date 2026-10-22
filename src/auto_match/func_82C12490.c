typedef unsigned char U8;
typedef unsigned __int64 U64;
extern int fn_82C122F8(int p, U8 *out, U64 v);

int fn_82C12490(int param_1, int *param_2)
{
  int r;
  U8 c;

  *param_2 = 0;
  c = 0;
  r = 0;
  if (*(unsigned short *)(param_1 + 0x4c) != 0) {
    r = fn_82C122F8(param_1, &c, *(U64 *)(param_1 + 0x40));
    if (r == 0 && c != 0) {
      if (c != *(U8 *)(param_1 + 0x10)) {
        *param_2 = 1;
        *(U8 *)(param_1 + 0x60) = c;
      }
    } else {
      r = 0;
    }
  }
  return r;
}
