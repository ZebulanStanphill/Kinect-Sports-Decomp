extern int fn_8267B890(int, unsigned int, int);
extern int fn_8267BDA8(unsigned int, unsigned int);


typedef struct { unsigned int h; int pad; unsigned int f8; unsigned int fc; int pad2; int f14; } Obj_8268B050;
void fn_8268B050(Obj_8268B050 *p, unsigned int n)
{
  unsigned int sz;
  int r;
  if (n >= p->f8) {
    sz = (p->fc + n) & ~(p->fc - 1);
    p->f8 = sz;
    if (p->h == 0) {
      r = fn_8267B890(p->f14, sz, 0);
    }
    else {
      r = fn_8267BDA8(p->h, sz);
    }
    p->h = r;
  }
}
