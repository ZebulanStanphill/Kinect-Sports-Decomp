struct Itf_82C04398;
typedef struct { void *f0; void (*AddRef)(struct Itf_82C04398 *); } Vt_82C04398;
typedef struct Itf_82C04398 { Vt_82C04398 *vt; } Itf_82C04398;
typedef struct { char pad[0x2c]; Itf_82C04398 *a; Itf_82C04398 *b; Itf_82C04398 *c; } Obj_82C04398;

int fn_82C04398(Obj_82C04398 *o, Itf_82C04398 **pa, Itf_82C04398 **pb, Itf_82C04398 **pc)
{
  if (pa != 0) {
    if (o->a != 0) o->a->vt->AddRef(o->a);
    *pa = o->a;
  }
  if (pb != 0) {
    if (o->b != 0) o->b->vt->AddRef(o->b);
    *pb = o->b;
  }
  if (pc != 0) {
    if (o->c != 0) o->c->vt->AddRef(o->c);
    *pc = o->c;
  }
  return 0;
}
