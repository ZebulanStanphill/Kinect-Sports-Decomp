extern void fn_82863D58(void *a, void *b, void *c, float *d, void *e, unsigned char *f);
extern void fn_82863DE0(void *b, void *c, float x, void *e);
extern void fn_82864158(void *a, void *b, void *e, unsigned char f, int g);

void fn_828641C8(void *param_1, void *param_2, int param_3)
{
  unsigned char f;
  float x;
  struct { int v[3]; } e;
  struct { int v[3]; } c;

  fn_82863D58(param_1, param_2, &c, &x, &e, &f);
  fn_82863DE0(param_2, &c, x, &e);
  fn_82864158(param_1, param_2, &e, f, param_3);
}
