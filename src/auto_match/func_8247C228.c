extern void *fn_822C5B18(void *tmp, int p);
extern void fn_82359C18(int p);
extern void fn_8247BB18(void *self, int p2, int p3, int p4, int p5, int p6, void *p7, int p8);
extern char lbl_821BD50C[];
extern float lbl_821CC160;

typedef struct Vec3_8247C228 {
  int x;
  int y;
  int z;
} Vec3_8247C228;

typedef struct Obj_8247C228 {
  void *vt;
  int f4;
  int f8;
  float fc;
  char pad[0x90 - 0x10];
  int f90;
  int f94;
  Vec3_8247C228 f98;
  int fa4;
  float fa8;
} Obj_8247C228;

Obj_8247C228 *fn_8247C228(Obj_8247C228 *o, int p2, int p3, int p4, int p5, int p6, int p7, int p8)
{
  char tmp[16];
  float f = lbl_821CC160;
  o->fc = f;
  o->f4 = 5;
  o->f8 = 0;
  o->vt = lbl_821BD50C;
  fn_8247BB18((char *)o + 0x10, p2, p3, p4, p5, p6, fn_822C5B18(tmp, p7), p8);
  o->fa8 = f;
  o->f90 = p4;
  o->f94 = p3;
  o->fa4 = 0;
  o->f98 = *(Vec3_8247C228 *)(p2 + 0xc);
  fn_82359C18(p7);
  return o;
}
