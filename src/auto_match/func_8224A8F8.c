typedef struct Src_8224A8F8 Src_8224A8F8;
typedef struct VT_8224A8F8 {
  void *f[5];
  void (*f14)(Src_8224A8F8 *, int, void *);
} VT_8224A8F8;
struct Src_8224A8F8 { VT_8224A8F8 *vt; };

typedef struct Obj_8224A8F8 {
  char pad0[8];
  unsigned f8;
  unsigned fc;
  Src_8224A8F8 *f10;
  int f14;
  Src_8224A8F8 *f18;
} Obj_8224A8F8;

typedef struct B40c_8224A8F8 { unsigned char b[0x40c]; } B40c_8224A8F8;
typedef struct B1c_8224A8F8 { unsigned char b[0x1c]; } B1c_8224A8F8;

void fn_8224A8F8(Obj_8224A8F8 *self, int param_2, unsigned param_3)
{
  B1c_8224A8F8 b2;
  B40c_8224A8F8 b1;
  self->f10->vt->f14(self->f10, param_2, &b1);
  self->f18->vt->f14(self->f18, param_2, &b2);
  if (param_3 != 0) {
    *(B40c_8224A8F8 *)(self->f8 + param_3) = b1;
    *(B1c_8224A8F8 *)(self->fc + param_3) = b2;
  }
}
