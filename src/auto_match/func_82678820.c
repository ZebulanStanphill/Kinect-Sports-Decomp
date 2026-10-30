typedef struct Obj_82678820 {
  char pad[0x10]; unsigned char f10;
  char pad1[0xd8 - 0x11]; void *fd8;
  char pad2[0x11c - 0xdc]; char f11c[0x17c - 0x11c];
  int f17c; int f180;
  char pad3[0x1a8 - 0x184]; int f1a8;
  char pad4[4]; int f1b0;
  char pad5[0x1bc - 0x1b4]; int *f1bc;
  char pad6[0x2294 - 0x1c0]; char f2294[1];
} Obj_82678820;
extern void fn_82640058(void *, int, int, void *, int);
extern void fn_82677F48(void *, void *);
extern void fn_82678428(void *, void *);
void fn_82678820(Obj_82678820 *o, unsigned idx, int n)
{
  if (o->f10 != 0 && o->f1bc != 0) {
    fn_82677F48(o->f2294, o);
    fn_82678428(o, o->f11c);
    fn_82640058(o->fd8, 3, n + 1, o->f1bc + idx, 4);
    o->f17c = o->f17c + n;
    o->f180 = o->f180 + 1;
    { int *q = &o->f1b0; q[0] += n; o->f1a8++; }
  }
}
