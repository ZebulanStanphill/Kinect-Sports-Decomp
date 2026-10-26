extern void fn_8280E418(void *a, void *b);
extern void fn_8280F300(float a, float b, float c, void *d, unsigned int e);

void fn_8281E2C0(void *p, float a, float b, float c, unsigned int e)
{
  fn_8280F300(a, b, c, p, e);
  fn_8280E418(p, p);
}
