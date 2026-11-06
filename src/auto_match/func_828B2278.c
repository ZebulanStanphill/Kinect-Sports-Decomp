extern unsigned char fn_828B2148(void);

struct Obj_828B2278;
typedef struct VT_828B2278 {
  void *slots[14];
  int (*f38)(struct Obj_828B2278 *self, void *arg);
} VT_828B2278;
typedef struct Obj_828B2278 {
  VT_828B2278 *vt;
} Obj_828B2278;
typedef struct Holder_828B2278 {
  int pad0;
  Obj_828B2278 *obj;
} Holder_828B2278;

unsigned int fn_828B2278(Holder_828B2278 *self, void *arg)
{
  Obj_828B2278 *o;

  if (fn_828B2148() == 0) return 0; o = self->obj; if (o == 0) return 0; return o->vt->f38(o, arg) != 0;
}
