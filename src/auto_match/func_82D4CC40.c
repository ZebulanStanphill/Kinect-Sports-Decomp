typedef struct {
  char pad0[0x10];
  float f10;
  int a14;
  char pad18[8];
  unsigned a20;
  char pad24[0x1c];
  int a40;
  char pad44[0xc];
} T_82D4CC40;
typedef struct { char ok; char pad[15]; } R_82D4CC40;
typedef struct Obj_82D4CC40 Obj_82D4CC40;
typedef struct {
  char pad[0x20];
  void (*slot20)(R_82D4CC40 *, Obj_82D4CC40 *, int, T_82D4CC40 *);
} Vt_82D4CC40;
struct Obj_82D4CC40 { Vt_82D4CC40 *vt; };
typedef struct Dst_82D4CC40 Dst_82D4CC40;
typedef struct {
  void (*slot0)(Dst_82D4CC40 *, int *, T_82D4CC40 *);
} DVt_82D4CC40;
struct Dst_82D4CC40 { DVt_82D4CC40 *vt; float f4; };

extern void fn_82CE5110(T_82D4CC40 *, int, T_82D4CC40 *);

void fn_82D4CC40(Obj_82D4CC40 *self, int p2, int *p3, Dst_82D4CC40 *dst)
{
  T_82D4CC40 t;
  t.f10 = dst->f4;
  t.a14 = -1;
  t.a40 = 0;
  t.a20 = -1;
  {
    R_82D4CC40 r;
    self->vt->slot20(&r, self, p2, &t);
    if (r.ok != 0) {
      fn_82CE5110(&t, p3[2], &t);
      dst->vt->slot0(dst, p3, &t);
    }
  }
}
