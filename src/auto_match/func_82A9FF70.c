typedef struct { unsigned int off; unsigned short a, b, c; unsigned short pad; unsigned int pad2; unsigned int off2; } Src;

void fn_82A9FF70(void *self, unsigned int *d, unsigned int base, Src *s, unsigned short *q)
{
  d[0] = s->off + base;
  d[1] = s->a;
  d[2] = s->b;
  d[3] = s->c;
  d[0xb] = s->off2 ? s->off2 + base : 0;
  d[7] = q[3];
  d[6] = q[2];
  d[4] = q[0];
  d[5] = q[1];
  d[8] = q[4];
  d[9] = q[5];
}
