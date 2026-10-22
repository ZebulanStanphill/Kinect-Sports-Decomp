typedef struct A A;
typedef struct B B;
typedef unsigned char (*BoolFnA)(A *);
typedef unsigned char (*BoolFnB)(B *);
struct B {
  BoolFnB *vt;
  int pad04[4];
  int v14;
  int pad18[(0xe4 - 0x18) / 4];
  unsigned int pad_hi : 22;
  unsigned int flag : 1;
  unsigned int pad_lo : 9;
};
struct A {
  BoolFnA *vt;
  int pad04[(0xac - 4) / 4];
  B *bac;
  int padb0;
  B *bb4;
};
extern unsigned char fn_82BC2360(B *b, A *a);

unsigned char fn_82BD3338(A *a, B *b, int unused, int key, int mode)
{
  if (mode == 0) {
    if (!(((unsigned char)b->flag && key == b->v14 && fn_82BC2360(b, a)) ||
        (b->vt[0x48 / 4](b) &&
         ((a->vt[0x44 / 4](a) && a->bac == b) ||
          (a->vt[0x18 / 4](a) && a->vt[0x1c / 4](a) && a->bb4 == b)))))
      return 1;
  }
  else if (mode == 1) {
    return 1;
  }
  return 0;
}
