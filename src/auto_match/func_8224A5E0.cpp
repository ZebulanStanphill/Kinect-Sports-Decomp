extern "C" void *memcpy(void *, const void *, unsigned int);

class Src_8224A5E0 {
public:
  virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
  virtual void Get(void *, void *);
};
typedef struct Buf_8224A5E0 { unsigned char b[256]; } Buf_8224A5E0;
typedef struct Trip_8224A5E0 { int a; int b; int c; } Trip_8224A5E0;
typedef struct Obj_8224A5E0 {
  char pad[8]; char *f8; char *fc; char *f10; char *f14; Trip_8224A5E0 *f18;
  Src_8224A5E0 *f1c; int p20; Src_8224A5E0 *f24; int p28; Src_8224A5E0 *f2c; int p30; Src_8224A5E0 *f34; int p38; Src_8224A5E0 *f3c;
} Obj_8224A5E0;

extern "C" void fn_8224A5E0(Obj_8224A5E0 *param_1, void *param_2, unsigned int param_3)
{
  struct {
    Trip_8224A5E0 t;
    int pad;
    Buf_8224A5E0 b24;
    Buf_8224A5E0 b2c;
    Buf_8224A5E0 b1c;
    Buf_8224A5E0 b34;
  } l;
  Trip_8224A5E0 *d;

  param_1->f1c->Get(param_2, &l.b1c);
  param_1->f24->Get(param_2, &l.b24);
  param_1->f2c->Get(param_2, &l.b2c);
  param_1->f34->Get(param_2, &l.b34);
  param_1->f3c->Get(param_2, &l.t);
  if (param_3 != 0) {
    memcpy(param_1->f8 + param_3, &l.b1c, 0x100);
    memcpy(param_1->fc + param_3, &l.b24, 0x100);
    memcpy(param_1->f10 + param_3, &l.b2c, 0x100);
    memcpy(param_1->f14 + param_3, &l.b34, 0x100);
    d = (Trip_8224A5E0 *)((char *)param_1->f18 + param_3);
    *d = l.t;
  }
}
