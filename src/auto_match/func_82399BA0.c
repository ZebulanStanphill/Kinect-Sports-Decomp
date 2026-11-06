typedef struct Elem_82399BA0 { char pad[0x20]; float v; } Elem_82399BA0;
typedef struct Arr_82399BA0 { Elem_82399BA0 **data; int pad[3]; int idx; } Arr_82399BA0;
typedef struct Pair_82399BA0 { Arr_82399BA0 *a; Arr_82399BA0 *b; } Pair_82399BA0;
struct Target_82399BA0;
typedef struct TargetVt_82399BA0 { void *slots[10]; int (*f28)(struct Target_82399BA0 *, int, int); } TargetVt_82399BA0;
typedef struct Target_82399BA0 { TargetVt_82399BA0 *vt; } Target_82399BA0;
typedef struct Self_82399BA0 { int f0; int f4; Pair_82399BA0 **pairs; char pad[0x2d4]; Target_82399BA0 *target; } Self_82399BA0;

int fn_82399BA0(Self_82399BA0 *self)
{
  Arr_82399BA0 *a;
  Arr_82399BA0 *b;
  if (self->target != 0) {
    b = (*self->pairs)->b;
    a = (*self->pairs)->a;
    return self->target->vt->f28(self->target, (int)a->data[a->idx]->v, (int)b->data[b->idx]->v);
  }
  return 0;
}
