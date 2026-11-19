typedef struct { void *pad[5]; void (*f14)(void *, int, int); } VtA_82D67540;
typedef struct { VtA_82D67540 *vt; } ObjA_82D67540;
typedef struct { void (*f0)(void *, int); } VtB_82D67540;
typedef struct {
  VtB_82D67540 *vt;
  int f4;
  ObjA_82D67540 *owner;
  unsigned short id;
} ObjB_82D67540;

void fn_82D67540(ObjB_82D67540 *self, int param_2)
{
  if (self->id != 0xffff) {
    self->owner->vt->f14(self->owner, self->id, param_2);
    self->id = 0xffff;
  }
  self->vt->f0(self, 1);
}
