extern void fn_82790730(char *dst, char *src);
extern void fn_82792FD8(void *self, void *self2, unsigned newsize);

typedef struct Vec_827947D0 {
  char *data;
  unsigned size;
} Vec_827947D0;

void fn_827947D0(Vec_827947D0 *v, char *src, unsigned n)
{
  unsigned old;
  char *dst;
  char *s;
  unsigned i;
  if (n != 0) {
    old = v->size;
    fn_82792FD8(v, v, old + n);
    dst = v->data + old * 12;
    s = src;
    for (i = 0; i < n; i++) {
      if (dst != 0) {
        fn_82790730(dst, s);
      }
      s += 12;
      dst += 12;
    }
  }
}
