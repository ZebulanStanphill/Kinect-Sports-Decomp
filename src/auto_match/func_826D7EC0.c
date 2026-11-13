typedef struct Rc_826D7EC0 { int vt; int cnt; } Rc_826D7EC0;
typedef struct { unsigned char c[0x20]; } B32_826D7EC0;
typedef struct S_826D7EC0 {
  Rc_826D7EC0 *rc;
  B32_826D7EC0 b;
  float f[7];
  int i40;
  int i44;
  short s48;
  char c4a;
  char c4b;
} S_826D7EC0;
extern void fn_8267C498(Rc_826D7EC0 *);
extern void *memcpy(void *, const void *, unsigned);

S_826D7EC0 *fn_826D7EC0(S_826D7EC0 *d, S_826D7EC0 *s)
{
  int r;

  r = (int)s->rc;
  if (r != 0) {
    ((Rc_826D7EC0 *)r)->cnt = ((Rc_826D7EC0 *)r)->cnt + 1;
  }
  if (d->rc != 0) {
    fn_8267C498(d->rc);
  }
  d->rc = s->rc;
  d->b = s->b;
  d->f[0] = s->f[0];
  d->f[1] = s->f[1];
  d->f[2] = s->f[2];
  d->f[3] = s->f[3];
  d->f[4] = s->f[4];
  d->f[5] = s->f[5];
  d->f[6] = s->f[6];
  d->i40 = s->i40;
  d->i44 = s->i44;
  d->s48 = s->s48;
  d->c4a = s->c4a;
  d->c4b = s->c4b;
  return d;
}
