extern unsigned char fn_8277BEE0(void *, int, int);
extern unsigned char fn_8277BF50(void *, int, int);
extern unsigned char fn_8277BFE8(void *, int, int);
extern unsigned char fn_8277C040(void *, int, int);
extern void fn_8277EA70(void *, int, int, int, int, int);

void fn_8277ECE0(void *param_1, int *param_2)
{
  int i = param_2[0];
  int hi;
  int cnt;
  int j;
  int lo;
  while (hi = param_2[1], i < hi) {
    if (fn_8277BEE0(param_1, i, param_2[0]) != 0) {
      cnt = 1;
      j = i;
      for (;;) {
        j = j + 1;
        if (fn_8277BFE8(param_1, j, hi) != 0)
          break;
        cnt = cnt + 1;
      }
      fn_8277EA70(param_1, i, cnt, 1, param_2[2], param_2[3]);
      i = (cnt + i) - 1;
    }
    i = i + 1;
  }
  lo = param_2[0];
  j = hi;
  if (hi > lo) {
    do {
      int k;
      if (fn_8277BF50(param_1, j, param_2[1]) != 0) {
        cnt = 1;
        k = j;
        for (;;) {
          k = k - 1;
          if (fn_8277C040(param_1, k, lo) != 0)
            break;
          cnt = cnt + 1;
        }
        fn_8277EA70(param_1, j, cnt, -1, param_2[2], param_2[3]);
        j = (j - cnt) + 1;
      }
      lo = param_2[0];
      j = j - 1;
    } while (j > lo);
  }
}
