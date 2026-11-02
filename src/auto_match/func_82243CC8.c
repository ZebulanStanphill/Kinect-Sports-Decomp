typedef struct Obj_82243CC8 { struct Vt_82243CC8 *vt; } Obj_82243CC8;
typedef struct Vt_82243CC8 { char pad[0x40]; void (*f40)(Obj_82243CC8 *, unsigned char *); } Vt_82243CC8;
typedef struct W_82243CC8 { int h[4]; unsigned char *p; int n; void *heap; int a; int b; } W_82243CC8;
extern unsigned lbl_821974E8[];
extern unsigned lbl_821974AC[];
extern void fn_828E9D28(void *, unsigned char *, int);
extern void fn_8223C610(void *, unsigned, int, int);
extern void fn_8223C478(void *, unsigned, int);
extern void fn_828E9DB8(void *, void *, unsigned);
extern void fn_82243A00(Obj_82243CC8 *, unsigned char *);
extern void fn_8265CA20(void *);

void fn_82243CC8(Obj_82243CC8 *o, void *src, int idx)
{
  unsigned char arr[56];
  W_82243CC8 w;
  unsigned off = lbl_821974E8[idx] >> 3;
  unsigned rem = lbl_821974E8[idx] & 7;
  unsigned n;
  o->vt->f40(o, arr);
  w.p = arr + off;
  w.heap = 0;
  w.a = 0;
  w.b = 0;
  w.n = 0x3e;
  fn_828E9D28(&w, w.p, 0x3e);
  if (rem != 0) {
    fn_8223C610(&w, rem, 0, 0);
  }
  n = lbl_821974AC[idx];
  fn_8223C478(&w, n, 0);
  fn_828E9DB8(&w, src, n);
  fn_82243A00(o, arr);
  if (w.heap != 0) {
    fn_8265CA20(w.heap);
  }
}
