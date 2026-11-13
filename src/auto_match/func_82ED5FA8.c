typedef struct Obj_82ED5FA8 {
  char pad[0x1fa4];
  void (*f1fa4)(void *, int, void *);
  char pad1[0x1fc0 - 0x1fa8];
  void (*f1fc0)(struct Obj_82ED5FA8 *, int *, void *, int, int);
  char pad2[0x203c - 0x1fc4];
  int f203c;
} Obj_82ED5FA8;
extern void fn_82F07E00(Obj_82ED5FA8 *, short *, int, void *, int, int);

void fn_82ED5FA8(Obj_82ED5FA8 *o, int *a2, void *a3, void *a4, short *a5, short *a6, signed char mask, int a8, int a9)
{
  if ((mask & 8) != 0) {
    fn_82F07E00(o, a5, a6[0], a4, o->f203c, a9);
    o->f1fa4(a3, 8, a4);
    o->f1fc0(o, a2, a3, a8, 8);
    a5 = a5 + a6[0];
  }
  if ((mask & 4) != 0) {
    fn_82F07E00(o, a5, a6[1], a4, o->f203c, a9);
    o->f1fa4(a3, 8, a4);
    o->f1fc0(o, a2 + 1, a3, a8, 8);
    a5 = a5 + a6[1];
  }
  if ((mask & 2) != 0) {
    fn_82F07E00(o, a5, a6[2], a4, o->f203c, a9);
    o->f1fa4(a3, 8, a4);
    o->f1fc0(o, a2 + a8, a3, a8, 8);
    a5 = a5 + a6[2];
  }
  if ((mask & 1) != 0) {
    fn_82F07E00(o, a5, a6[3], a4, o->f203c, a9);
    o->f1fa4(a3, 8, a4);
    o->f1fc0(o, a2 + (a8 + 1), a3, a8, 8);
  }
}
