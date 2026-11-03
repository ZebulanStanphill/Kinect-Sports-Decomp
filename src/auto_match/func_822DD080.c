typedef struct { void *p; int pad; unsigned cap; unsigned extra; } SS_822DD080;
typedef struct { unsigned vt; int pad; SS_822DD080 s; } Dst_822DD080;

extern void fn_822DB770(SS_822DD080 *, SS_822DD080 *);
extern void fn_8265CAA0(void *);
extern unsigned char fn_82D7E470(SS_822DD080 *);
extern char lbl_831D9098[];

void fn_822DD080(Dst_822DD080 *param_1, SS_822DD080 *param_2)
{
  SS_822DD080 t0;
  SS_822DD080 t1;
  SS_822DD080 t2;
  unsigned char ok;
  SS_822DD080 *d;

  fn_822DB770(&t0, param_2);
  t0.extra = param_2->extra;
  fn_822DB770(&t1, &t0);
  t1.extra = t0.extra;
  if (fn_82D7E470(&t1) == 0) {
    fn_822DB770(&t2, &t1);
    t2.extra = t1.extra;
    d = &param_1->s;
    if (d != 0) {
      fn_822DB770(d, &t2);
      d->extra = t2.extra;
    }
    if (t2.cap > 8 && t2.p != 0) {
      fn_8265CAA0(t2.p);
    }
    if (t1.cap > 8 && t1.p != 0) {
      fn_8265CAA0(t1.p);
    }
    ok = 1;
  } else {
    if (t1.cap > 8 && t1.p != 0) {
      fn_8265CAA0(t1.p);
    }
    ok = 0;
  }
  if (t0.cap > 8 && t0.p != 0) {
    fn_8265CAA0(t0.p);
  }
  param_1->vt = ok ? (unsigned)lbl_831D9098 : 0;
  if (param_2->cap > 8 && param_2->p != 0) {
    fn_8265CAA0(param_2->p);
  }
}
