extern int fn_8267C4C8();
extern int fn_8268C2D0();

typedef struct {
  int f0;
  int f4;
  int f8;
  int fc;
  float f10;
  void *f14;
  void *f18;
} Obj_82753860;

Obj_82753860 *fn_82753860(Obj_82753860 *d, Obj_82753860 *s)
{
  d->f0 = 1;
  d->f4 = s->f4;
  d->f8 = s->f8;
  fn_8268C2D0(&d->fc, &s->fc);
  d->f10 = s->f10;
  if (s->f14 != 0) {
    fn_8267C4C8(s->f14);
  }
  d->f14 = s->f14;
  if (s->f18 != 0) {
    fn_8267C4C8(s->f18);
  }
  d->f18 = s->f18;
  return d;
}
