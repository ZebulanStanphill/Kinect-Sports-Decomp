struct Obj_82D6DC00;
typedef struct Vt_82D6DC00 { char pad[0x28]; void (*f28)(struct Obj_82D6DC00 *, float,float,void *); } Vt_82D6DC00;
typedef struct Obj_82D6DC00 { Vt_82D6DC00 *vt; } Obj_82D6DC00;
typedef struct Own_82D6DC00 { char pad[0xc]; Obj_82D6DC00 *fc; Obj_82D6DC00 *f10; } Own_82D6DC00;

void fn_82D6DC00(Own_82D6DC00 *o, float x,float y,void *a)
{
  o->fc->vt->f28(o->fc, x,y,a);
  if (o->f10 != 0) {
    o->f10->vt->f28(o->f10, x,y,a);
  }
}
