typedef struct Val_822761F8 { int w0; int type; union { void *p; unsigned char b; double d; } u; } Val_822761F8;
typedef struct Ref_822761F8 { void *p; void *rc; } Ref_822761F8;
typedef struct Obj_822761F8 { void *vt; } Obj_822761F8;
typedef struct G_822761F8 { int pad0; int h4; } G_822761F8;
typedef struct Func_822761F8 {
  void *vt;
  int val;
  int pad[2];
  void *self;
} Func_822761F8;

extern void *memset(void *, int, unsigned);
extern int fn_82279768(void *, void *, int, int, int, void *, int, int, int, int);
extern unsigned short lbl_820E975C;
extern char lbl_821A89BC[];
extern G_822761F8 lbl_83276728;
extern void fn_82528BF8(int, void *, void *, int, int, int);
extern void fn_82273CD8(Val_822761F8 *, int);
extern void fn_82273C88(Val_822761F8 *);
extern Ref_822761F8 *fn_82279C58(Ref_822761F8 *, Obj_822761F8 *);
extern void fn_82672C20(void *, const char *, Val_822761F8 *, int);
extern void fn_822315A0(void *);

Obj_822761F8 *fn_822761F8(Obj_822761F8 *o, void *a, char *q)
{
  Val_822761F8 v;
  Ref_822761F8 r;
  Func_822761F8 f;
  unsigned short buf[0x100];

  f.self = 0;
  fn_82279768(o, a, 0, 1, 1, &f, 0, 1, 0, 0);
  o->vt = lbl_821A89BC;
  buf[0] = lbl_820E975C;
  memset(buf + 1, 0, 0x1fe);
  v.w0 = 0;
  v.type = 0;
  fn_82528BF8(lbl_83276728.h4, q + 4, buf, 0x100, 0, 1);
  fn_82273CD8(&v, 5);
  v.u.p = buf;
  fn_82672C20(fn_82279C58(&r, o)->p, "_root.SetTitleText", &v, 1);
  if (r.rc != 0) {
    fn_822315A0(r.rc);
  }
  fn_82273C88(&v);
  return o;
}
