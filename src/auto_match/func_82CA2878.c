
extern void *fn_82C53960(int, int);
extern void fn_82CA23F0(void *);
extern void fn_82CD2570(void *);
extern void fn_82CD5A90(int *, unsigned int, unsigned int, void *, unsigned int);
void *fn_82CA2878(int *err, unsigned int a, unsigned int b, unsigned int c)
{
  void *obj;
  obj = fn_82C53960(0x394c, 0);
  if (obj == 0) { *err = 1; return 0; }
  fn_82CD2570(obj);
  fn_82CD5A90(err, a, b, obj, c);
  if (*err != 0) { fn_82CA23F0(obj); return 0; }
  return obj;
}
