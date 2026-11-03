extern void *memcpy(void *, const void *, unsigned);
extern void *memset(void *, int, unsigned);
extern int fn_8224EA58(void *, void *);
extern unsigned lbl_821961E8;
typedef struct { union { char buf[16]; char *ptr; } u; unsigned size; unsigned cap; } Str_8224E9D8;
void fn_8224E9D8(void *dst, Str_8224E9D8 *s)
{
  unsigned size = s->size;
  unsigned *p;
  unsigned n;
  char *src;
  char tmp[16];
  memset(tmp, 0, 16);
  if (size < 0x10) p = &size; else p = &lbl_821961E8;
  n = *p;
  src = s->u.buf;
  if (s->cap >= 0x10) src = s->u.ptr;
  memcpy(tmp, src, n);
  fn_8224EA58(dst, tmp);
}
