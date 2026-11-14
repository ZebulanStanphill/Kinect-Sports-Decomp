extern int fn_825200A8(void *, void *);
extern float lbl_821954B0[];

typedef struct A_825C4F40 {
  char pad0[8];
  unsigned int f8;
  char padc[0x14 - 0xc];
  int f14, f18;
  char pad1c[0x30 - 0x1c];
  unsigned int f30;
  float f34;
  char pad38[0x58 - 0x38];
  float f58;
  char pad5c[0x64 - 0x5c];
  float f64;
  char pad68[0x70 - 0x68];
  float f70;
  char pad74[0x84 - 0x74];
  float f84;
  char pad88[0x94 - 0x88];
  float f94;
  char pad98[0xf8 - 0x98];
  int ff8;
} A_825C4F40;
typedef struct B_825C4F40 {
  char pad0[8];
  int f8, fc;
  char pad10[0x18 - 0x10];
  unsigned int f18;
  char pad1c[0x38 - 0x1c];
  unsigned int f38;
  float f3c;
  char pad40[0x50 - 0x40];
  float f50;
  char pad54[0x58 - 0x54];
  float f58, f5c;
  char pad60[0x6c - 0x60];
  unsigned int f6c;
  float f70;
  char pad74[0x80 - 0x74];
  int f80;
} B_825C4F40;

int fn_825C4F40(A_825C4F40 *a, B_825C4F40 *b)
{
  unsigned int v;
  if (fn_825200A8(&b->f8, &a->f14) != 0 && fn_825200A8(&b->fc, &a->f18) != 0 &&
      a->f30 == b->f38 && a->f34 == b->f3c && a->f94 == b->f50 &&
      a->f64 == b->f58 && a->f70 == b->f5c &&
      (unsigned int)(a->f58 * lbl_821954B0[0x194 / 4]) == b->f6c &&
      a->f84 == b->f70 && a->ff8 == b->f80) {
    v = a->f8;
    if (v > 2000) v = 2000;
    return b->f18 >= v;
  }
  return 0;
}
