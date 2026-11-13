typedef struct Val_822766D0 { int w0; int type; union { void *p; unsigned char b; double d; } u; } Val_822766D0;
typedef struct Ref_822766D0 { void *p; void *rc; } Ref_822766D0;
typedef struct Obj_822766D0 { void *vt; } Obj_822766D0;
typedef struct G_822766D0 { int pad0; int h4; } G_822766D0;

extern void *memset(void *, int, unsigned);
extern void fn_822761F8(Obj_822766D0 *, int, void *);
extern unsigned short lbl_820E975C;
extern char lbl_821A8120[];
extern G_822766D0 lbl_83276728;
extern void fn_82528BF8(int, void *, void *, int, int, int);
extern void fn_82273CD8(Val_822766D0 *, int);
extern void fn_82273C88(Val_822766D0 *);
extern Ref_822766D0 *fn_82279C58(Ref_822766D0 *, Obj_822766D0 *);
extern void fn_82672C20(void *, const char *, Val_822766D0 *, int);
extern void fn_822315A0(void *);

Obj_822766D0 *fn_822766D0(Obj_822766D0 *o, int a, char *q)
{
  Val_822766D0 v;
  Ref_822766D0 r;
  unsigned short buf[0x800];

  fn_822761F8(o, a, q + 4);
  o->vt = lbl_821A8120;
  buf[0] = lbl_820E975C;
  memset(buf + 1, 0, 0xffe);
  v.w0 = 0;
  v.type = 0;
  fn_82528BF8(lbl_83276728.h4, q + 0x2c, buf, 0x800, 0, 1);
  fn_82273CD8(&v, 5);
  v.u.p = buf;
  fn_82672C20(fn_82279C58(&r, o)->p, "_root.SetScreenText", &v, 1);
  if (r.rc != 0) {
    fn_822315A0(r.rc);
  }
  fn_82273C88(&v);
  return o;
}
