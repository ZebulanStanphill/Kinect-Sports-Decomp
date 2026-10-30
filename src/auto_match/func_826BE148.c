typedef struct { int pad0; int pad4; int refs; } Rc_826BE148;
typedef struct { char b[0x10]; } Q_826BE148;
typedef struct { Rc_826BE148 *rc; int pad; Q_826BE148 q; Q_826BE148 r; } Dst_826BE148;
typedef struct { char pad[0x10]; Q_826BE148 r; } SrcQ_826BE148;
typedef struct { Rc_826BE148 **pp; SrcQ_826BE148 *src; } Src_826BE148;
extern void fn_826944C8(Rc_826BE148 *);
extern void fn_826C3768(Q_826BE148 *, void *);
extern void fn_82695FA0(Q_826BE148 *, void *);

void fn_826BE148(Dst_826BE148 *d, Src_826BE148 *s)
{
  Rc_826BE148 *n = *s->pp;
  Q_826BE148 *q;
  Rc_826BE148 *old;
  SrcQ_826BE148 *sp;
  n->refs++;
  old = d->rc;
  if (--old->refs == 0)
    fn_826944C8(old);
  d->rc = n;
  q = &d->q;
  sp = s->src;
  fn_826C3768(q, sp);
  fn_82695FA0(q + 1, &sp->r);
}
