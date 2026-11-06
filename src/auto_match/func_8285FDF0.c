extern void fn_82863790(void **ctx);
extern void fn_82862080(void *ctx, float *m);
extern char *fn_82859DE0(void *a, void *b);
extern void fn_8280CB70(void *a, float *m1, float *m2);
extern int fn_82861FB0(void *ctx);
extern int fn_82861FC0(void *ctx);
extern void fn_82861F18(void *ctx, float *a, float *b, float *c, float *d, float *e, float *f);
extern void fn_828620B8(void *ctx, float *a, float *b, float *c, float *d, float *e, float *f);
extern void fn_82861F88(void *ctx, float *a, float *b, float *c, float *d);
extern void fn_82861370(float *v, float *m1, float *m2);
extern void fn_82861380(float *v, float *m1, float *m2);
extern void fn_828616F0(float *v, float *m1, float *m2);
extern void fn_82861F50(void *ctx, float *m);
extern void fn_8285FD78(void *a, void *b, float *m1, float *m2);

void fn_8285FDF0(void *param_1, void *param_2)
{
  void *ctx;
  float v[8];
  float w[4];
  float m90[16];
  float md0[16];
  float m110[42];
  char *obj;
  float *puVar2;

  fn_82863790(&ctx);
  fn_82862080(ctx, md0);
  obj = fn_82859DE0(param_1, param_2);
  if (*(unsigned int *)(obj + 0x50) != 0) {
    fn_8280CB70(obj + 0x10, md0, m90);
    if (fn_82861FB0(ctx) != 0) {
      fn_82861F18(ctx, &v[0], &v[1], &v[2], &v[3], &v[4], &v[5]);
      fn_82861370(v, m90, m110);
    } else if (fn_82861FC0(ctx) != 0) {
      fn_828620B8(ctx, &v[0], &v[1], &v[2], &v[3], &v[4], &v[5]);
      fn_82861380(v, m90, m110);
    } else {
      fn_82861F88(ctx, &w[0], &w[1], &w[2], &w[3]);
      fn_828616F0(w, m90, m110);
    }
    puVar2 = m90;
  } else {
    fn_82861F50(ctx, m110);
    puVar2 = md0;
  }
  fn_8285FD78(param_1, param_2, puVar2, m110);
}
