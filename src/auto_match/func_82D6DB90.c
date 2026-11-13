struct Obj_82D6DB90;
typedef struct Vt_82D6DB90 { char pad[0x24]; void (*f24)(struct Obj_82D6DB90 *, void *); } Vt_82D6DB90;
typedef struct Obj_82D6DB90 { Vt_82D6DB90 *vt; } Obj_82D6DB90;
typedef struct Own_82D6DB90 { char pad[0xc]; Obj_82D6DB90 *fc; Obj_82D6DB90 *f10; } Own_82D6DB90;

void fn_82D6DB90(Own_82D6DB90 *o, void *a)
{
  o->fc->vt->f24(o->fc, a);
  if (o->f10 != 0) {
    o->f10->vt->f24(o->f10, a);
  }
}
