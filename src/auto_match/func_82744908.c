typedef struct V2_82744908 { double x, y; } V2_82744908;
typedef struct Ctx_82744908 { char pad[0x78]; char sub[8]; } Ctx_82744908;
typedef struct Self_82744908 { int pad0; void *f4; int pad1[4]; Ctx_82744908 *ctx; int count; } Self_82744908;
extern void *fn_8267B890(void *, int, int);
extern void *fn_82744378(void *, void *);
extern void *fn_826957D0(void *, int);
extern void fn_82695DA0(void *, void *);
extern double fn_826972E0(void *, void *);
extern double sin(double x);
extern double cos(double x);
extern void fn_82743888(void *, void *, V2_82744908 *);
extern void fn_82696330(void *);
extern void fn_82743808(void *, void *, void *);
extern void fn_82696BC8(void *, void *);
extern void fn_826824B0(void *);
extern char lbl_831F12E8[];

void fn_82744908(Self_82744908 *self)
{
  void *obj;
  unsigned char done;
  V2_82744908 v;
  char radiusArg[0x10];
  char angleArg[0x10];
  double radius;
  double angle;
  void *o;

  o = fn_8267B890(*(void **)(*(int *)((char *)self->ctx + 0x78) + 0x288), 0x30, 0);
  if (o != 0) obj = fn_82744378(o, self->ctx);
  else obj = 0;
  done = 0;
  if (self->count > 1) {
    fn_82695DA0(radiusArg, fn_826957D0(self, 0));
    fn_82695DA0(angleArg, fn_826957D0(self, 1));
    radius = fn_826972E0(radiusArg, self->ctx);
    angle = fn_826972E0(angleArg, self->ctx);
    {
      double s = sin(angle);
      v.x = cos(angle) * radius;
      v.y = s * radius;
    }
    fn_82743888(obj, self->ctx, &v);
    done = 1;
    fn_82696330(angleArg);
    fn_82696330(radiusArg);
  }
  if (!done) {
    fn_82743808(obj, (char *)self->ctx + 0x78, lbl_831F12E8);
  }
  fn_82696BC8(self->f4, obj);
  if (obj != 0) fn_826824B0(obj);
}
