typedef struct Lock_82A43858 { struct LockVt_82A43858 *vt; } Lock_82A43858;
typedef struct LockVt_82A43858 { int pad[2]; void (*Enter)(Lock_82A43858 *); int pad2[2]; void (*Leave)(Lock_82A43858 *); } LockVt_82A43858;
typedef struct Owner_82A43858 { char pad[0x2c]; Lock_82A43858 lock; } Owner_82A43858;
typedef struct Prop_82A43858 { struct PropVt_82A43858 *vt; } Prop_82A43858;
typedef struct PropVt_82A43858 { int pad[2]; int (*Set)(Prop_82A43858 *, int, int, void *, int); } PropVt_82A43858;
typedef struct Obj_82A43858 { char pad[0x34]; Owner_82A43858 *owner; char pad2[0x58]; Prop_82A43858 *prop; char pad3[0x34]; float max; } Obj_82A43858;
extern float lbl_820143E0;
int fn_82A43858(Obj_82A43858 *o, float v, int key)
{
  int r;
  o->owner->lock.vt->Enter(&o->owner->lock);
  v = v < lbl_820143E0 ? lbl_820143E0 : v > o->max ? (v < lbl_820143E0 ? lbl_820143E0 : o->max) : v;
  r = o->prop->vt->Set(o->prop, 1, key, &v, 4);
  o->owner->lock.vt->Leave(&o->owner->lock);
  return r;
}
