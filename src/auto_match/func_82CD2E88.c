typedef struct Fmt_82CD2E88 {
  char pad0[0xe];
  unsigned short bits;
  unsigned type;
  char pad1[0x14];
  unsigned m28, m2c, m30;
} Fmt_82CD2E88;
typedef struct Out_82CD2E88 {
  char pad[0x70];
  unsigned x70, x74, x78, x7c;
} Out_82CD2E88;

int fn_82CD2E88(Fmt_82CD2E88 *f, Out_82CD2E88 *o)
{
  o->x74 = 0;
  o->x7c = 0;
  o->x70 = 0;
  o->x78 = 0;
  if (f->type == 0) {
    if (f->bits == 0x10) {
      o->x74 = 7;
      o->x7c = 2;
      o->x70 = 0x7c00;
      o->x78 = 0x3e0;
      return 0;
    }
  } else if (f->type == 3) {
    unsigned short b = f->bits;
    if (b == 0x10) {
      if (f->m28 == 0x7c00 && f->m2c == 0x3e0 && f->m30 == 0x1f) {
        o->x74 = 7;
        o->x7c = 2;
        o->x70 = 0x7c00;
        o->x78 = 0x3e0;
        return 0;
      }
      if (f->m28 == 0xf800 && f->m2c == 0x7e0 && f->m30 == 0x1f) {
        o->x74 = 8;
        o->x7c = 3;
        o->x70 = 0xf800;
        o->x78 = 0x7e0;
        return 0;
      }
      return 3;
    } else if ((b == 0x18 || b == 0x20) && f->m28 == 0xff0000 && f->m2c == 0xff00 && f->m30 == 0xff)
      return 0;
    return 3;
  }
  return 0;
}
