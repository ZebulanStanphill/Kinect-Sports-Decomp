typedef struct Vec_82880710 { unsigned char *first; unsigned char *last; unsigned char *end; } Vec_82880710;
extern unsigned char *fn_8223C2C0(void *, unsigned);
extern void fn_82F622A8(const char *);

int fn_82880710(Vec_82880710 *v, unsigned n)
{
  v->first = 0;
  v->last = 0;
  v->end = 0;
  if (n == 0) {
    return 0;
  }
  if (n > 0xffffffff) {
    fn_82F622A8("vector<T> too long");
  }
  v->first = fn_8223C2C0(v + 1, n);
  v->last = v->first;
  v->end = v->first + n;
  return 1;
}
