extern int fn_82FB60A0(int, int, int, int);
extern int lbl_831BC768;
typedef struct { int a24; int arr[0xc1]; int a32c; } Blk;
typedef struct { int p0; int sub[8]; Blk b; } Obj;
int fn_8301A6B8(Obj *o)
{
  int r = fn_82FB60A0((int)o + 4, 8, -1, lbl_831BC768);
  if (r == 1) {
    int i;
    int *q = &o->b.a24;
    int g = lbl_831BC768;
    o->b.a32c = 0;
    o->b.a24 = g;
    for (i = 0; i < 0xc1; i++) q[i + 1] = 0;
    return 1;
  }
  return r;
}
