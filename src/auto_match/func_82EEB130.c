extern void fn_82E4FE40(void *p);
extern int fn_82E58BE8(void *q, void **out);

void fn_82EEB130(void *param_1)
{
  void *p;

  for (;;) {
    p = 0;
    if (fn_82E58BE8(param_1, &p) == 0) break;
    if (p != 0) {
      fn_82E4FE40(p);
    }
  }
}
