struct VT_826E6E40;
typedef struct Obj_826E6E40 { struct VT_826E6E40 *vt; } Obj_826E6E40;
typedef struct VT_826E6E40 {
  void *f0[4];
  unsigned (*f10)(Obj_826E6E40 *);
  void *f14[9];
  void (*f38)(Obj_826E6E40 *, unsigned, int);
} VT_826E6E40;
typedef struct { Obj_826E6E40 *o; int p4; unsigned n; } Self_826E6E40;
void fn_826E6E40(Self_826E6E40 *s)
{
  if (s->n > 0) {
    unsigned v = s->o->vt->f10(s->o);
    s->o->vt->f38(s->o, v - s->n, 0);
  }
}
