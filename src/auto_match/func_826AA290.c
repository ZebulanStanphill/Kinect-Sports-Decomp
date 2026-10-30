typedef struct Vec_func_826AA290 { char *data; unsigned size; } Vec_func_826AA290;
extern void fn_82768E30(Vec_func_826AA290 *, Vec_func_826AA290 *, unsigned);

void fn_826AA290(Vec_func_826AA290 *v, unsigned n)
{
  unsigned old = v->size;
  fn_82768E30(v, v, n);
  if (n > old) {
    char *p = v->data + old * 0xc;
    unsigned i;
    for (i = 0; i < n - old; i++) {
      if (p != 0) {
        *(int *)(p + 8) = 0;
      }
      p += 0xc;
    }
  }
}
