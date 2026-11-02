typedef struct Str_82236BC0 {
  char pad[8];
  union { unsigned char buf[4]; unsigned char *ptr; } u;
  unsigned int cap;
} Str_82236BC0;
typedef struct SS_82236BC0 { int pad4; char buf[156]; } SS_82236BC0;
typedef struct W_82236BC0 { int h[4]; unsigned char *p; int n; void *heap; int a; int b; } W_82236BC0;
typedef struct Tmp_82236BC0 { char b[0x20]; } Tmp_82236BC0;

extern void fn_828E9D28(void *, unsigned char *, int);
extern float fn_828E5538(void *, int, int);
extern void fn_8223CFC0(void *ss, int mode, int x);
extern void fn_8223DCC8(void *ss);
extern void *fn_82234518(void *out, int a, int b, Str_82236BC0 *s);
extern void *fn_82240158(void *os, const char *s);
extern void *fn_82520AC8(void *os, int v);
extern void *fn_8223FBB0(void *os, unsigned char v);
extern void *fn_82237A48(void *os, float v);
extern void *fn_8223B728(void *os, void *v);
extern void fn_82230300(void *, int, int);
extern void fn_822403C8(void *out, void *buf);
extern void fn_8265CA20(void *);
extern char lbl_82196824[];

typedef struct L_82236BC0 {
  W_82236BC0 w;
  int pad2[3];
  Tmp_82236BC0 tmp;
  SS_82236BC0 ss;
} L_82236BC0;

void *fn_82236BC0(void *out, int a, int b, Str_82236BC0 *s)
{
  L_82236BC0 L;
  float f0, f1, f2;
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
  L.w.n = 4;
  fn_828E9D28(&L.w, p, 4);
  f0 = fn_828E5538(&L.w, 3, 5);
  f1 = fn_828E5538(&L.w, 3, 5);
  f2 = fn_828E5538(&L.w, 3, 5);
  fn_8223CFC0(&L.ss, 2, 1);
  r = fn_82234518(&L.tmp, a, b, s);
  os = fn_82240158(&L.ss, "NetDefQuantisedVector3OnetoAll_c<");
  os = fn_82520AC8(os, 3);
  os = fn_82240158(os, lbl_82196824);
  os = fn_8223FBB0(os, 5);
  os = fn_82240158(os, lbl_82196824);
  os = fn_82520AC8(os, 3);
  os = fn_82240158(os, lbl_82196824);
  os = fn_8223FBB0(os, 5);
  os = fn_82240158(os, lbl_82196824);
  os = fn_82520AC8(os, 3);
  os = fn_82240158(os, lbl_82196824);
  os = fn_8223FBB0(os, 5);
  os = fn_82240158(os, lbl_82196824);
  os = fn_82240158(os, "> - {");
  os = fn_82237A48(os, f0);
  os = fn_82240158(os, lbl_82196824);
  os = fn_82237A48(os, f1);
  os = fn_82240158(os, lbl_82196824);
  os = fn_82237A48(os, f2);
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
