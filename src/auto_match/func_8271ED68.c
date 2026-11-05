struct Ent_func_8271ED68;
typedef struct {
  int pad[47];
  unsigned char (*fbc)(struct Ent_func_8271ED68 *);
} VT_func_8271ED68;
typedef struct Ent_func_8271ED68 {
  VT_func_8271ED68 *vt;
  int refs;
} Ent_func_8271ED68;

typedef struct {
  int pad0;
  unsigned char *q;
  int pad1[4];
  unsigned f18;
  int f1c;
} Obj_func_8271ED68;

typedef struct {
  Ent_func_8271ED68 *p;
  int x;
} Ref_func_8271ED68;

extern void fn_8267C498(void *);
extern unsigned char fn_82695608(unsigned, unsigned);
extern unsigned fn_826957D0(Obj_func_8271ED68 *, int);
extern void fn_826959C8(unsigned char *);
extern void fn_82696480(unsigned char *, Ent_func_8271ED68 *);
extern unsigned fn_826A7398(unsigned);
extern void fn_826FD288(unsigned);
extern void fn_826FE738(unsigned, Ent_func_8271ED68 *);
extern void fn_82701CA0(unsigned);
extern Ent_func_8271ED68 **fn_82711FA8(Ent_func_8271ED68 **, unsigned);


void fn_8271ED68(Obj_func_8271ED68 *o)
{
  unsigned char *q = o->q;
  unsigned char ok;
  unsigned u;
  Ent_func_8271ED68 *e;
  Ent_func_8271ED68 *slot;
  Ent_func_8271ED68 *tmp;
  Ent_func_8271ED68 **h;
  int iv;

  fn_826959C8(q);
  *q = 0;
  if (o->f1c >= 1)
    ok = fn_82695608(fn_826957D0(o, 0), o->f18);
  else
    ok = 1;
  u = fn_826A7398(o->f18);
  fn_82711FA8(&slot, u);
  e = slot;
  if (slot == 0) {
    fn_82701CA0(u);
    h = fn_82711FA8(&tmp, u);
    iv = (int)*h;
    if (iv != 0)
      (*h)->refs = (*h)->refs + 1;
    e = *h;
    if (tmp != 0)
      fn_8267C498(tmp);
  }
  if (ok != 0) {
    if (e == 0)
      return;
    if (e->vt->fbc(e) != 0)
      fn_826FE738(u, e);
  } else {
    fn_826FD288(u);
  }
  if (e != 0) {
    fn_82696480(o->q, e);
    fn_8267C498(e);
  }
}
