typedef struct Obj Obj;
struct Obj {
  char pad0[0x1fa0];
  void (*f1fa0)(int a, int n, int b);
  char pad1[0x1fbc - 0x1fa4];
  void (*f1fbc)(Obj *o, int *dst, int a, int b, int n);
  char pad2[0x2038 - 0x1fc0];
  int x2038;
};

extern void fn_82F07E00(Obj *o, int a, int b, int c, int d, int e);

void fn_82ED5EB0(Obj *o, int *dst, int a3, int a4, int a5, int a6, int a7, int a8,
                 char flags, int a10, int a11)
{
  if ((flags & 2) != 0) {
    fn_82F07E00(o, a5, a6, a4, o->x2038, a11);
    o->f1fa0(a3, 8, a4);
    o->f1fbc(o, dst, a3, a10, 8);
  }
  if ((flags & 1) != 0) {
    fn_82F07E00(o, a7, a8, a4, o->x2038, a11);
    o->f1fa0(a3, 8, a4);
    o->f1fbc(o, dst + 1, a3, a10, 8);
  }
}
