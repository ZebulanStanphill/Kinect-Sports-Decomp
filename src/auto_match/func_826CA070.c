typedef struct Inner_826CA070 { int pad[2]; int *p; } Inner_826CA070;
typedef struct Mid_826CA070 { char pad[0x78]; Inner_826CA070 *in; } Mid_826CA070;
typedef struct Obj_826CA070 Obj_826CA070;
struct Obj_826CA070 {
  struct {
    char pad[0x58];
    Mid_826CA070 *(*f58)(Obj_826CA070 *);
  } *vt;
  char pad0[0x10];
  int depth;
  char pad1[0x68];
  int f80;
};
extern Obj_826CA070 *fn_826C59F8(void);
extern Inner_826CA070 *fn_8269F500(Obj_826CA070 *);
extern void fn_8269A800(Obj_826CA070 *);
extern void fn_82681E98(void *, const char *, int);

void fn_826CA070(void)
{
  Obj_826CA070 *o;
  Inner_826CA070 *in;
  int **pp;
  int x;
  o = fn_826C59F8();
  if (o != 0) {
    if (o->depth < 0x4000) {
      x = o->f80;
      if (x == 0) in = fn_8269F500(o); else in = (Inner_826CA070 *)x;
      if (in != 0) pp = &in->p; else pp = &o->vt->f58(o)->in->p;
      fn_82681E98((char *)o + 0xc, "%s.removeMovieClip() failed - depth must be >= 0\n", **pp);
    } else {
      fn_8269A800(o);
    }
  }
}
