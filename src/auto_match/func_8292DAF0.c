typedef unsigned int size_t;
void *fn_828F1108(void *d, const void *s, size_t n);
extern void fn_82B8FD40(void *p, void *dst);
extern void fn_82925600(void *p, void *dst);

typedef struct S {
  char pad0[0x10];
  int f10;
  char pad14[2];
  int f18;
  char pad1c[2];
  char *base;
  char pad24[0x3c];
  int stride0;
  int stride1;
  int count;
} S;

void fn_8292DAF0(S *p, int x, int y, void *dst)
{
  fn_828F1108(dst, p->base + p->stride0 * x + p->stride1 * y, p->count << 2);
  if (p->f18 != 0) {
    fn_82B8FD40(p, dst);
  }
  if (p->f10 != 0) {
    fn_82925600(p, dst);
  }
}
