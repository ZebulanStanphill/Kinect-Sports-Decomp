extern void *fn_8265C9E0(unsigned int);
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821B46D0;
extern float lbl_821CC160;

typedef struct Sub_823768A8 {
  void *vt; int f4; int f8; float fc; int f10; int f14; int f18; int f1c; int f20; int f24; int f28; int f2c;
} Sub_823768A8;
typedef struct Blk_823768A8 { void *vt; int uses; int weaks; Sub_823768A8 sub; } Blk_823768A8;
typedef struct Out_823768A8 { Sub_823768A8 *p; Blk_823768A8 *blk; } Out_823768A8;

static Blk_823768A8 *Init(Blk_823768A8 *b, int param_2)
{
  Sub_823768A8 *s;
  b->uses = 1;
  b->vt = &lbl_821AD588;
  b->weaks = 1;
  s = &b->sub;
  if (s != 0) {
    s->f24 = 1;
    s->f8 = param_2;
    s->f10 = 0;
    s->fc = lbl_821CC160;
    s->f4 = 4;
    s->vt = &lbl_821B46D0;
    s->f14 = 0;
    s->f18 = 0;
    s->f1c = 0;
    s->f20 = 0;
    s->f28 = 0;
    s->f2c = 4;
  }
  return b;
}

Out_823768A8 *fn_823768A8(Out_823768A8 *param_1, int param_2)
{
  Blk_823768A8 *b;

  b = (Blk_823768A8 *)fn_8265C9E0(0x3c);
  b = b ? Init(b, param_2) : 0;
  param_1->blk = b;
  param_1->p = &b->sub;
  return param_1;
}
