class Sink_827E60D8 {
public:
  virtual void v0();
  virtual void v1();
  virtual void v2();
  virtual void v3();
  virtual void v4();
  virtual void f14(int lVar2);
  virtual void f18(int lVar2, void *b);
};

class Obj_827E60D8 {
public:
  virtual void v0();
  virtual void v1();
  virtual void v2();
  virtual void v3();
  virtual void v4();
  virtual void v5();
  virtual void v6();
  virtual int f1c();
  int f4, f8, fc, f10, f14, f18, f1c_, f20, f24, f28, f2c, f30, f34, f38, f3c, f40, f44, f48, f4c, f50, f54, f58, f5c, f60;
};

extern "C" {
int fn_827D5070(int);
int fn_827D5078(int, int);
int fn_827D9DD8(int);
Sink_827E60D8 *fn_827DA588(int, int);
int fn_827E3810(int, int);
int fn_827E4430(Obj_827E60D8 *);
int fn_827E4440();
int fn_82811438(void *, void *, int);
extern Sink_827E60D8 *lbl_83156AA0;

int fn_827E60D8(Obj_827E60D8 *o)
{
  int d;
  int s;
  int lVar2;
  int iVar3;
  Sink_827E60D8 *p;
  int a[4];
  char b[24];

  d = o->f3c - o->f48;
  s = o->f4c + d;
  o->f4c = s;
  if (s >= o->f3c) {
    if (0 < d) {
      if (fn_827E4440() == 0) {
        fn_827E4430(o);
        iVar3 = o->f1c_;
        fn_827E3810(o->f1c(), iVar3);
      }
    }
    fn_827D9DD8(o->f8);
    lVar2 = fn_827D5070(o->f14);
    if (lVar2 != 0) {
      if (o->f5c == 1) {
        a[0] = 3;
        fn_82811438(b, a, 0x10);
        lbl_83156AA0->f18(lVar2, b);
      }
      else if (o->f60 == 0) {
        p = fn_827DA588(o->f20, o->f54);
        p->f14(lVar2);
      }
      fn_827D5078(o->f14, 0);
    }
    return 1;
  }
  return 0;
}
}
