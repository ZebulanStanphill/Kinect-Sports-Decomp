typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;
typedef struct { __vector4 col[4]; } Matrix4_82D0B8E8;
typedef struct {
  char pad0[0x120];
  Matrix4_82D0B8E8 inertia;   /* 0x120 */
  __vector4 com;              /* 0x160 */
  char pad170[0x1b0 - 0x170];
  int id;                     /* 0x1b0 */
  unsigned char hasMass;      /* 0x1b4 */
} HullData_82D0B8E8;
typedef struct {
  int x0;
  int x4;
  HullData_82D0B8E8 *data;
} Hull_82D0B8E8;
typedef struct Error_82D0B8E8 Error_82D0B8E8;
struct Error_82D0B8E8 {
  struct {
    void *slots[3];
    int (*message)(Error_82D0B8E8 *e, int kind, int id, const char *text, const char *file, int line);
  } *vt;
};
typedef struct { char d[16]; } Stream_82D0B8E8;
extern Error_82D0B8E8 *lbl_8323B464;
extern char lbl_821C24F0[];
extern void fn_82CEE578(Stream_82D0B8E8 *s, char *buf, int size);
extern Stream_82D0B8E8 *fn_82CEDB38(Stream_82D0B8E8 *s, const char *text);
extern Stream_82D0B8E8 *fn_82CEDCF0(Stream_82D0B8E8 *s, int v);
extern void fn_82CED958(Stream_82D0B8E8 *s);

void fn_82D0B8E8(Hull_82D0B8E8 *hull, Matrix4_82D0B8E8 *inertia, __vector4 *com)
{
  HullData_82D0B8E8 *d = hull->data;
  if (d->hasMass == 0) {
    Stream_82D0B8E8 s;
    char buf[0x200];
    fn_82CEE578(&s, buf, 0x200);
    fn_82CEDB38(fn_82CEDCF0(fn_82CEDB38(&s, "No mass properties available ("), d->id), lbl_821C24F0);
    if (lbl_8323B464->vt->message(lbl_8323B464, 3, 0x79f9d887, buf, ".\\GeometryProcessing\\ConvexHull\\hkgpConvexHull.cpp", 0x14c) != 0) {
      __debugbreak();
    }
    fn_82CED958(&s);
  }
  {
    const Matrix4_82D0B8E8 *m = &hull->data->inertia;
    inertia->col[0] = m->col[0];
    inertia->col[1] = m->col[1];
    inertia->col[2] = m->col[2];
    inertia->col[3] = m->col[3];
  }
  *com = hull->data->com;
}
