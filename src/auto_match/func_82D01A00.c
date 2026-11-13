typedef struct Alloc_82D01A00 {
  int f0; unsigned f4; int f8; void *fc; void *f10; int f14; unsigned f18; unsigned f1c;
  int f20; int f24; int f28; int f2c; int f30;
} Alloc_82D01A00;

void fn_82D01A00(Alloc_82D01A00 *p, unsigned size, unsigned align, int a, int b)
{
  unsigned r;
  unsigned c;

  p->f14 = a;
  p->f18 = align;
  p->f0 = 0;
  p->fc = 0;
  p->f10 = 0;
  p->f20 = 0;
  p->f24 = 0;
  p->f28 = 0;
  p->f2c = 0;
  p->f30 = b;
  p->f8 = 0;
  if (size < align) {
    r = align;
  } else {
    r = (size + align - 1) & ~(align - 1);
  }
  p->f4 = r;
  if (align <= 0x10) {
    c = 0x1000;
  } else {
    c = align + 0xff0;
  }
  p->f1c = c;
}
