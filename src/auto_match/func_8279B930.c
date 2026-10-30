typedef struct { int a, b; } Obj_8279B930_Sub;
typedef struct {
  int f00;
  int rc;          /* 0x04 */
  int f08, f0c;
  float f10;
  int f14, f18;
  int rc2;         /* 0x1c, count at +4 */
  int f20, f24, f28, f2c, f30, f34, f38, f3c;
  float f40, f44, f48;
  char sub1[0x20];  /* 0x4c */
  char sub2[0x0c];  /* 0x6c */
  int f78, f7c, f80, f84, f88, f8c, f90, f94, f98, f9c;
  float fa0;
  unsigned char ba4, ba5;
  int fa8;
} Obj_8279B930;
extern void fn_8267BE38(void *);
extern void fn_8267C498(void *);
extern void fn_826C6368(void *);
extern void fn_827914F0(void *, void *);
extern void fn_827922E8(void *, void *);

Obj_8279B930 *fn_8279B930(Obj_8279B930 *d, Obj_8279B930 *s)
{
  int *p;
  int sr;
  d->f00 = s->f00;
  sr = s->rc;
  if (sr != 0) (*(int *)sr)++;
  p = (int *)d->rc;
  if (p != 0) {
    if (--*p == 0) {
      fn_826C6368(p);
      fn_8267BE38(p);
    }
  }
  d->rc = s->rc;
  d->f08 = s->f08;
  d->f0c = s->f0c;
  d->f10 = s->f10;
  d->f14 = s->f14;
  d->f18 = s->f18;
  sr = s->rc2;
  if (sr != 0) ((int *)sr)[1]++;
  if ((void *)d->rc2 != 0) fn_8267C498((void *)d->rc2);
  d->rc2 = s->rc2;
  d->f20 = s->f20;
  d->f24 = s->f24;
  d->f28 = s->f28;
  d->f2c = s->f2c;
  d->f30 = s->f30;
  d->f34 = s->f34;
  d->f38 = s->f38;
  d->f3c = s->f3c;
  d->f40 = s->f40;
  d->f44 = s->f44;
  d->f48 = s->f48;
  fn_827922E8(d->sub1, s->sub1);
  fn_827914F0(d->sub2, s->sub2);
  d->f78 = s->f78;
  d->f7c = s->f7c;
  d->f80 = s->f80;
  d->f84 = s->f84;
  d->f88 = s->f88;
  d->f8c = s->f8c;
  d->f90 = s->f90;
  d->f94 = s->f94;
  d->f98 = s->f98;
  d->f9c = s->f9c;
  d->fa0 = s->fa0;
  d->ba4 = s->ba4;
  d->ba5 = s->ba5;
  d->fa8 = s->fa8;
  return d;
}
