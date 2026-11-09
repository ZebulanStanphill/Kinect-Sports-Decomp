typedef struct Obj_82FEBD38 Obj_82FEBD38;
typedef struct {
  void *slot0;
  int (*method)(Obj_82FEBD38 *self);
} ObjVtbl_82FEBD38;
struct Obj_82FEBD38 { ObjVtbl_82FEBD38 *vt; };
extern Obj_82FEBD38 *lbl_832643B0;

int fn_82FEBD38(void)
{
  Obj_82FEBD38 *o = lbl_832643B0;
  if (o != 0) {
    return o->vt->method(o);
  }
  return 0;
}
