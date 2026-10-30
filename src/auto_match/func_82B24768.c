typedef struct { int a, b, c; } Ent_82B24768;
typedef struct { char pad[8]; unsigned int count; unsigned int cap; Ent_82B24768 e[1]; } Blk_82B24768;
typedef struct { unsigned int blk; unsigned int flags; } Cont_82B24768;
extern int fn_82B16ED0(int a, int b);
extern Blk_82B24768 *fn_82B4B410(Cont_82B24768 *c, int n);
extern int fn_82B82D28(int a, int b, int *x, int *y, int *z, int d, int e, int f);

void fn_82B24768(int p1, Cont_82B24768 *c, int p3, int p4, int p5, int *out)
{
  Ent_82B24768 s;
  Blk_82B24768 *b;
  unsigned int cnt;
  Ent_82B24768 t;
  unsigned int u;
  fn_82B82D28(p3, p4, &s.a, &s.b, &s.c, 0, p5, 0);
  t = s;
  if ((c->flags & 1) == 0) {
    u = c->blk & 0xfffffffe;
    b = (Blk_82B24768 *)(u - 4);
    if (b != 0 && b->count + 1 <= b->cap) goto have;
  }
  b = fn_82B4B410(c, 1);
have:
  { Ent_82B24768 *d = &b->e[b->count]; b->count = b->count + 1; *d = t; }
  *out = fn_82B16ED0(s.a, s.b);
}
