typedef struct Obj_82FEF648 {
  char pad0[0x68];
  void *target;
} Obj_82FEF648;

extern int fn_83000748(void *target, void *item, int a, int b);

int fn_82FEF648(Obj_82FEF648 *self, void *item)
{
  int r = 0;
  if (item == 0)
    return 1;
  if (self->target != 0)
    r = fn_83000748(self->target, item, 0, 0);
  return r;
}
