extern int fn_822C5B18();
extern int fn_82359C18();
extern int fn_82476198();
extern unsigned int lbl_821BCFD4;
extern float lbl_821CC160;

typedef struct {
  unsigned vt;
  int f4;
  int f8;
  float fc;
  char pad[0x1a0 - 0x10];
  int f1a0;
  int f1a4;
  int f1a8;
  int f1ac;
  int f1b0;
  int f1b4;
  int f1b8;
  int f1bc;
} Obj_82478A00;

Obj_82478A00 *fn_82478A00(Obj_82478A00 *o, int p2, int p3, int p4, int p5, int p6, int p7)
{
  char tmp[16];
  o->fc = lbl_821CC160;
  o->f4 = 4;
  o->f8 = 0;
  o->vt = (unsigned)&lbl_821BCFD4;
  fn_82476198((char *)o + 0x10, p2, p3, p4, p5, fn_822C5B18(tmp, p6), p7);
  o->f1a4 = p3;
  o->f1a0 = 0;
  o->f1a8 = p7;
  o->f1b0 = *(int *)(p5 + 0x844);
  o->f1b4 = p5;
  o->f1b8 = *(int *)(p5 + 0x8c8);
  o->f1bc = 0;
  o->f1ac = *(int *)(p2 + 0xc);
  fn_82359C18(p6);
  return o;
}
