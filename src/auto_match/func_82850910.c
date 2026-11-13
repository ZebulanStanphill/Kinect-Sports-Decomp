extern int fn_82817B08(void *);
extern void fn_82817B50(void *, int, int *);
extern void fn_82817BC8(int, int *);

int fn_82850910(int param_1, int *param_2)
{
  int n, i;
  int out;
  void *o = *(void **)(param_1 + 0x144);
  if (o != 0 && (n = fn_82817B08(o)) > 0) {
    i = 0;
    if (0 < n) {
      do {
        fn_82817B50(*(void **)(param_1 + 0x144), i, &out);
        fn_82817BC8(out, param_2);
        i++;
        param_2++;
      } while (i < n);
    }
    return 1;
  }
  return 0;
}
