typedef struct Iface Iface;
typedef struct { void (*dtor)(Iface *self, int flags); } IfaceVtbl;
struct Iface { IfaceVtbl *vt; };

typedef struct { char pad[0x14]; Iface *obj; } Obj;

extern void *lbl_831BC768;
extern void fn_83022140(Iface *p);
extern void fn_82FA5190(void *heap, void *p);

void fn_83027F30(Obj *o)
{
  if (o->obj != 0) {
    fn_83022140(o->obj);
    o->obj->vt->dtor(o->obj, 0);
    fn_82FA5190(lbl_831BC768, o->obj);
    o->obj = 0;
  }
  fn_82FA5190(lbl_831BC768, o);
}
