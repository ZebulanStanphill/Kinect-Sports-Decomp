typedef struct Val_822762E8 { int w0; int type; union { void *p; unsigned char b; double d; } u; } Val_822762E8;
typedef struct Ref_822762E8 { void *p; void *rc; } Ref_822762E8;
typedef struct Obj_822762E8 { void *vt; char pad[0x12c]; void *m130; int m134; } Obj_822762E8;
typedef struct Q_822762E8 { char pad0[0x2c]; char name[0x20]; char pad1[0x4c - 0x4c]; } Q_822762E8;
typedef struct G_822762E8 { int pad0; int h4; } G_822762E8;
typedef struct Item_822762E8 { char pad[0x14]; void *sub; } Item_822762E8;

typedef struct L_822762E8 {
  int v50;
  int pad54[3];
  Val_822762E8 v1;
  Val_822762E8 v2;
  Ref_822762E8 r80;
  Ref_822762E8 r88;
  Ref_822762E8 r90;
  Ref_822762E8 r98;
  unsigned short buf[0x800];
} L_822762E8;

extern void *memset(void *, int, unsigned);
extern void fn_822761F8(Obj_822762E8 *, int, void *);
extern unsigned short lbl_820E975C;
extern char lbl_821A8118[];
extern G_822762E8 lbl_83276728;
extern void fn_82528BF8(int, void *, void *, int, int, int);
extern void fn_82273CD8(Val_822762E8 *, int);
extern void fn_82273C88(Val_822762E8 *);
extern Ref_822762E8 *fn_82279C58(Ref_822762E8 *, Obj_822762E8 *);
extern void fn_82672C20(void *, const char *, Val_822762E8 *, int);
extern void fn_826728E8(void *, const char *, int);
extern void fn_822315A0(void *);
extern Item_822762E8 *fn_8251F720(void *, int);
extern void fn_82837D98(void *, int, int *);

Obj_822762E8 *fn_822762E8(Obj_822762E8 *o, int a, char *q, unsigned char c)
{
  L_822762E8 L;
  Item_822762E8 *it;
  void *rc;
  unsigned char flag;

  fn_822761F8(o, a, q + 4);
  o->vt = lbl_821A8118;
  o->m134 = 1;
  L.buf[0] = lbl_820E975C;
  memset(L.buf + 1, 0, 0xffe);
  L.v1.w0 = 0;
  L.v1.type = 0;
  fn_82528BF8(lbl_83276728.h4, q + 0x2c, L.buf, 0x800, 0, 1);
  fn_82273CD8(&L.v1, 5);
  L.v1.u.p = L.buf;
  fn_82672C20(fn_82279C58(&L.r90, o)->p, "_root.SetNamesText", &L.v1, 1);
  if (L.r90.rc != 0) {
    fn_822315A0(L.r90.rc);
  }
  it = fn_8251F720(q + 0x4c, 0);
  L.v2.w0 = 0;
  L.v2.type = 0;
  o->m130 = it;
  o->m134 = ~c & 1;
  fn_82837D98(it->sub, 0, &L.v50);
  flag = o->m134 != 0;
  fn_82273CD8(&L.v2, 2);
  L.v2.u.b = flag;
  fn_82672C20(fn_82279C58(&L.r88, o)->p, "_root.SetCreditsTexture", &L.v2, 1);
  if (L.r88.rc != 0) {
    fn_822315A0(L.r88.rc);
  }
  if (o->m134 != 0) {
    fn_826728E8(fn_82279C58(&L.r80, o)->p, "credits_texture", L.v50);
    rc = L.r80.rc;
  } else {
    fn_826728E8(fn_82279C58(&L.r98, o)->p, "credits_texture2", L.v50);
    rc = L.r98.rc;
  }
  if (rc != 0) {
    fn_822315A0(rc);
  }
  fn_82273C88(&L.v2);
  fn_82273C88(&L.v1);
  return o;
}
