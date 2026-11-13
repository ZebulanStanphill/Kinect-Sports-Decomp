extern void fn_8223C478(void *a, void *b, int c);
extern void fn_828E9DB8(void *a, int n, void *b);
typedef struct { int pad0; int pad4; unsigned char f8; void *fc; } Obj_828AC3D8;
void fn_828AC3D8(Obj_828AC3D8 *self, void *a, unsigned char *b)
{
  void *t = self->fc;
  int n = *b - self->f8;
  fn_8223C478(a, t, 0);
  fn_828E9DB8(a, n, t);
}
