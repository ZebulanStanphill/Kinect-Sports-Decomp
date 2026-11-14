extern void XMemSet(void *p, int v, int n);
extern char lbl_82079EEC[];

typedef struct Obj_829ECFE0 {
  void *vt;
  int f04;
  int f08;
  int pad0c;
  short f10;
  short f12;
  short f14;
  short pad16;
  int f18;
  int f1c;
  int f20;
  int f24;
  short f28;
  short pad2a;
  int f2c;
  int f30;
  int f34;
  short f38;
  short f3a;
  short f3c;
  short pad3e;
  int f40;
  int f44;
  int f48;
  int f4c;
  int f50;
  unsigned char buf54[0x20];
  unsigned char buf74[0x20];
  int f94;
  int f98;
} Obj_829ECFE0;

Obj_829ECFE0 *fn_829ECFE0(Obj_829ECFE0 *p)
{
  p->f04 = 0;
  p->vt = lbl_82079EEC;
  p->f08 = 0;
  p->f10 = 0;
  p->f12 = 0;
  p->f14 = 0;
  p->f18 = 2;
  p->f1c = 0;
  p->f20 = 0;
  p->f24 = 0;
  p->f28 = 0;
  p->f2c = 0;
  p->f30 = 0;
  p->f34 = 0;
  p->f38 = 0;
  p->f3a = 0;
  p->f3c = 0;
  p->f40 = 0;
  p->f44 = 0;
  p->f48 = 0;
  p->f4c = 0;
  p->f50 = 0;
  XMemSet(p->buf54, 0, 0x20);
  XMemSet(p->buf74, 0, 0x20);
  p->f94 = 0;
  p->f98 = 0;
  return p;
}
