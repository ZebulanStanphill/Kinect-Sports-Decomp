extern void *memset(void *, int, unsigned);

typedef struct Sub_82E91FE8 {
  int a;
  int b;
  int pad;
  float x;
  float y;
  int c[5];
  unsigned char buf[0x54];
  int d;
  float z;
  int e;
} Sub_82E91FE8;

typedef struct Obj_82E91FE8 {
  int f[8];
  int f20;
  Sub_82E91FE8 s;
  int fac;
} Obj_82E91FE8;

static __forceinline void Sub_Ctor(Sub_82E91FE8 *s)
{
  s->a = 0;
  s->b = 0;
  s->x = 0.0f;
  s->y = 0.0f;
  s->c[0] = 0;
  s->c[1] = 0;
  s->c[2] = 0;
  s->c[3] = 0;
  s->c[4] = 0;
  s->d = 0;
  s->z = 0.0f;
  s->e = 0;
  memset(s->buf, 0, sizeof(s->buf));
}

Obj_82E91FE8 *fn_82E91FE8(Obj_82E91FE8 *o)
{
  o->f[0] = 0;
  o->f[1] = 0;
  o->f[2] = 0;
  o->f[3] = 0;
  o->f[4] = 0;
  o->f[5] = 0;
  o->f[6] = 0;
  o->f[7] = 0;
  o->f20 = 1;
  Sub_Ctor(&o->s);
  o->fac = 0;
  return o;
}
