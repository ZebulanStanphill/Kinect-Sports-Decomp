typedef struct { unsigned short a; unsigned short b; unsigned c; unsigned d; unsigned short e; unsigned short f; unsigned g; unsigned short h; unsigned short pad; } Dst_82A59598;
typedef struct { unsigned c; unsigned b; unsigned g; unsigned f; } Src_82A59598;

void fn_82A59598(Src_82A59598 *s, Dst_82A59598 *d)
{
  unsigned *p = (unsigned *)d;
  int i;
  for (i = 0; i < 6; i++) p[i] = 0;
  d->a = 0;
  d->b = (short)s->b;
  d->c = s->c;
  d->d = 0;
  d->e = 0;
  d->f = (short)s->f;
  d->g = s->g;
  d->h = 0;
}
