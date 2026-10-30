typedef struct Pt_829F2A30 { int x; int y; int z; int w; } Pt_829F2A30;
int fn_829F2A30(unsigned short *grid, int stride, Pt_829F2A30 p, short v, int unused, int base)
{
  unsigned int e;
  if (p.x >= 0 && p.x < 0x50 && p.y >= 0 && p.y < 0x3c) {
    e = grid[p.y * stride + p.x];
    if (((int)e >> 3) - base < 0x28 && (int)(e & 7) == v) return 0;
  }
  return 1;
}
