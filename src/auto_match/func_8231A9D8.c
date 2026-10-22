extern void fn_8236C6A0(void *, void *);
extern void fn_823CC298(int, int);
struct T { char pad[0xe0]; unsigned char flag; };
struct C { char pad[0x24]; struct T *t; };
struct D { char pad[0x4b8]; int h; };
struct S { char pad[0xc]; struct C *c; struct D *d; char pad2[0x2a0 - 0x14]; unsigned char a0; unsigned char a1; char pad3[0x2d8 - 0x2a2]; int x; };

void fn_8231A9D8(struct S *s)
{
  struct T *t;
  unsigned char b;
  if (s->a1 == 0 || s->a0 != 0) b = 1; else b = 0;
  if (b && (t = s->c->t) != 0) {
    t->flag = b;
  }
  if (s->x != 0) {
    fn_823CC298(s->d->h, 0x1b);
  }
  fn_8236C6A0(s->d, s->c);
}
