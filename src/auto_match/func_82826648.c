extern void fn_82822510(void *a, void *b, void *c, void *d);
extern void fn_828278F8(void);

int fn_82826648(int param_1, int param_2)
{
  int key;
  int *res;

  key = param_2;
  fn_82822510((char *)param_1 + 0x2fc, fn_828278F8, &key, &res);
  return res[5] != 0;
}
