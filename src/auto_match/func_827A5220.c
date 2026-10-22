extern void fn_8267C488(void *p);
extern void fn_8267C498(void *p);
extern void fn_8267C4F0(void *p);
extern void fn_8278FBA0(void *p, void *q);
extern void fn_82794B38(void *p);
extern void *fn_8279C588(void *p);
extern void fn_827B0050(void *a, void *b);
extern char lbl_82015C34[];

void fn_827A5220(void **param_1)
{
  void *ctx;
  void **p;
  int i;

  param_1[0] = lbl_82015C34;
  ctx = fn_8279C588(((void **)param_1[3])[2]);
  p = param_1 + 0x25;
  for (i = 10; i != 0; i--) {
    p++;
    fn_827B0050(ctx, *p);
  }
  fn_8278FBA0(param_1 + 5, param_1[4]);
  fn_82794B38(param_1 + 5);
  if (param_1[4] != 0) {
    fn_8267C498(param_1[4]);
  }
  if (param_1[2] != 0) {
    fn_8267C4F0(param_1[2]);
  }
  fn_8267C488(param_1);
}
