//BODY
extern void fn_828BDDA0(void *);
extern void fn_82516F48(void *, int);
extern void fn_828AC450(void *, int);
extern void *memcpy(void *, const void *, unsigned int);
extern char lbl_820270D4[];
extern char lbl_820270D8[];

typedef struct { unsigned char b[8]; } B8_828DEA38;
typedef struct Obj_828DEA38 {
  void *vt;
  char pad1[0x4c];
  void *vt50;
  char pad2[0x2c];
  unsigned __int64 f80;
  int f88;
  int f8c;
  B8_828DEA38 f90;
  char f98[0x10];
  char fa8[0x24];
  char pad3[0xd0 - 0xcc];
  char fd0[0x10];
  char fe0[0x10];
  char ff0[0x10];
} Obj_828DEA38;

Obj_828DEA38 *fn_828DEA38(Obj_828DEA38 *p, unsigned __int64 a, int b, int c, B8_828DEA38 *s8, void *s16, void *s24, int d, int e, int f)
{
  fn_828BDDA0(p);
  p->f80 = a;
  p->f88 = b;
  p->f8c = c;
  p->vt = lbl_820270D8;
  p->vt50 = lbl_820270D4;
  p->f90 = *s8;
  memcpy(p->f98, s16, 0x10);
  memcpy(p->fa8, s24, 0x24);
  fn_82516F48(p->fd0, d);
  fn_82516F48(p->fe0, e);
  fn_828AC450(p->ff0, f);
  return p;
}
