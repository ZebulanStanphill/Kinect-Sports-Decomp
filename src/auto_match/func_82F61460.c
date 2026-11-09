void *memset(void *dst, int c, unsigned int n);

typedef struct {
  int f00;
  int f04;
  int f08;
  unsigned char block[0x18];
  int f24;
  int f28;
  int f2c;
  int f30;
  int f34;
  unsigned char b38;
  unsigned char b39;
  int f3c;
  int f40;
} Obj_82F61460;

Obj_82F61460 *fn_82F61460(Obj_82F61460 *p)
{
  p->f30 = 0;
  p->f34 = 0;
  p->f00 = 0;
  p->f04 = 0;
  p->f24 = 0;
  p->f28 = 0;
  p->f2c = 0;
  p->b38 = 0;
  p->b39 = 0;
  memset(p->block, 0, sizeof(p->block));
  p->f3c = 0;
  p->f40 = 0;
  return p;
}
