typedef struct Obj_82A9A8B8 {
  char pad0[0x14]; int f14; char pad1[0x0c]; int f24; char pad2[0x14]; int f3c; char pad3[0x44];
  char *f84; int pad4; int f8c; int f90; int f94;
} Obj_82A9A8B8;
extern char *fn_8265C940(unsigned n, int tag);
extern unsigned strlen(const char *);

void fn_82A9A8B8(Obj_82A9A8B8 *o, const char *s, int v)
{
  char *d;
  char c;
  unsigned n;
  o->f8c = v;
  o->f24 = 0;
  o->f14 = 0;
  o->f3c = 0;
  o->f90 = 0;
  o->f94 = 1;
  n = strlen(s);
  o->f84 = fn_8265C940(n + 1, 0x24870000);
  if (o->f84 == 0) {
    o->f90 = 0x80004005;
  } else {
    d = o->f84;
    s = s - 1;
    d = d - 1;
    do {
      s = s + 1;
      c = *s;
      d = d + 1;
      *d = c;
    } while (c != 0);
  }
}
