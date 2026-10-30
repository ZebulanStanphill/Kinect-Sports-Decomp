typedef struct Ios_8223AF70 {
  char pad0[0x14];
  unsigned int flags;
  char pad1[0x28];
  char fill;
} Ios_8223AF70;

typedef struct Str_8223AF70 {
  char pad[8];
  union { unsigned char buf[4]; unsigned char *ptr; } u;
  unsigned int cap;
} Str_8223AF70;

typedef struct SS_8223AF70 {
  int pad4;
  char buf[140];
} SS_8223AF70;

extern void fn_8223CFC0(void *ss, int mode, int x);
extern void fn_8223DCC8(void *ss);
extern void *fn_8223FBB0(void *os, unsigned char c);
extern void *fn_8223FCD8(void *os, void *m);
extern void *fn_82240158(void *os, const char *s);
extern void fn_822403C8(void *out, void *buf);
extern void *fn_82520AC8(void *os, int c);
extern void *fn_82F62578(void *tmp, int x);

static const unsigned char *Myptr(Str_8223AF70 *s)
{
  const unsigned char *r;
  if (s->cap <= 4) r = s->u.buf; else r = s->u.ptr;
  return r;
}
void *fn_8223AF70(void *out, int a, int b, Str_8223AF70 *s)
{
  SS_8223AF70 ss;
  char tmp[16];
  const unsigned char *d;
  void *os;

  fn_8223CFC0(&ss, 2, 1);
  d = Myptr(s);
  fn_82240158(fn_82520AC8(fn_82240158(&ss, "NetDefBits_c<"), 5), "> - {0x");
  os = fn_8223FCD8(&ss, fn_82F62578(tmp, 2));
  ((Ios_8223AF70 *)((char *)os + *(int *)(*(int *)os + 4)))->fill = 0x30;
  {
    Ios_8223AF70 *io = (Ios_8223AF70 *)((char *)os + *(int *)(*(int *)os + 4));
    io->flags = (io->flags & 0xfffff1ff) | 0x800;
  }
  fn_8223FBB0(os, d[0]);
  fn_82240158(&ss, "}");
  fn_822403C8(out, ss.buf);
  fn_8223DCC8(&ss);
  return out;
}
