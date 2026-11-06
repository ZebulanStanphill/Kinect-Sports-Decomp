typedef struct Fmt_828088F8 {
  char *base;
  int stride;
  unsigned char *map;
  char pad0c[0x32 - 0xc];
  unsigned short width;
} Fmt_828088F8;
typedef struct Obj_828088F8 {
  char pad0[0x48];
  unsigned short count;
  char pad4a[0x50 - 0x4a];
  unsigned char *mask;
  void *fill;
  char pad58[0x64 - 0x58];
  Fmt_828088F8 *fmt;
} Obj_828088F8;
typedef struct Key_828088F8 {
  int pad0;
  int index;
} Key_828088F8;
extern void *memcpy(void *, const void *, unsigned);

void fn_828088F8(Obj_828088F8 *o, Key_828088F8 *k, char *dst)
{
  Fmt_828088F8 *f = o->fmt;
  unsigned i;
  char *src = f->base + f->map[k->index] * f->stride;
  unsigned w = f->width;
  for (i = 0; i < o->count; i++) {
    if (o->mask != 0 && o->mask[i] == 0)
      memcpy(dst, o->fill, w * 4);
    else
      memcpy(dst, src, w * 4);
    dst += w * 4;
    src += w * 4;
  }
}
