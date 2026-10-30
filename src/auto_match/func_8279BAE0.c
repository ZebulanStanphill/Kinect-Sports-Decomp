typedef struct Vec_func_8279BAE0 { char *data; unsigned size; } Vec_func_8279BAE0;
extern void fn_8279B038(Vec_func_8279BAE0 *, Vec_func_8279BAE0 *, unsigned);

void fn_8279BAE0(Vec_func_8279BAE0 *v, unsigned n)
{
  unsigned old = v->size;
  fn_8279B038(v, v, n);
  if (n > old) {
    char *p = v->data + old * 0x30;
    unsigned i;
    for (i = 0; i < n - old; i++) {
      if (p != 0) {
        *(int *)(p + 0x28) = 0;
      }
      p += 0x30;
    }
  }
}
