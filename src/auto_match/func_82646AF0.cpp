struct Mask_82646AF0 {
  unsigned __int64 v;
  void Set(unsigned __int64 m) { v |= m; }
};

struct Flag8_82646AF0 {
  unsigned char v;
  void Set(unsigned char m) { v |= m; }
  void Clear(unsigned char m) { v &= ~m; }
};

typedef struct Dev_82646AF0 Dev_82646AF0;

typedef struct {
  unsigned int base;
  unsigned int f4;
  unsigned int f8;
  unsigned int *cur;
  unsigned int *end;
  Dev_82646AF0 *owner;
} Buf_82646AF0;

struct Dev_82646AF0 {
  char pad0[0x10];
  Mask_82646AF0 dirty;
  char pad18[0x28 - 0x18];
  unsigned __int64 pending;
  char pad30[0x2a90 - 0x30];
  volatile unsigned int *readPtr;
  char pad2a94[0x2abc - 0x2a94];
  Flag8_82646AF0 flags0;
  Flag8_82646AF0 flags1;
  unsigned char flags2;
  unsigned char flags3;
  char pad2ac0[0x2c3c - 0x2ac0];
  unsigned int shift;
  char pad2c40[0x3234 - 0x2c40];
  char state[0x3434 - 0x3234];
  unsigned int sizeBits;
  char pad3438[0x3470 - 0x3438];
  Buf_82646AF0 bufA;
  char pad3488[0x34e8 - 0x3488];
  Buf_82646AF0 bufB;
  Buf_82646AF0 cmd;
};

extern "C" void fn_8264EF50(void);
extern "C" void fn_82639DB0(Dev_82646AF0 *, void *);
extern "C" void fn_82643AC0(Buf_82646AF0 *);
extern "C" unsigned int *fn_82643B08(Buf_82646AF0 *);
extern "C" void fn_82645110(Dev_82646AF0 *);
extern "C" void fn_826458A0(Dev_82646AF0 *, unsigned int, void *, unsigned int);
extern "C" void fn_82645EA8(Dev_82646AF0 *, unsigned int);
extern "C" int fn_82646DB8(Dev_82646AF0 *);

static unsigned int gpuAddr(unsigned int p)
{
  if (p == 0)
    return 0;
  return ((p >> 20) + 0x200 & 0x1000) + (p & 0x1fffffff) - 0x40000000;
}

static unsigned int *reserve(Buf_82646AF0 *b, int n)
{
  unsigned int *p = b->cur;
  if (p + n > b->end)
    p = fn_82643B08(b);
  return p;
}

static void resetBuf(Buf_82646AF0 *b, Dev_82646AF0 *d)
{
  b->owner = d;
  b->f4 = 0;
  b->f8 = 0x1080;
  b->cur = 0;
  b->end = 0;
  b->base = 0;
  fn_82643B08(b);
}

extern "C" int fn_82646AF0(Dev_82646AF0 *d)
{
  int result = 0;
  unsigned int rp = *d->readPtr;
  unsigned __int64 pending;
  unsigned int *p;

  if ((d->flags0.v & 0x20) != 0) {
    unsigned int size;
    fn_82643AC0(&d->bufA);
    fn_82643AC0(&d->bufB);
    size = 0x1000000 << d->shift;
    if ((d->sizeBits & 0x3f000000) != 0)
      size = d->sizeBits & 0x3f000000;
    fn_82645EA8(d, 0x80000000);
    fn_826458A0(d, size, fn_8264EF50, gpuAddr(d->cmd.base));
    fn_82645EA8(d, 0);
    fn_82645110(d);
    p = reserve(&d->cmd, 2);
    p[0] = 0x88000000;
    p[1] = 0x80000000;
    d->cmd.cur = p + 2;
    p = reserve(&d->cmd, 3);
    p[0] = 0x89000000;
    p[1] = gpuAddr(d->bufA.base);
    p[2] = gpuAddr(d->bufB.base);
    d->cmd.cur = p + 3;
    resetBuf(&d->bufA, d);
    resetBuf(&d->bufB, d);
  } else {
    fn_82645110(d);
  }
  p = reserve(&d->cmd, 1);
  p[0] = 0x84000000;
  d->flags1.Set(0x80);
  d->cmd.cur = p + 1;
  d->flags0.Clear(0x40);
  d->dirty.Set(8);
  d->dirty.Set(0x100000000000000ULL);
  pending = d->pending;
  d->dirty.Set(0x2000000000ULL);
  pending &= ~0x2000000000ULL;
  if ((d->flags3 & 0x20) != 0) {
    fn_82639DB0(d, d->state);
    d->dirty.Set(0x100);
    pending &= ~0x200000000000000ULL;
    d->dirty.Set(0x200000000000000ULL);
  }
  d->pending = pending;
  if ((d->flags1.v & 0x40) != 0)
    result = fn_82646DB8(d);
  return result;
}
