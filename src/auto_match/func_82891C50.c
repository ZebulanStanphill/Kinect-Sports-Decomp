typedef struct Str_82891C50 {
  char pad0[0x10];
  unsigned char *p10;
  char pad14[4];
  unsigned char *p18;
  char pad1c[0xc];
} Str_82891C50;
typedef struct Obj_82891C50 {
  char pad[0x494];
  Str_82891C50 s;
  unsigned int count;
} Obj_82891C50;
extern void fn_8223C478(void *, int, int);
extern void fn_828E9DB8(void *, unsigned int, int);
extern unsigned int fn_828E9D78(Str_82891C50 *);

static void WriteBits(void *bs, unsigned int v, int n)
{
  fn_8223C478(bs, n, 0);
  fn_828E9DB8(bs, v, n);
}

void fn_82891C50(Obj_82891C50 *o, void *bs)
{
  Str_82891C50 *s = &o->s;
  unsigned int n;
  unsigned int i;
  n = fn_828E9D78(s);
  o->count = n;
  WriteBits(bs, n, 11);
  i = 0;
  if (o->count > 0) {
    do {
      unsigned char *d = s->p10;
      unsigned char c;
      if (d == 0) {
        d = s->p18;
      }
      c = d[i];
      WriteBits(bs, c, 8);
      i++;
    } while (i < o->count);
  }
}
