struct Obj_82C0E450;
typedef void (*Fn0_82C0E450)(struct Obj_82C0E450 *);
typedef void (*Fn1_82C0E450)(struct Obj_82C0E450 *, int);
typedef int (*FnI_82C0E450)(struct Obj_82C0E450 *);
typedef struct VT_82C0E450 {
  char pad0[0x60]; Fn0_82C0E450 f60;
  char pad1[0x9c - 0x64]; Fn0_82C0E450 f9c;
  char pad2[0xb4 - 0xa0]; Fn0_82C0E450 fb4, fb8, fbc, fc0, fc4, fc8, fcc, fd0;
  char pad3[0xf4 - 0xd4]; FnI_82C0E450 ff4, ff8;
  char pad4[0x114 - 0xfc]; Fn1_82C0E450 f114, f118;
} VT_82C0E450;
typedef struct Iface_82C0E450 { struct IVT_82C0E450 { int f0, f4; void (*f8)(struct Iface_82C0E450 *); } *vt; } Iface_82C0E450;
typedef struct Obj_82C0E450 {
  VT_82C0E450 *vt;
  char pad[0x2c - 4];
  Iface_82C0E450 *f2c;
  void *f30;
  char pad2[0x108 - 0x34];
  void *h108, *h10c, *h110, *h114;
} Obj_82C0E450;
extern void fn_82647460(void *p);
extern void fn_82A1E2C0(void *h);
extern unsigned fn_82A1E650(void *h, int w);
extern void fn_82A1E658(void *h);

int fn_82C0E450(Obj_82C0E450 *o)
{
  o->vt->f114(o, 4);
  o->vt->f118(o, 4);
  if (o->vt->ff4(o) != 1 || o->vt->ff8(o) != 1) {
    o->vt->f60(o);
    if (o->h108 != 0) { fn_82A1E2C0(o->h108); o->vt->fb4(o); }
    if (o->h10c != 0) { fn_82A1E2C0(o->h10c); o->vt->fb8(o); }
    if (o->h110 != 0) { fn_82A1E2C0(o->h110); o->vt->fbc(o); }
    if (o->h114 != 0) { fn_82A1E2C0(o->h114); o->vt->fc0(o); }
  }
  if (o->h108 != 0) {
    do {
      fn_82A1E2C0(o->h108);
      o->vt->fc4(o);
    } while (fn_82A1E650(o->h108, 1) == 0x102);
    fn_82A1E658(o->h108);
    o->h108 = 0;
  }
  if (o->h10c != 0) {
    do {
      fn_82A1E2C0(o->h10c);
      o->vt->fc8(o);
    } while (fn_82A1E650(o->h10c, 1) == 0x102);
    fn_82A1E658(o->h10c);
    o->h10c = 0;
  }
  if (o->h110 != 0) {
    do {
      fn_82A1E2C0(o->h110);
      o->vt->fcc(o);
    } while (fn_82A1E650(o->h110, 1) == 0x102);
    fn_82A1E658(o->h110);
    o->h110 = 0;
  }
  if (o->h114 != 0) {
    do {
      fn_82A1E2C0(o->h114);
      o->vt->fd0(o);
    } while (fn_82A1E650(o->h114, 1) == 0x102);
    fn_82A1E658(o->h114);
    o->h114 = 0;
  }
  if (o->f30 != 0) {
    fn_82647460(o->f30);
    o->f30 = 0;
  }
  if (o->f2c != 0) {
    o->f2c->vt->f8(o->f2c);
    o->f2c = 0;
  }
  o->vt->f9c(o);
  return 0;
}
