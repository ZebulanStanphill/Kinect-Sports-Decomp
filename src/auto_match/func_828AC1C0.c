typedef struct Obj_828AC1C0 Obj_828AC1C0;
typedef struct {
  void *slots[5];
  void (*f14)(Obj_828AC1C0 *self, void *a, void *out);
} Vtbl_828AC1C0;
struct Obj_828AC1C0 { Vtbl_828AC1C0 *vt; };

extern void *fn_828ABE08(void *c);
extern void fn_828AC010(void *c, void *buf);

void fn_828AC1C0(Obj_828AC1C0 *o, void *a, void *c)
{
  unsigned char buf[16];
  void *r = fn_828ABE08(c);
  if (r != 0) {
    o->vt->f14(o, a, r);
  } else {
    o->vt->f14(o, a, buf);
    fn_828AC010(c, buf);
  }
}
