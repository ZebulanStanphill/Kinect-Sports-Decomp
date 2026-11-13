extern void fn_8265CA20(void *);
extern char lbl_8217C608[];
extern char lbl_8217D040[];
typedef struct Iface Iface;
typedef struct { char pad[8]; void (*f8)(Iface *); } IVT;
struct Iface { IVT *vt; };
typedef struct { char pad[0x48]; Iface *ptr; } Sub;
typedef struct { void *vt; char pad[0x48]; Iface *p4c; } Obj;

static __forceinline void Rel(Sub *s) { if (s->ptr != 0) { s->ptr->vt->f8(s->ptr); } }
Obj *fn_83027710(Obj *self, unsigned flags)
{
  self->vt = lbl_8217C608;
  Rel((Sub *)((char *)self + 4));
  self->vt = lbl_8217D040;
  if ((flags & 1) != 0) fn_8265CA20(self);
  return self;
}
