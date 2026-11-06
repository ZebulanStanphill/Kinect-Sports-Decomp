extern void fn_826A3E68(char *dst, char *src);
extern void fn_826A5188(void *self, void *self2, unsigned newsize);

typedef struct Vec_826A5208 {
  char *data;
  unsigned size;
} Vec_826A5208;

void fn_826A5208(Vec_826A5208 *v, char *src, unsigned n)
{
  unsigned old;
  char *dst;
  char *s;
  unsigned i;
  if (n != 0) {
    old = v->size;
    fn_826A5188(v, v, old + n);
    dst = v->data + old * 0x1c;
    s = src;
    for (i = 0; i < n; i++) {
      if (dst != 0) {
        fn_826A3E68(dst, s);
      }
      s += 0x1c;
      dst += 0x1c;
    }
  }
}
