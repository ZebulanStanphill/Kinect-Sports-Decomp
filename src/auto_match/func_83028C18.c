typedef unsigned int uint;
typedef struct { char pad[0x28]; unsigned short f28; unsigned short f2a; } Node;
typedef struct { int f0; Node *node; } Pair;
typedef struct { char pad[0x88]; Pair *begin; Pair *end; } S;
typedef struct { char pad[0x74]; uint f74; char pad2[0x80 - 0x78]; unsigned char f80; } T;
extern void *lbl_832645D0;
extern unsigned char fn_8300DC90(void *, unsigned short, unsigned short);
extern void fn_82FF3150(S *, Node *, T *);

int fn_83028C18(S *s, T *t)
{
  void *m;
  Pair *p;

  t->f80 = 1;
  t->f74 = t->f74 >> 7 & 0x3fffff;
  m = lbl_832645D0;
  if (m != 0) {
    for (p = s->begin; p != s->end; p++) {
      if (fn_8300DC90(m, p->node->f28, p->node->f2a)) {
        fn_82FF3150(s, p->node, t);
      }
    }
  }
  return 1;
}
