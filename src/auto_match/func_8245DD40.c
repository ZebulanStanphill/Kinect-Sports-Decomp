typedef struct E_8245DD40 { int x; int p4; int p8; int pc; int p10; int p14; int p18; } E_8245DD40;
typedef struct O_8245DD40 {
  int m0; unsigned m4; unsigned m8; unsigned mc; unsigned m10; int m14; int m18; int m1c; int m20; int m24; int m28;
  int a2c[1]; unsigned a30[3]; unsigned a3c[3]; int m48; int m4c; int m50; int m54; int m58; int m5c; int m60; int m64;
  E_8245DD40 e[4];
  int mdc_[1]; int me0;
} O_8245DD40;
extern void fn_8262FEC8(unsigned);
extern void fn_82522ED8(unsigned);
extern void fn_82A1E658(int);
extern int fn_82E230A8(int *);

int fn_8245DD40(O_8245DD40 *o)
{
  int i;
  int r;
  for (i = 0; i < 3; i++) {
    if (o->a30[i] != 0) fn_8262FEC8(o->a30[i]);
    if (o->a3c[i] != 0) {
      fn_82522ED8(o->a3c[i]);
      o->a3c[i] = 0;
    }
    if (o->e[i + 1].x != -1) {
      fn_82A1E658(o->e[i + 1].x);
      o->e[i + 1].x = -1;
    }
  }
  if (o->e[0].x != -1) {
    fn_82A1E658(o->e[0].x);
    o->e[0].x = -1;
  }
  if (o->m8 != 0) { fn_82522ED8(o->m8); o->m8 = 0; }
  if (o->mc != 0) { fn_82522ED8(o->mc); o->mc = 0; }
  if (o->m10 != 0) { fn_82522ED8(o->m10); o->m10 = 0; }
  r = 0;
  if (o->m4 != 0) r = fn_82E230A8(&o->m4);
  o->m54 = 0;
  o->m58 = 0;
  o->m50 = 0;
  o->m14 = 0;
  o->m18 = 0;
  o->m1c = 0;
  o->m20 = 0;
  o->m48 = 0;
  o->m4c = 0;
  *(int *)((char *)o + 0xdc) = 0;
  *(int *)((char *)o + 0xe0) = 0;
  *(int *)((char *)o + 0xd4) = 0;
  *(int *)((char *)o + 0xd8) = 0;
  o->a2c[0] = 0;
  o->m28 = 0;
  for (i = 0; i < 3; i++) {
    o->a3c[i] = 0;
    o->a30[i] = 0;
    o->e[i + 1].p8 = 0;
    o->e[i + 1].x = -1;
  }
  o->e[0].x = -1;
  o->e[0].p8 = 0;
  o->m24 = 0;
  return r;
}
