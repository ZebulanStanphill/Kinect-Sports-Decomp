void *memcpy(void *, const void *, unsigned int);
extern int fn_822924C0();

typedef struct Obj_828752D8 {
  int f0;
  char sub[0x24];
  unsigned char b28;
  int f2c;
  unsigned char arr[0x24];
  int f54;
  int f58;
  int f5c;
  int f60;
  int f64;
  int f68;
} Obj_828752D8;

Obj_828752D8 *fn_828752D8(Obj_828752D8 *d, Obj_828752D8 *s)
{
  fn_822924C0((int)d + 4, (int)s + 4);
  d->b28 = s->b28;
  d->f2c = s->f2c;
  memcpy((char *)d + 0x30, (char *)s + 0x30, 0x24);
  d->f54 = s->f54;
  d->f58 = s->f58;
  d->f5c = s->f5c;
  d->f64 = s->f64;
  d->f68 = s->f68;
  return d;
}
