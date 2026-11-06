typedef struct {
  char pad0[9];
  unsigned char f9;
  unsigned short fa;
  unsigned short fc;
} Obj_82D8B2F8;

void fn_82D8B2F8(Obj_82D8B2F8 *o, unsigned char on, unsigned int c, unsigned int d, unsigned int e, unsigned int f)
{
  unsigned int x;
  unsigned int y;

  if (on != 0) {
    o->f9 = c & 0xf;
    if ((f & 3) < (c & 3)) {
      x = ~d << 14;
    } else {
      x = d << 14;
    }
    if ((int)f < (int)(c & 0xf)) {
      y = ~e << 14;
    } else {
      y = e << 14;
    }
    o->fa = (o->fa & 0x3fff) | x;
    o->fc = (o->fc & 0x3fff) | y;
    return;
  }
  o->fa = 0;
  o->f9 = 0xff;
  o->fc = 0;
}
