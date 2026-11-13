typedef struct Data_8268ACE8 {
  unsigned int done : 1;
  unsigned int size : 31;
  int f04;
  char buf[1];
} Data_8268ACE8;
typedef struct Ref_8268ACE8 { unsigned int tagged; } Ref_8268ACE8;
extern unsigned int fn_826BD758(void *p, unsigned int n);

unsigned int fn_8268ACE8(Ref_8268ACE8 *r)
{
  Data_8268ACE8 *d = (Data_8268ACE8 *)(r->tagged & ~3u);
  unsigned int n = d->size;
  unsigned int got;

  if ((unsigned char)d->done != 0) {
    return n;
  }
  got = fn_826BD758(d->buf, n);
  if (got == n) {
    d->done = 1;
  }
  return got;
}
