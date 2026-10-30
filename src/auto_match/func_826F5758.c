typedef struct Src_826F5758 {
  char pad0[8];
  int f8;
  int fc;
  int f10;
  int f14;
  int f18;
  int f1c;
  int f20;
  int f24;
  int f28;
  int f2c;
  int f30;
  int f34;
  int f38;
  int f3c;
} Src_826F5758;
typedef struct Dst_826F5758 {
  char pad0[8];
  unsigned int f8;
  unsigned int fc;
  unsigned int f10;
  unsigned int f14;
  unsigned int f18;
  unsigned int f1c;
  unsigned int f20;
  unsigned int f24;
  unsigned int f28;
  unsigned int f2c;
  unsigned int f30;
  unsigned int f34;
  unsigned int f38;
  unsigned int f3c;
} Dst_826F5758;
extern unsigned int lbl_831E7E64;
extern void *fn_8267B890(unsigned int, unsigned int, unsigned int);
extern void *fn_826F40E8(void *, int);
extern Dst_826F5758 *fn_826F5668(void *);
extern void fn_8267C4C8(unsigned int);
extern void fn_8267C4F0(unsigned int);

#define ASG(f) \
  if (s->f != 0) { fn_8267C4C8(s->f); } \
  if (d->f != 0) { fn_8267C4F0(d->f); } \
  d->f = s->f;

Dst_826F5758 *fn_826F5758(Src_826F5758 *s)
{
  void *mem;
  unsigned int e;
  Dst_826F5758 *d;

  mem = fn_8267B890(lbl_831E7E64, 0x2c, 0);
  if (mem != 0) {
    e = (unsigned int)fn_826F40E8(mem, s->f8);
  } else {
    e = 0;
  }
  mem = fn_8267B890(lbl_831E7E64, 0x54, 0);
  if (mem != 0) {
    d = fn_826F5668(mem);
  } else {
    d = 0;
  }
  if (d != 0) {
    if (e != 0) {
      fn_8267C4C8(e);
    }
    if (d->f8 != 0) {
      fn_8267C4F0(d->f8);
    }
    d->f8 = e;
    ASG(f3c)
    ASG(fc)
    ASG(f14)
    ASG(f18)
    ASG(f1c)
    ASG(f10)
    ASG(f38)
    ASG(f24)
    ASG(f28)
    ASG(f2c)
    ASG(f20)
    ASG(f34)
    ASG(f30)
  }
  if (e != 0) {
    fn_8267C4F0(e);
  }
  return d;
}
