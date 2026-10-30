typedef struct Rec_82886518 {
  int f0; int pad4; __int64 f8; int f10; int pad14; __int64 f18; int f20;
  char pad24[0x50]; int f74; int f78; int pad7c;
} Rec_82886518;
typedef struct Obj_82886518 { char pad[0x38]; Rec_82886518 *f38; } Obj_82886518;
extern void *fn_8265C9E0(unsigned n);

static Rec_82886518 *Init(Rec_82886518 *p)
{
  p->f0 = -1;
  p->f8 = -1;
  p->f10 = -1;
  p->f18 = -1;
  p->f20 = 0;
  p->f74 = -1;
  p->f78 = -1;
  return p;
}

void fn_82886518(Obj_82886518 *o, int a, int b)
{
  if (o->f38 == 0) {
    Rec_82886518 *m = (Rec_82886518 *)fn_8265C9E0(0x80);
    o->f38 = m ? Init(m) : 0;
  }
  if (o->f38 != 0) {
    o->f38->f0 = a;
    o->f38->f10 = b;
  }
}
