typedef struct Tex_82ED57E0 {
  int f0;
  int w;
  int h;
  unsigned short pad0c;
  unsigned short bpp;
  unsigned flag;
  int pitch;
  int rest[4];
} Tex_82ED57E0;

typedef struct {
  char pad0[0x4aa8];
  Tex_82ED57E0 *pa;
  Tex_82ED57E0 ta;
  Tex_82ED57E0 tb;
  Tex_82ED57E0 *pb;
  char pad4b00[0x77a0 - 0x4b00];
  int f77a0;
  int f77a4;
} Obj_82ED57E0;

void fn_82ED57E0(Obj_82ED57E0 *o, Tex_82ED57E0 *a, Tex_82ED57E0 *b, Tex_82ED57E0 *c)
{
  if (a != 0 && a->w > 0 && a->h > 0)
    o->pa = a;
  if (b != 0 && b->w > 0 && b->h > 0)
    o->ta = *b;
  if (c != 0 && c->w > 0 && c->h > 0)
    o->pb = c;
  if (o->f77a0 == 0 && o->f77a4 == 0)
    return;
  if (c == 0)
    return;
  if (c->w <= 0)
    return;
  if (c->h <= 0)
    return;
  if (b == 0)
    return;
  if (b->w <= 0)
    return;
  if (b->h <= 0)
    return;
  o->tb = *c;
  o->tb.f0 = o->ta.f0;
  o->tb.flag = o->ta.flag;
  o->tb.bpp = o->ta.bpp;
  if (o->ta.flag == 0)
    o->tb.pitch = (((o->tb.w * o->ta.bpp + 0x1f) & ~0x1f) / 8) * o->tb.h;
  else
    o->tb.pitch = (o->tb.h * o->tb.w * o->ta.bpp) / 8;
}
