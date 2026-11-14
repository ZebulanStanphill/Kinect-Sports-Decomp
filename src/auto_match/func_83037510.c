typedef struct {
  void *data;            /* 0x0 */
  unsigned int mask;     /* 0x4 */
  int pad8;
  unsigned short count;  /* 0xc */
  unsigned short used;   /* 0xe */
} Table_83037510;
extern void *fn_82FEC7F0(unsigned int size);

int fn_83037510(Table_83037510 *t, unsigned short count, unsigned int mask)
{
  unsigned int m = mask;
  int bits = 0;
  void *data;
  while (m != 0) { bits++; m &= m - 1; }
  data = fn_82FEC7F0(count * bits * 4);
  if (data != 0) {
  t->data = data;
  t->count = count;
  t->mask = mask;
  t->used = 0;
    return 1;
  }
  return 0x34;
}
