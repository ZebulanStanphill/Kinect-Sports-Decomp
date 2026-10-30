typedef struct { char pad0[0x22]; unsigned short w22; } Hdr_82A52118;
typedef struct {
  Hdr_82A52118 *obj;
  void *f4;
  char pad8[0x78 - 8];
  char sub78[0xc0 - 0x78];
  void *fc0;
  char padc4[0x158 - 0xc4];
  void *f158;
  void *f15c;
  char pad160[0x168 - 0x160];
  int count;
  char pad16c[0x174 - 0x16c];
  void **arrA;
  void **arrB;
  void *f17c;
  char pad180[0x184 - 0x180];
  void *f184;
  char pad188[0x1ac - 0x188];
  void *f1ac;
  char pad1b0[0x1c0 - 0x1b0];
  void *f1c0;
  char pad1c4[0x1d0 - 0x1c4];
  void *f1d0;
  void *f1d4;
} Obj_82A52118;
extern void fn_82A52068(void *, void *);
extern void fn_82A68F58(void *);
extern void fn_82A69188(void *, void *);
extern void fn_82A6B4B0(void *);
extern void fn_82A6C3A0(void *, unsigned short);
extern void fn_82C2B590(void *);
int fn_82A52118(Obj_82A52118 *p)
{
  Hdr_82A52118 *o;
  int i;
  if (p != 0) {
    o = p->obj;
    if (o != 0) fn_82A6C3A0(p->sub78, o->w22);
    if (p->arrA != 0) {
      i = 0;
      if (0 < p->count) do {
        if (p->arrA[i] != 0) { fn_82C2B590(p->arrA[i]); p->arrA[i] = 0; }
        i++;
      } while (i < p->count);
    }
    if (p->arrA != 0) { fn_82C2B590(p->arrA); p->arrA = 0; }
    if (p->arrB != 0) {
      for (i = 0; i < p->count; i++) {
        if (p->arrB[i] != 0) { fn_82C2B590(p->arrB[i]); p->arrB[i] = 0; }
      }
    }
    if (p->arrB != 0) { fn_82C2B590(p->arrB); p->arrB = 0; }
    if (p->fc0 != 0) { fn_82C2B590(p->fc0); p->fc0 = 0; }
    if (p->f17c != 0) { fn_82C2B590(p->f17c); p->f17c = 0; }
    if (p->f184 != 0) { fn_82C2B590(p->f184); p->f184 = 0; }
    fn_82A52068(p, p->f4);
    if (o != 0) { fn_82A69188(o, p->f4); p->f4 = 0; }
    if (p->f1ac != 0) { fn_82A6B4B0(p->f1ac); fn_82C2B590(p->f1ac); }
    if (p->f15c != 0) fn_82C2B590(p->f15c);
    if (p->f158 != 0) fn_82C2B590(p->f158);
    if (p->f1c0 != 0) { fn_82C2B590(p->f1c0); p->f1c0 = 0; }
    if (p->f1d0 != 0) { fn_82C2B590(p->f1d0); p->f1d0 = 0; }
    if (p->f1d4 != 0) { fn_82C2B590(p->f1d4); p->f1d4 = 0; }
    if (o != 0) { fn_82A68F58(p->obj); p->obj = 0; }
  }
  return 0;
}
