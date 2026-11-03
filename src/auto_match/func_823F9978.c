extern void *memcpy(void *, const void *, unsigned);

struct Itf_823F9978;
typedef struct VT_823F9978 {
  int p[5];
  void (*f14)(struct Itf_823F9978 *, int, void *);
} VT_823F9978;
typedef struct Itf_823F9978 { VT_823F9978 *vt; } Itf_823F9978;
typedef struct Obj_823F9978 {
  int p0, p4;
  char *b8, *bc, *b10, *b14;
  Itf_823F9978 *i18;
  int p1c;
  Itf_823F9978 *i20;
  int p24;
  Itf_823F9978 *i28;
  int p2c;
  Itf_823F9978 *i30;
} Obj_823F9978;

void fn_823F9978(Obj_823F9978 *o, int arg, unsigned off)
{
  int a, b;
  int c[8];
  int d[8];
  int i;
  c[0] = 0;
  for (i = 1; i < 8; i++) c[i] = -1;
  d[0] = 0;
  for (i = 1; i < 8; i++) d[i] = -1;
  o->i18->vt->f14(o->i18, arg, &a);
  o->i20->vt->f14(o->i20, arg, &b);
  o->i28->vt->f14(o->i28, arg, c);
  o->i30->vt->f14(o->i30, arg, d);
  if (off != 0) {
    *(int *)(o->b8 + off) = a;
    *(int *)(o->bc + off) = b;
    memcpy(o->b10 + off, c, 0x20);
    memcpy(o->b14 + off, d, 0x20);
  }
}
