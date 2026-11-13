typedef struct Link_8253C1F0 Link_8253C1F0;
struct Link_8253C1F0 { Link_8253C1F0 *a; Link_8253C1F0 *b; };
typedef struct {
  char pad0[0x30];
  Link_8253C1F0 l30;
  Link_8253C1F0 l38;
  char pad1[0x180 - 0x40];
  void *m180; int m184; void *m188;
  char pad2[0x1ac - 0x18c];
  void *m1ac;
  char pad3[0x1b8 - 0x1b0];
  void *m1b8; void *m1bc; int m1c0;
  char pad4[0x8ac - 0x1c4];
  int m8ac;
  char pad5[0xb14 - 0x8b0];
  void *mb14;
} S_8253C1F0;
extern void fn_822B7E80(void *);
extern void fn_8251E400(void *);
extern void fn_8251FA58(void *);
extern void fn_82522ED8(void *);
extern void fn_8252B2E8(void *);
extern void fn_8252CF08(void *);
extern void fn_825339A0(void *);
extern void fn_8253F378(void *);
extern void fn_82599808(void *);
extern void fn_8265CA20(void *);

static __forceinline void Unlink_8253C1F0(Link_8253C1F0 *l)
{
  if (l->a != 0) {
    l->a->b = l->b;
  }
  if (l->b != 0) {
    l->b->a = l->a;
  }
  l->a = 0;
  l->b = 0;
}

void fn_8253C1F0(S_8253C1F0 *s)
{
  void *t;
  if (s->m1b8 != 0) {
    fn_82522ED8(s->m1b8);
    s->m1b8 = 0;
  }
  Unlink_8253C1F0(&s->l30);
  Unlink_8253C1F0(&s->l38);
  fn_82599808((char *)s + 0x40);
  if (s->m1bc != 0) {
    fn_8251FA58(s->m1bc);
    s->m1bc = 0;
  }
  { int *q = &s->m1c0; *q = 0; }
  if (s->mb14 != 0) {
    fn_82522ED8(s->mb14);
    s->mb14 = 0;
  }
  { int *q = &s->m8ac; *q = 0; }
  if (s->m180 != 0) {
    if (s->m184 != 0) {
      fn_8251FA58(s->m180);
    }
    s->m180 = 0;
  }
  fn_82522ED8(s->m188);
  s->m188 = 0;
  fn_8252CF08(s);
  t = s->m1ac;
  if (t != 0) {
    fn_822B7E80(t);
    fn_8265CA20(t);
  }
  fn_8252B2E8(s);
  fn_825339A0(s);
  fn_8251E400((char *)s + 0x230);
  fn_8253F378(s);
}
