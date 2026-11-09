typedef struct Obj_82861F88 { char pad0[0x114]; float a, b, c, d; } Obj_82861F88;

void fn_82861F88(const Obj_82861F88 *self, float *a, float *b, float *c, float *d)
{
  *a = self->a;
  *b = self->b;
  *c = self->c;
  *d = self->d;
}
