extern "C" {
extern void *fn_82FA5060(unsigned int heap, int size);
extern unsigned int lbl_831BC768;
extern unsigned int lbl_8217CC20;
extern unsigned int lbl_8217C940;
struct Obj_83031918;
Obj_83031918 *fn_83033978(Obj_83031918 *self, unsigned int a);
int fn_83033A68(Obj_83031918 *self);
}

struct Vt_83031918 {
  void *pad[2];
  void (*f8)(Obj_83031918 *);
};

struct Obj_83031918 {
  Vt_83031918 *vt;
  int w[0x2c];
  Obj_83031918(unsigned int a) {
    fn_83033978(this, a);
    vt = (Vt_83031918 *)&lbl_8217CC20;
    w[6] = (int)&lbl_8217C940;
    { int *z = &w[0x29]; z[0] = 0; z[1] = 0; z[2] = 0; }
  }
  static void *operator new(unsigned int sz) { return fn_82FA5060(lbl_831BC768, (int)sz); }
};

extern "C" Obj_83031918 *fn_83031918(unsigned int param_1)
{
  Obj_83031918 *p = new Obj_83031918(param_1);
  if (p != 0) {
    if (fn_83033A68(p) != 1) {
      p->vt->f8(p);
      p = 0;
    }
  }
  return p;
}
