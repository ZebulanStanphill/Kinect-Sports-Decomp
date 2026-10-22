extern int fn_823985A8(void *p);
extern int fn_82398DA0(void *p, void *q);
extern int fn_823ADF20(void *p);
extern int fn_82490FC8(int a);
extern int fn_8265CA20(void *p);
extern float lbl_821CC160;

typedef struct {
  char pad[0x94];
  int f94;
  char pad2[0x1e4 - 0x98];
  void *child;
  char pad3[0x204 - 0x1e8];
  float f204;
  char pad4[0x220 - 0x208];
  int f220;
  int f224;
  int f228;
  int f22c;
  int f230;
  int f234;
  int f238;
  int f23c;
} Inner;

typedef struct {
  int f0;
  int f4;
  Inner *inner;
} Obj;

void fn_823A5710(Obj *p)
{
  Inner *in;
  void *c;

  fn_82490FC8(p->inner->f94);
  fn_823985A8(p->inner);
  in = p->inner;
  fn_82398DA0(in, in->child);
  c = in->child;
  if (c != 0) {
    fn_823ADF20(c);
    fn_8265CA20(c);
  }
  in->child = 0;
  p->inner->f204 = lbl_821CC160;
  in = p->inner;
  in->f220 = 0;
  in->f224 = 0;
  in->f228 = 0;
  in->f22c = 0;
  in->f230 = 0;
  in->f238 = 0;
  in->f23c = 0;
  in->f234 = 0;
}
