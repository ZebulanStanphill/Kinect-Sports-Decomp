extern void fn_82E50CB8(void *lock);
extern void fn_82E50F10(void *lock);

typedef struct Quad_82E54A98 { int v[4]; } Quad_82E54A98;
typedef struct Obj_82E54A98 {
  int f0;
  int f4;
  unsigned char lock[0x3c];
  Quad_82E54A98 q;
} Obj_82E54A98;

int fn_82E54A98(Obj_82E54A98 *o, Quad_82E54A98 *out)
{
  if (out == 0) {
    return 0x80070057;
  }
  fn_82E50CB8(o->lock);
  *out = o->q;
  fn_82E50F10(o->lock);
  return 0;
}
