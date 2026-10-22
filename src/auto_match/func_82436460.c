typedef struct {
  char pad0[0xc];
  void *p0c;
  char pad1[0x4c - 0x10];
  void *p4c;
  void *p50;
  void *p54;
  void *p58;
  void *p5c;
  void *p60;
  void *p64;
  char pad2[0x78 - 0x68];
  void *p78;
} Sub;
typedef struct {
  char pad[0xd4];
  Sub *sub;
} Inner;
typedef struct {
  char pad[0x40];
  Inner **pinner;
} Self;
extern void fn_8229A000(void *p);
extern void fn_82292268(Sub *s);
extern void fn_8229F618(void *p);
extern void fn_8229CFB8(void *p, int a, int b);
extern char *fn_8242C1B8(Inner *in);
extern void fn_82291C30(Sub *s, int a, int b, int c, void *d, int e);

void fn_82436460(Self *p)
{
  Sub *s;
  char *r;
  s = (*p->pinner)->sub;
  fn_8229A000(s->p4c);
  fn_8229A000(s->p58);
  s = (*p->pinner)->sub;
  fn_8229A000(s->p50);
  fn_8229A000(s->p5c);
  s = (*p->pinner)->sub;
  fn_8229A000(s->p54);
  fn_8229A000(s->p60);
  fn_8229A000((*p->pinner)->sub->p64);
  fn_82292268((*p->pinner)->sub);
  fn_8229F618((*p->pinner)->sub->p0c);
  fn_8229CFB8((*p->pinner)->sub->p78, 0, 0);
  r = fn_8242C1B8(*p->pinner);
  fn_82291C30((*p->pinner)->sub, 0x29, 0, 1, r + 0x30, 1);
}
