typedef struct Node_82BA0B10 {
  char pad0[0xc];
  int fc;
  char pad10[0x10];
  int f20;
} Node_82BA0B10;

typedef struct { int a, b, c, d; Node_82BA0B10 *cur; Node_82BA0B10 *saved; } Iter_82BA0B10;

typedef struct Msg_82BA0B10 Msg_82BA0B10;
typedef struct {
  char pad[0x58];
  void (*f58)(Msg_82BA0B10 *, int, int, int);
} VT_82BA0B10;
struct Msg_82BA0B10 { VT_82BA0B10 *vt; };

typedef struct {
  char pad0[0xc];
  int fc;
  char pad10[0xa4 - 0x10];
  int fa4;
  char pada8[4];
  int *fac;
} Obj_82BA0B10;

extern int fn_82BA0AC8(Obj_82BA0B10 *);
extern int fn_82BAFE48(void *, int, int);
extern void fn_82BC0618(Iter_82BA0B10 *);
extern void fn_82BC06D0(Iter_82BA0B10 *, int);
extern Msg_82BA0B10 *fn_82BC24F0(int, int);
extern void fn_82BC2958(Msg_82BA0B10 *, int, int);
extern void fn_82BC5538(int, Msg_82BA0B10 *);

void fn_82BA0B10(Obj_82BA0B10 *self)
{
  Iter_82BA0B10 it;
  Node_82BA0B10 *n;
  int mine;
  int i;
  int k;
  int t;
  Msg_82BA0B10 *m;

  mine = fn_82BA0AC8(self);
  *((char *)self + 0x819) = 1;
  fn_82BC06D0(&it, self->fac[1]);
  for (; (n = it.cur, it.saved = n, n != 0); fn_82BC0618(&it)) {
    for (i = 0; i < 2; i++) {
      t = ((i == 0) ^ 1) + 0x15;
      if (n->f20 == t && n->fc == 0) {
        m = fn_82BC24F0(0x26, self->fc);
        fn_82BC2958(m, 0, (int)n);
        fn_82BC2958(m, 1, mine);
        for (k = 0; k < 4; k++) m->vt->f58(m, 1, k, 0);
        fn_82BC2958(m, 2, (int)n);
        fn_82BC2958(m, 3, fn_82BAFE48(self->fac, t, 1));
        fn_82BC5538(self->fa4, m);
      }
    }
  }
}
