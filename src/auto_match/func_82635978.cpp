extern "C" int fn_826358D8(void *);
extern "C" int fn_8265C990(void *, int);

struct Iface_82635978 { void **vt; };

struct Sub_82635978 {
  char b[0x26d0];
  __forceinline ~Sub_82635978() { fn_826358D8(this); }
};

struct Obj_82635978 {
  char pad0[0x10];
  Sub_82635978 arr[2];
  int rc;
  int pad4;
  Iface_82635978 *f4;
  char pad1[0x4dc4 - 0x4dbc];
  void *f5;
  char pad2[0x4dd0 - 0x4dc8];
  void *f6;
  char pad3[0x4de4 - 0x4dd4];
  void *f7;

  __forceinline ~Obj_82635978() {
    if (f4 != 0) {
      ((void (*)(void *))f4->vt[1])(f4);
      f4 = 0;
    }
    if (f7 != 0) fn_8265C990(f7, 0x24800000);
    if (f6 != 0) fn_8265C990(f6, 0x24800000);
    if (f5 != 0) fn_8265C990(f5, 0x24800000);
  }
  static void operator delete(void *p) { fn_8265C990(p, 0x24800000); }
};

extern "C" int fn_82635978(Obj_82635978 *o)
{
  int n = o->rc - 1;
  o->rc = n;
  if (n == 0) {
    o->Obj_82635978::~Obj_82635978();
    Obj_82635978::operator delete(o);
  }
  return n;
}
