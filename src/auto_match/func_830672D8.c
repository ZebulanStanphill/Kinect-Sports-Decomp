extern unsigned int _CountLeadingZeros(unsigned int);
extern int fn_83066788(void *, void *, float);
extern int fn_83067180(void *, int, void *);

char fn_830672D8(void *param_1, void *param_2, float param_3)
{
  int r;
  int sum;
  int i;
  char buf[16];

  sum = 0;
  i = 0;
  do {
    fn_83067180(param_1, i, buf);
    r = fn_83066788(param_2, buf, param_3);
    if (r == 1) {
      if (sum > 0) {
        return 3;
      }
      sum = sum - 1;
    } else if (r == 0) {
      if (sum < 0) {
        return 3;
      }
      sum = sum + 1;
    }
    i = i + 1;
  } while (i < 8);
  return (_CountLeadingZeros(sum) == 0) + 1;
}
