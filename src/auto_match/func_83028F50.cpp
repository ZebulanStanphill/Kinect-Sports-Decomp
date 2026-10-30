extern "C" {
extern void *fn_82FA5060(unsigned int heap, int size);
extern unsigned int lbl_831BC768;
extern unsigned int lbl_8217C620;
extern unsigned int lbl_8217C940;
struct Obj_83028F50;
Obj_83028F50 *fn_82FF3EE0(Obj_83028F50 *self, unsigned int a);
int fn_82FFF750(Obj_83028F50 *self);
}

struct Vt_83028F50 {
  void *pad[2];
  void (*f8)(Obj_83028F50 *);
};

struct Obj_83028F50 {
  Vt_83028F50 *vt;
  int w[0x24];
  Obj_83028F50(unsigned int a) {
    fn_82FF3EE0(this, a);
    vt = (Vt_83028F50 *)&lbl_8217C620;
    w[6] = (int)&lbl_8217C940;
    { int *z = &w[0x21]; z[0] = 0; z[1] = 0; z[2] = 0; }
  }
  static void *operator new(unsigned int sz) { return fn_82FA5060(lbl_831BC768, (int)sz); }
};

extern "C" Obj_83028F50 *fn_83028F50(unsigned int param_1)
{
  Obj_83028F50 *p = new Obj_83028F50(param_1);
  if (p != 0) {
    if (fn_82FFF750(p) != 1) {
      p->vt->f8(p);
      p = 0;
    }
  }
  return p;
}
