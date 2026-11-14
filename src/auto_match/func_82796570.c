extern void fn_8267BE38(void *);
extern unsigned char fn_8278FD18(void *);
extern void fn_82794B38(void *);
extern void *fn_82794B88(void *);
extern void *fn_827961E0(void *, void *);
extern void fn_82796170(void *, void *);
typedef struct Node_82796570 { int f0; unsigned int f4; char pad[0x14]; int f1c; } Node;
typedef struct Vec_82796570 { Node **data; unsigned int count; } Vec;
typedef struct Self_82796570 { char pad[0xc]; Vec v; } Self;
Node *fn_82796570(Self *s, void *arg)
{
  Node *last;
  unsigned int total = 0;
  void *r;
  void *h;
  Vec *v;
  if (s->v.count != 0) {
    Node *n = s->v.data[s->v.count - 1];
    unsigned int a = n->f4;
    unsigned int b = n->f1c;
    unsigned int len = a;
    if (a != 0 && fn_8278FD18(n) != 0) len = a - 1;
    total = len + b;
  }
  r = fn_827961E0(fn_82794B88(s), arg);
  v = &s->v;
  fn_82796170(v, &r);
  if (r != 0) {
    fn_82794B38(r);
    fn_8267BE38(r);
  }
  last = v->data[s->v.count - 1];
  last->f1c = total;
  return last;
}
