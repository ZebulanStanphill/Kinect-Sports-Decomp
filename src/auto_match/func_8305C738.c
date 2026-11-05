typedef struct V3 { int x, y, z; } V3;
typedef struct Obj_8305C738 {
  int p0, p4;
  char pad8[4];
  char b[0x28];
  V3 a, c, d;
  float zero;
  int pad5c, p60;
} Obj;
extern V3 lbl_821CA1A0;
extern void *memset(void *, int, unsigned);

void fn_8305C738(Obj *o)
{
  o->p4 = 0;
  o->p60 = 0;
  memset(o->b, 0, 0x28);
  o->a = lbl_821CA1A0;
  o->c = lbl_821CA1A0;
  o->d = lbl_821CA1A0;
  o->zero = 0.0f;
}
