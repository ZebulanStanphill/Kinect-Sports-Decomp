extern void *fn_8267BED0(void *, int, int *);
extern int fn_82695DA0(void *, void *);
extern void fn_826EBE48(void *, int *);

void fn_826A2F80(char *param_1, void *param_2)
{
  void *p;
  int v;
  int size;

  size = 0x143;
  p = fn_8267BED0(param_1, 0x10, &size);
  if (p != 0) {
    v = fn_82695DA0(p, param_2);
  } else {
    v = 0;
  }
  fn_826EBE48(param_1 + 0x34, &v);
}
