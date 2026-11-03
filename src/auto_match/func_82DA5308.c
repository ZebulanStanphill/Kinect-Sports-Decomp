typedef struct { void *f0; void *f4; void (*f8)(void *, int, int); } SinkVt;
typedef struct { SinkVt *vt; } Sink;
typedef struct { char pad[0x10]; Sink *sink; } Mgr;
typedef struct { unsigned __int64 lo, hi; } Q;
typedef struct {
  char pad[0x50];
  Q q;
  char pad60[4];
  unsigned ref;
  char tail[0x14];
} Local;
typedef struct {
  char pad0[0x78];
  int h78;
  char pad7c[0x10];
  int a8c;
  int a90;
  int cnt;
  char pad98[4];
  unsigned char flag;
  char pad9d[7];
  int mode;
} Obj;
extern void fn_82D9C790(Local *, int);
extern void fn_82DA4850(int, int, Obj *);
extern void fn_82DA4100(int, int, int, Local *, void *, int);
extern void fn_82D80C18(Obj *);
extern void fn_82D80C30(Obj *);
extern Mgr *fn_82CE5410(void);
extern void fn_82DA3EF8(void);

void fn_82DA5308(int p1, int p2, int p3, Obj *o, Q *src, int p6)
{
  Local l;
  int n;
  fn_82D9C790(&l, o->h78);
  l.q = *src;
  o->cnt = o->cnt + 1;
  fn_82DA4850(p2, p3, o);
  fn_82DA4100(p1, p2, p3, &l, (void *)fn_82DA3EF8, p6);
  n = o->cnt - 1;
  o->cnt = n;
  if (n == 0 && o->flag == 0) {
    if (o->a8c != 0) {
      fn_82D80C18(o);
    }
    if (o->mode == 1 && o->a90 != 0) {
      fn_82D80C30(o);
    }
  }
  if (l.ref != 0) {
    Sink *s = fn_82CE5410()->sink;
    s->vt->f8(s, l.ref, 0x200);
  }
}
