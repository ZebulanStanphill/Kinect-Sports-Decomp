typedef struct { int pad[2]; void *target; } Obj_82D958F8;
extern void fn_82D8EAD8(void *target, Obj_82D958F8 *self, int flag);

void fn_82D958F8(Obj_82D958F8 *self, Obj_82D958F8 *other)
{
  if (self->target == 0) {
    return;
  }
  fn_82D8EAD8(other->target, self, 1);
}
