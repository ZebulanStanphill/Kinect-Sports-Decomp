#include "game/OStringStreamObject_8223DCC8.h"

extern "C" {
typedef struct Str_82237318 {
  char pad[8];
  union { unsigned char buf[4]; unsigned char *ptr; } u;
  unsigned int cap;
} Str_82237318;
typedef struct SS_82237318 { int pad4; char buf[156]; } SS_82237318;
typedef struct W_82237318 { int h[4]; unsigned char *p; int n; void *heap; int a; int b; } W_82237318;
typedef struct Tmp_82237318 { char b[0x20]; } Tmp_82237318;

extern void fn_828E9D28(void *, unsigned char *, int);
extern float fn_828E5538(void *, int, int);
extern void fn_8223CFC0(void *ss, int mode, int x);
extern void *fn_822351A0(void *out, int a, int b, Str_82237318 *s);
extern void *fn_82240158(void *os, const char *s);
extern void *fn_82520AC8(void *os, int v);
extern void *fn_8223FBB0(void *os, unsigned char v);
extern void *fn_82237A48(void *os, float v);
extern void *fn_8223B728(void *os, void *v);
extern void fn_82230300(void *, int, int);
extern void fn_822403C8(void *out, void *buf);
extern void fn_8265CA20(void *);
extern char lbl_82196824[];

typedef struct L_82237318 {
  W_82237318 w;
  int pad2[3];
  Tmp_82237318 tmp;
  SS_82237318 ss;
} L_82237318;

void *fn_82237318(void *out, int a, int b, Str_82237318 *s)
{
  L_82237318 L;
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
  L.w.n = 8;
  fn_828E9D28(&L.w, p, 8);
  f0 = fn_828E5538(&L.w, 11, 7);
  f1 = fn_828E5538(&L.w, 11, 7);
  f2 = fn_828E5538(&L.w, 11, 7);
  fn_8223CFC0(&L.ss, 2, 1);
  r = fn_822351A0(&L.tmp, a, b, s);
  os = fn_82240158(&L.ss, "NetDefQuantisedVector3OnetoAll_c<");
  os = fn_82520AC8(os, 11);
  os = fn_82240158(os, lbl_82196824);
  os = fn_8223FBB0(os, 7);
  os = fn_82240158(os, lbl_82196824);
  os = fn_82520AC8(os, 11);
  os = fn_82240158(os, lbl_82196824);
  os = fn_8223FBB0(os, 7);
  os = fn_82240158(os, lbl_82196824);
  os = fn_82520AC8(os, 11);
  os = fn_82240158(os, lbl_82196824);
  os = fn_8223FBB0(os, 7);
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
  DestroyOStringStream_8223DCC8(&L.ss);
  if (L.w.heap != 0) {
    fn_8265CA20(L.w.heap);
  }
  return out;
}
}
