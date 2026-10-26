extern int *fn_8225F160(void);
typedef struct { char pad[0x44]; int x44; char pad2[8]; int x50; char pad3[0xc]; int x60; } Obj;
static int g(Obj *o) { if (o->x44 < 1) return 1; return o->x44; }
int fn_8225F3C0(Obj *o)
{
  int r = o->x50; if (r < 0) { if (fn_8225F160()[0x10] == 2) return o->x60; return g(o); } return r;
}
