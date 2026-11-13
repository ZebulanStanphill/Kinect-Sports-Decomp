typedef struct Inner { void (**vt)(struct Inner *, int); int pad[10]; int cnt; int pad30; unsigned char flags; } Inner;
typedef struct { int pad[2]; Inner *in; } Outer;
extern void fn_82FA9208(Inner *);
extern void fn_82FAA228(Outer *);
extern void fn_82FAAE50(void);
extern void fn_82FAB1D8(Outer *);

void fn_82FAB260(Outer *o)
{
  Inner *p = o->in;
  p->cnt = p->cnt + 1;
  if ((o->in->flags & 0x80) != 0) {
    if ((o->in->flags & 0x40) == 0) {
      fn_82FAAE50();
      fn_82FAA228(o);
      o->in->vt[4](o->in, 0x400);
    }
  } else {
    fn_82FAB1D8(o);
  }
  fn_82FA9208(o->in);
}
