struct Itf_82C04450;
typedef struct { void *f0; void (*AddRef)(struct Itf_82C04450 *); } Vt_82C04450;
typedef struct Itf_82C04450 { Vt_82C04450 *vt; } Itf_82C04450;
typedef struct { char pad[0x38]; Itf_82C04450 *a; Itf_82C04450 *b; Itf_82C04450 *c; } Obj_82C04450;

int fn_82C04450(Obj_82C04450 *o, Itf_82C04450 **pa, Itf_82C04450 **pb, Itf_82C04450 **pc)
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
