typedef struct Obj_82860FF0 { char pad0[0x114]; float a, b, c, d; } Obj_82860FF0;

void fn_82860FF0(const Obj_82860FF0 *self, float *a, float *b, float *c, float *d)
{
  *a = self->a;
  *b = self->b;
  *c = self->c;
  *d = self->d;
}
