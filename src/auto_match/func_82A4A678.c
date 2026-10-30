struct VT_82A4A678 { int p[13]; void (*f34)(void *, void *); int q[5]; void (*f1c_)(void); };
struct Dev_82A4A678 { int *vt; };
struct Cx_82A4A678 { char p0[0xb0]; struct Dev_82A4A678 *dev; };
struct O_82A4A678 { char p0[0x30]; struct Cx_82A4A678 *cx; char p1[0x54]; void *f88; void *f8c; void *f90; };
extern void fn_82A518E0(void *);
void fn_82A4A678(struct O_82A4A678 *o)
{
  if (o->f8c != 0) {
    struct Dev_82A4A678 *d = o->cx->dev;
    ((void (*)(void *, void *))d->vt[0x34 / 4])(d, o->f8c);
    o->f8c = 0;
  }
  if (o->f90 != 0) {
    struct Dev_82A4A678 *d = o->cx->dev;
    ((void (*)(void *, void *))d->vt[0x34 / 4])(d, o->f90);
    o->f90 = 0;
  }
  fn_82A518E0(o);
  if (o->f88 != 0) {
    struct Dev_82A4A678 *d = o->cx->dev;
    ((void (*)(void *, void *))d->vt[0x1c / 4])(d, o->f88);
  }
}
