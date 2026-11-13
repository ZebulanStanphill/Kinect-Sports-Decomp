typedef struct E_823A3880 {
  char p0[0xac]; int fac; char pb0[4]; int fb4; char pb8[0x1c]; int fd4;
  char pd8[0x178 - 0xd8]; int f178; char p17c[0x260 - 0x17c]; unsigned f260;
} E_823A3880;
typedef struct O_823A3880 {
  int p0; int p4; E_823A3880 *e; float f0c; float f10; int f14; int pad18;
  int z1c; int z20; int z24; int z28; int z2c; int z30;
} O_823A3880;
extern void fn_822A0EB8(int);
extern void fn_82359928(E_823A3880 *, int);
extern void fn_823980B0(E_823A3880 *, int, int);
extern char *fn_8249ABC0();
extern void fn_8249D980(int, int);
extern float lbl_821917A8[];

void fn_823A3880(O_823A3880 *o)
{
  E_823A3880 *e;
  float c;
  char *r;

  c = 0.0f;
  o->f0c = c;
  if (o->f14 == 1) {
    fn_823980B0(o->e, 0, 0);
    fn_823980B0(o->e, 1, 0);
    fn_822A0EB8(o->e->fd4);
    o->f10 = lbl_821917A8[2];
  }
  o->f14 = 0;
  o->e->f260 = o->e->f260 | 4;
  o->f10 = c;
  e = o->e;
  o->z1c = 0;
  o->z20 = 0;
  o->z24 = 0;
  o->z28 = 0;
  o->z2c = 0;
  o->z30 = 0;
  if (e->f178 == 2) {
    o->f10 = c;
  }
  if (e->fac != 1) {
    r = fn_8249ABC0();
    if (e->fb4 != -1) {
      fn_8249D980(*(int *)(r + 0x110), e->fb4);
      e->fb4 = -1;
    }
    e->fac = 1;
  }
  fn_82359928(o->e, 1);
}
