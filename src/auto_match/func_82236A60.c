typedef struct Str_82236A60 {
  char pad[8];
  union { unsigned char buf[4]; unsigned char *ptr; } u;
  unsigned int cap;
} Str_82236A60;
typedef struct SS_82236A60 { int pad4; char buf[140]; } SS_82236A60;
typedef struct W_82236A60 { int h[4]; unsigned char *p; int n; void *heap; int a; int b; } W_82236A60;
typedef struct Tmp_82236A60 { char b[0x20]; } Tmp_82236A60;
typedef struct Vec3_82236A60 { float x, y, z; } Vec3_82236A60;

extern void fn_828E9D28(void *, unsigned char *, int);
extern void fn_82237F60(Vec3_82236A60 *out, void *w);
extern void fn_8223CFC0(void *ss, int mode, int x);
extern void fn_8223DCC8(void *ss);
extern void *fn_82234268(void *out, int a, int b, Str_82236A60 *s);
extern void *fn_82240158(void *os, const char *s);
extern void *fn_82237920(void *os, int v);
extern void *fn_82237A48(void *os, float v);
extern void *fn_8223B728(void *os, void *v);
extern void fn_82230300(void *, int, int);
extern void fn_822403C8(void *out, void *buf);
extern void fn_8265CA20(void *);
extern char lbl_82196824[];

typedef struct L_82236A60 {
  Vec3_82236A60 v;
  int pad;
  W_82236A60 w;
  int pad2[3];
  Tmp_82236A60 tmp;
  SS_82236A60 ss;
} L_82236A60;

void *fn_82236A60(void *out, int a, int b, Str_82236A60 *s)
{
  L_82236A60 L;
  void *r;
  void *os;
  unsigned char *p;

  if (s->cap <= 4) {
    p = s->u.buf;
  } else {
    p = s->u.ptr;
  }
  L.w.p = p;
  L.w.heap = 0;
  L.w.a = 0;
  L.w.b = 0;
  L.w.n = 3;
  fn_828E9D28(&L.w, p, 3);
  fn_82237F60(&L.v, &L.w);
  fn_8223CFC0(&L.ss, 2, 1);
  r = fn_82234268(&L.tmp, a, b, s);
  os = fn_82240158(&L.ss, "NetDefVector3OnetoAll_c<");
  os = fn_82237920(os, 0x14);
  os = fn_82240158(os, lbl_82196824);
  os = fn_82237920(os, 0);
  os = fn_82240158(os, lbl_82196824);
  os = fn_82237920(os, 0);
  os = fn_82240158(os, "> - {");
  os = fn_82237A48(os, L.v.x);
  os = fn_82240158(os, lbl_82196824);
  os = fn_82237A48(os, L.v.y);
  os = fn_82240158(os, lbl_82196824);
  os = fn_82237A48(os, L.v.z);
  os = fn_82240158(os, "}, {");
  os = fn_8223B728(os, r);
  fn_82240158(os, "}");
  fn_82230300(&L.tmp, 1, 0);
  fn_822403C8(out, L.ss.buf);
  fn_8223DCC8(&L.ss);
  if (L.w.heap != 0) {
    fn_8265CA20(L.w.heap);
  }
  return out;
}
