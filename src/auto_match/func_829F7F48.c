typedef struct {
  int f0; int f4; int f8[2]; int f10; int f14; int f18; int f1c; int f20; int f24; int f28; int f2c;
  int f30; int f34; int f38; int f3c; int f40; int f44; int f48; int f4c;
  int pad50[9]; int f74; int pad78[5]; int f8c;
} S;
void fn_829F7F48(S *p)
{
  int i;
  p->f0 = 0;
  p->f30 = 0;
  p->f3c = 0;
  p->f1c = 0;
  p->f20 = 0;
  p->f24 = 0;
  p->f28 = 0;
  p->f2c = 0;
  p->f14 = 0;
  p->f18 = 0;
  p->f4c = 0;
  p->f34 = 0;
  p->f38 = 0;
  p->f44 = 0;
  p->f40 = 0;
  p->f48 = 0;
  for (i = 0; i < 2; i++) p->f8[i] = 0;
  p->f4 = 0;
  p->f74 = 0;
  p->f8c = 0;
}
