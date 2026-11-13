typedef struct { void *pad[5]; void (*f14)(void *, int, int); } VtA_82D67540;
typedef struct { VtA_82D67540 *vt; } ObjA_82D67540;
typedef struct { void (*f0)(void *, int); } VtB_82D67540;
typedef struct {
  VtB_82D67540 *vt;
  int f4;
  ObjA_82D67540 *owner;
  unsigned short id;
} ObjB_82D67540;

void fn_82D67540(ObjB_82D67540 *param_1, int param_2)
{
  if (param_1->id != 0xffff) {
    param_1->owner->vt->f14(param_1->owner, param_1->id, param_2);
    param_1->id = 0xffff;
  }
  param_1->vt->f0(param_1, 1);
}
