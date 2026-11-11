extern void fn_8268CC00(float *);
/* 2D bounds reset to empty (min = +1e30, max = -1e30) followed by a 2x3 matrix set to identity.
   The two constants are the float literals 1e30f and -1e30f. */
typedef struct Bounds_8270D748 { float minX, minY, maxX, maxY; float matrix[6]; } Bounds_8270D748;
Bounds_8270D748 *fn_8270D748(Bounds_8270D748 *p)
{
  p->minX = 1e30f;
  p->minY = 1e30f;
  p->maxX = -1e30f;
  p->maxY = -1e30f;
  fn_8268CC00(p->matrix);
  return p;
}
