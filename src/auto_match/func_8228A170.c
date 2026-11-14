typedef struct Obj_8228A170 {
  int f0;
  int pad4[3];
  void *f10;
} Obj_8228A170;

extern void fn_8228A190(void *a, Obj_8228A170 *o);

void fn_8228A170(Obj_8228A170 *self)
{
  if (self->f0 == 0)
    fn_8228A190(self->f10, self);
  else
    fn_8228A190(self->f10, self);
}
