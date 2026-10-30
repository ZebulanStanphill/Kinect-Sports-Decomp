typedef struct Row_82F115C8 {
  int f00, f04, f08, f0c;
  int w;
  int h;
  int f18, f1c;
  int cnt;
  int f24, f28, f2c, f30;
  int f34;
  int f38, f3c, f40, f44, f48, f4c;
  int f50, f54;
} Row_82F115C8;
typedef struct Dst_82F115C8 {
  char pad0[0x2d0];
  int f2d0, f2d4, f2d8, f2dc;
  char pad2e0[0x31c - 0x2e0];
  int w, h, area;
  int f328, f32c;
  int fw2, fw1, fh2, fh1;
  int f340;
  char pad344[0x548 - 0x344];
  int f548, f54c, f550, f554, f558, f55c, f560, f564, f568, f56c, f570, f574, f578, f57c, f580, f584;
  char pad588[0x1a4c - 0x588];
  int f1a4c;
} Dst_82F115C8;
typedef struct Whole_82F115C8 {
  Dst_82F115C8 d;
} Whole_82F115C8;

void fn_82F115C8(Dst_82F115C8 *d, int n)
{
  Row_82F115C8 *r = (Row_82F115C8 *)((char *)d + 0x6e48) + n;
  int v;
  int hw, hh;
  d->f548 = r->f00;
  d->f554 = r->f04;
  d->f550 = r->f08;
  d->f55c = r->f0c;
  d->w = r->w;
  d->h = r->h;
  d->area = d->w * d->h;
  hw = (d->w + 1) >> 1;
  hh = (d->h + 1) >> 1;
  d->fw1 = hw;
  d->fh1 = hh;
  d->fw2 = hw << 1;
  d->fh2 = hh << 1;
  d->f54c = r->f18;
  d->f558 = r->f1c;
  d->f560 = r->cnt;
  d->f340 = r->f24;
  v = r->f28;
  d->f2d0 = v;
  v = v * 0x600;
  if (v < 0x1800) {
    v = 0x1800;
  }
  d->f1a4c = v;
  d->f2d4 = r->f2c;
  d->f2d8 = r->f30;
  d->f2dc = r->f34;
  d->f564 = r->f38;
  d->f568 = r->f3c;
  d->f56c = r->f40;
  d->f570 = r->f44;
  d->f574 = r->f48;
  d->f578 = r->f4c;
  d->f57c = r->f50;
  d->f580 = r->f54;
  d->f584 = d->f568 << 4;
}
