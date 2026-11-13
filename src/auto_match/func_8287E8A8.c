extern void fn_825ACAC8(void *self, void *alloc);

typedef struct {
  int f0;
  char a[0x1c];
  char b[0x14];
} Sub_8287E8A8;

typedef struct {
  char pad0[0x10];
  int f10;
  int f14;
  int f18;
  char pad1c[0xc];
  Sub_8287E8A8 sub;
  char pad5c[8];
  int f64;
  int f68;
  int f6c;
  int pad70;
  int f74;
  int f78;
  int f7c;
  char pad80[0x4c];
  int fcc;
  int fd0;
  int fd4;
} Obj_8287E8A8;

Obj_8287E8A8 *fn_8287E8A8(Obj_8287E8A8 *o)
{
  char al;
  Sub_8287E8A8 *s = &o->sub;
  o->f10 = 0;
  o->f14 = 0;
  o->f18 = 0;
  fn_825ACAC8(s->a, &al);
  fn_825ACAC8(s->b, &al);
  o->f64 = 0;
  o->f68 = 0;
  o->f6c = 0;
  o->f74 = 0;
  o->f78 = 0;
  o->f7c = 0;
  o->fcc = 0;
  o->fd0 = 0;
  o->fd4 = 0;
  return o;
}
