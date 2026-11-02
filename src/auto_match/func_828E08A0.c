typedef struct Obj_828E08A0 { struct Vt_828E08A0 *vt; } Obj_828E08A0;
typedef struct Vt_828E08A0 { char pad[0x38]; void (*f38)(Obj_828E08A0 *, unsigned char *, void *); void *pad3c; void (*f40)(Obj_828E08A0 *, unsigned char *); } Vt_828E08A0;
typedef struct W_828E08A0 { int h[4]; unsigned char *p; int n; void *heap; int a; int b; } W_828E08A0;
extern unsigned lbl_82026D2C[];
extern unsigned lbl_82026CF0[];
extern void fn_828E9D28(void *, unsigned char *, int);
extern int fn_828E9DA8(void *);
extern int fn_828E9D90(void *);
extern void fn_828E9FF8(void *, int);
extern void fn_8223C478(void *, unsigned, int);
extern void fn_828E9DB8(void *, void *, unsigned);
extern void fn_828E04E8(Obj_828E08A0 *, unsigned char *);
extern void fn_828E03E0(Obj_828E08A0 *, unsigned char *, void *);
extern void fn_8265CA20(void *);

void fn_828E08A0(Obj_828E08A0 *o, void *src, int idx, void *p4)
{
  unsigned char arr[64];
  W_828E08A0 w;
  unsigned off = lbl_82026D2C[idx] >> 3;
  unsigned rem = lbl_82026D2C[idx] & 7;
  unsigned n;
  if (p4 != 0) {
    o->vt->f38(o, arr, p4);
  } else {
    o->vt->f40(o, arr);
  }
  w.p = arr + off;
  w.heap = 0;
  w.a = 0;
  w.b = 0;
  w.n = 0x41;
  fn_828E9D28(&w, w.p, 0x41);
  if (rem != 0) {
    int x = fn_828E9DA8(&w);
    int y = fn_828E9D90(&w);
    if ((int)rem <= x - y) {
      fn_828E9FF8(&w, rem);
    }
  }
  n = lbl_82026CF0[idx];
  fn_8223C478(&w, n, 0);
  fn_828E9DB8(&w, src, n);
  if (p4 != 0) {
    fn_828E03E0(o, arr, p4);
  } else {
    fn_828E04E8(o, arr);
  }
  if (w.heap != 0) {
    fn_8265CA20(w.heap);
  }
}
