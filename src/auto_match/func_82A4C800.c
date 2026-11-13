extern void fn_82A5F3B8(void *, void *);
extern void fn_82A3FE48(void *);
extern void *memset(void *, int, unsigned int);
extern char lbl_82089DC0[];
extern char lbl_82089DD4[];
extern char lbl_82089DE8[];
extern char lbl_8315D988[];
extern char lbl_83219D50[];

typedef struct Obj_82A4C800 {
  void *vt;
  int pad[7];
  void *vt20;
  void *vt24;
  int f28[10];
  int f50;
  int f54;
  float f58;
  float f5c;
  float f60;
  float f64;
} Obj_82A4C800;

Obj_82A4C800 *fn_82A4C800(Obj_82A4C800 *p)
{
  fn_82A5F3B8(p, lbl_8315D988);
  p->vt = lbl_82089DE8;
  p->vt20 = lbl_82089DD4;
  p->vt24 = lbl_82089DC0;
  p->f50 = 0;
  p->f54 = 0;
  p->f58 = 0.0f;
  p->f5c = 0.0009765625f;
  p->f60 = 1.0f;
  p->f64 = 1.0f;
  fn_82A3FE48(lbl_83219D50);
  memset(p->f28, 0, 0x28);
  return p;
}
