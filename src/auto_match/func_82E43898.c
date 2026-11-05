typedef struct Unk Unk;
typedef struct UnkVt {
  int (*Query)(Unk *, const void *, Unk **);
  void *pad;
  void (*Release)(Unk *);
  void *pad2[5];
  int (*f20)(Unk *, const void *);
} UnkVt;
struct Unk { UnkVt *vt; };
typedef struct Obj_82E43898 {
  char pad[0x18];
  Unk *u18;
  Unk *u1c;
  char pad2[0x5c];
  Unk *u7c;
  Unk *u80;
} Obj;
extern char lbl_82154C18[];
extern char lbl_8202E618[];

int fn_82E43898(Obj *o)
{
  int hr = 0;
  Unk *q = 0;
  if (o->u80 != 0) {
    o->u80->vt->Release(o->u80);
    o->u80 = 0;
  }
  if (o->u1c != 0) {
    o->u1c->vt->Release(o->u1c);
    o->u1c = 0;
  }
  if (o->u7c != 0) {
    o->u7c->vt->Release(o->u7c);
    o->u7c = 0;
  }
  if (o->u18 != 0) {
    hr = o->u18->vt->Query(o->u18, lbl_82154C18, &q);
    if (hr >= 0)
      hr = q->vt->f20(q, lbl_8202E618);
  }
  if (q != 0)
    q->vt->Release(q);
  return hr;
}
