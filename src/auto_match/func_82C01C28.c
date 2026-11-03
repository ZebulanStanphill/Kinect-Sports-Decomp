typedef struct Obj_82C01C28 Obj_82C01C28;
typedef struct P_82C01C28 { unsigned w0, w4, w8, wc, w10, w14, w18; } P_82C01C28;
typedef struct {
  char pad[0x3c];
  int (*f3c)(Obj_82C01C28 *);
  int (*f40)(Obj_82C01C28 *);
  int (*f44)(Obj_82C01C28 *, unsigned);
  int (*f48)(Obj_82C01C28 *, unsigned);
} VT_82C01C28;
struct Obj_82C01C28 {
  VT_82C01C28 *vt;
  char pad4[0x70 - 4];
  unsigned w70, w74, w78;
  char pad7c[0x1fc - 0x7c];
  unsigned w1fc;
  char pad200[0x20c - 0x200];
  void *w20c;
  char pad210[0x224 - 0x210];
  unsigned w224;
};
extern void *fn_8265C940(int, int);

int fn_82C01C28(Obj_82C01C28 *o, P_82C01C28 *p)
{
  int r;
  r = o->vt->f3c(o);
  if (r >= 0) {
    o->w20c = fn_8265C940(0x10000, 0x208c801d);
    if (o->w20c == 0) {
      r = 0x8007000e;
    } else {
      o->w70 = p->w8;
      o->w74 = p->wc;
      o->w78 = p->w14;
      o->w224 = p->w10;
      if (p->w18 != 0) o->w1fc = p->w18;
      if (p->w0 != 0) r = o->vt->f44(o, p->w0);
      if (r >= 0) {
        if (p->w4 != 0) r = o->vt->f48(o, p->w4);
        if (r >= 0) return r;
      }
    }
  }
  o->vt->f3c(o);
  return r;
}
