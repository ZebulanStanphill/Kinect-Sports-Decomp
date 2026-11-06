extern void *fn_82E50BE8(unsigned int, int, int, int, int);
extern void *memcpy(void *, const void *, unsigned int);

typedef struct Str_82E54898 { void *buf; unsigned int len; unsigned int cap; } Str_82E54898;

Str_82E54898 *fn_82E54898(Str_82E54898 *d, Str_82E54898 *s, int *err)
{
  unsigned int n;
  d->buf = 0;
  d->len = 0;
  d->cap = 0;
  n = s->cap;
  if (n < s->len) {
    *err = 0x80070057;
    return d;
  }
  d->buf = fn_82E50BE8(n <= 0x7fffffff ? n << 1 : 0xffffffff, 0, 0, 0, 0);
  if (d->buf == 0) {
    *err = 0x8007000e;
    return d;
  }
  memcpy(d->buf, s->buf, s->cap << 1);
  d->cap = s->cap;
  d->len = s->len;
  return d;
}
