typedef struct VT_82E09F28 VT_82E09F28;
typedef struct Obj_82E09F28 { VT_82E09F28 *vt; } Obj_82E09F28;
struct VT_82E09F28 {
  void *s0[4];
  unsigned (*f10)(Obj_82E09F28 *, void *);
  void *s14[2];
  void (*f1c)(Obj_82E09F28 *, void *, int);
};
extern void *fn_82CEAC20(void *);
extern void *fn_82CEAC28(void *);
extern int fn_82CEAF18(void *);
extern void *fn_82CEAF20(void *, int);
extern void *fn_82CFD5B0(void *);

void fn_82E09F28(Obj_82E09F28 *o, void *p)
{
  int i;
  if (p != 0) {
    if (o->vt->f10(o, fn_82CEAC20(p)) == 0) {
      o->vt->f1c(o, p, 0);
      fn_82E09F28(o, fn_82CEAC28(p));
      for (i = 0; i < fn_82CEAF18(p); i++) {
        fn_82E09F28(o, fn_82CFD5B0(fn_82CEAF20(p, i)));
      }
    }
  }
}
