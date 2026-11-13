typedef struct {
  char pad0[0x10];
  void *texture;
  int name;
  int f18;
  char pad1c[0xc];
  unsigned short f28;
  short pad2a;
  float f2c;
} Obj_82BF4790;

extern void *fn_82BE56B0(int n);
extern void *fn_82BF4368(void *mem, int name, int b, unsigned short c, float f, int d, int e);
extern void fn_82BE5240();

void *fn_82BF4790(Obj_82BF4790 *o, int arg)
{
  void *m = fn_82BE56B0(100);
  void *t;
  if (m)
    t = fn_82BF4368(m, o->name, o->f18, o->f28, o->f2c, 0x10, arg);
  else
    t = 0;
  if (t == 0) {
    fn_82BE5240(o, 0x65, "Dynamic CMassiveAdObjectTexture creation failed for IE: \"%s\"", o->name);
    o->texture = 0;
    return 0;
  }
  return t;
}
