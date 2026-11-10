typedef struct Cylinder_82D40A10 {
  void *vt;
  int f4, f8, fc;
  float radius;
  float cylRadius;
  float f18, f1c;
  float vertexA[4];
  float vertexB[4];
} Cylinder_82D40A10;

void fn_82D40A10(Cylinder_82D40A10 *self, float r)
{
  float *a, *b;
  self->cylRadius = r;
  a = self->vertexA;
  a[3] = self->radius + r;
  b = self->vertexB;
  b[3] = self->radius + r;
}
