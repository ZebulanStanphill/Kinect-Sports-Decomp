struct Iface_82236140;
typedef struct IfaceVt_82236140 {
  void *slots[4];
  unsigned int (*f10)(struct Iface_82236140 *);
  unsigned int (*f14)(struct Iface_82236140 *);
} IfaceVt_82236140;
typedef struct Iface_82236140 { IfaceVt_82236140 *vt; } Iface_82236140;
typedef struct Buf_82236140 { int f0; int f4; union { int *ptr; int buf[1]; } u; unsigned int f0c; } Buf_82236140;
typedef struct Self_82236140 {
  int f0;
  Buf_82236140 name;
  int f14;
  int f18;
  int f1c;
  Iface_82236140 *iface;
  int f24;
  int f28;
} Self_82236140;
extern int fn_8289D8D0(int);
extern int *fn_82236200(Self_82236140 *self, int v);
static __forceinline int *Buf_ptr(Buf_82236140 *b) { int *p; if (b->f0c <= 4) p = b->u.buf; else p = b->u.ptr; return p; }
static __forceinline unsigned int Self_query10(Self_82236140 *s) { return s->iface != 0 ? s->iface->vt->f10(s->iface) : 0; }
static __forceinline unsigned int Self_query14(Self_82236140 *s) { return s->iface != 0 ? s->iface->vt->f14(s->iface) : 0; }

int *fn_82236140(Self_82236140 *self)
{
  int *r;
  if (!Self_query10(self) && !Self_query14(self)) {
    r = Buf_ptr(&self->name);
  } else {
    r = fn_82236200(self, fn_8289D8D0(self->f28));
  }
  return r;
}
