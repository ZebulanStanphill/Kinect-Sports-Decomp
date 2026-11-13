typedef struct Obj_82F95FB0 { void *target; unsigned int value; } Obj_82F95FB0;
extern void fn_82668E70(Obj_82F95FB0 *self);

Obj_82F95FB0 *fn_82F95FB0(Obj_82F95FB0 *self, unsigned int value, void *target)
{
  fn_82668E70(self);
  self->value = value;
  if (target == 0)
    __debugbreak();
  self->target = target;
  return self;
}
