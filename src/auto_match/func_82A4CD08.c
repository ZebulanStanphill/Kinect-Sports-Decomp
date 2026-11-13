extern int fn_82A4F4E0(void *);
extern int fn_82A5DDA0();
extern void *memset(void *, int, unsigned);

typedef struct Obj_82A4CD08 {
  char pad0[0x28];
  char f28[8];
  void *f30;
  char pad1[0x50 - 0x34];
  int f50, f54;
  float f58, f5c, f60, f64;
} Obj_82A4CD08;

void fn_82A4CD08(Obj_82A4CD08 *o)
{
  fn_82A5DDA0();
  o->f50 = 0;
  o->f54 = 0;
  o->f58 = 0.0f;
  if (o->f64 < o->f5c) {
    o->f64 = o->f5c;
  }
  if (o->f64 > o->f60) {
    o->f64 = o->f60;
  }
  if (o->f30 != 0) {
    fn_82A4F4E0(o->f30);
    o->f30 = 0;
  }
  memset((char *)o + 0x28, 0, 0x28);
}
