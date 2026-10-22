extern void fn_82CE4040(void *p);
extern void *fn_82CE5410(void);
extern void *fn_82DFE070(void *mem, void *a);
extern void fn_82DFEC58(void *o, void *p);

typedef struct {
  void *f0;
  void *(*alloc)(void *self, int size);
} AllocVt;
typedef struct { AllocVt *vt; } Allocator;

typedef struct {
  void *f[7];
  unsigned char *(*make)(void *self, void *a, int b);
} MakerVt;
typedef struct { MakerVt *vt; } Maker;

typedef struct {
  void *f[3];
  void *(*clone)(void *self);
} CloneVt;
typedef struct { CloneVt *vt; } Cloner;

typedef struct {
  char pad0[0x8];
  int f8;
  int fc;
  char pad10[0x8];
  void *f18;
  void *a[8];
  unsigned char *f3c;
  void *f40;
  void *f44;
  char pad48[0x9c - 0x48];
  void *f9c;
} Out;

typedef struct {
  char pad0[0x3c];
  Maker *maker;
  void *f40;
  char pad44[0x9c - 0x44];
  Cloner *cloner;
} Src;

typedef struct {
  char pad[0x10];
  Allocator *allocator;
} Ctx;

Out *fn_82DFE938(Src *src, void ***pp, int arg)
{
  void *key;
  Ctx *ctx;
  short *mem;
  Out *o;
  unsigned char *m;

  key = **pp;
  ctx = fn_82CE5410();
  mem = ctx->allocator->vt->alloc(ctx->allocator, 0xd4);
  mem[2] = 0xd4;
  o = fn_82DFE070(mem, key);
  fn_82DFEC58(o, src);
  o->f18 = key;
  o->f8 = 0;
  o->fc = 0;
  m = src->maker->vt->make(src->maker, key, arg);
  o->f3c = m;
  m[8] = 1;
  o->f9c = src->cloner->vt->clone(src->cloner);
  fn_82CE4040(o->a[0]);
  fn_82CE4040(o->a[1]);
  fn_82CE4040(o->a[2]);
  fn_82CE4040(o->a[3]);
  fn_82CE4040(o->a[4]);
  fn_82CE4040(o->a[5]);
  fn_82CE4040(o->a[6]);
  fn_82CE4040(o->a[7]);
  fn_82CE4040(o->f44);
  if (src->f40 != 0) {
    fn_82CE4040(o->f40);
  }
  return o;
}
