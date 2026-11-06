struct Obj_82E73718;
typedef struct Vt_82E73718 {
  void *slot0;
  void (*AddRef)(struct Obj_82E73718 *);
  void (*Release)(struct Obj_82E73718 *);
} Vt_82E73718;
typedef struct Obj_82E73718 {
  Vt_82E73718 *vt;
} Obj_82E73718;
typedef struct Holder_82E73718 {
  char pad[0x2c];
  unsigned int count;
  int pad2;
  Obj_82E73718 *obj;
} Holder_82E73718;

int fn_82E73718(Holder_82E73718 *param_1, Obj_82E73718 **param_2)
{
  Obj_82E73718 *o;
  if (param_2 != 0) {
    *param_2 = 0;
  }
  if (param_1->count > 0) {
    return 0xc00d36bb;
  }
  if (param_1->obj == 0) {
    return 0xc00d36b2;
  }
  o = param_1->obj;
  if (param_2 != 0 && ((*param_2 = o), o != 0)) {
    o->vt->AddRef(o);
  }
  if (param_1->obj != 0) {
    param_1->obj->vt->Release(param_1->obj);
    param_1->obj = 0;
  }
  return 0;
}
