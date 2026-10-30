typedef struct Obj_82ABE450 { char pad[0x300]; void *tbl; } Obj_82ABE450;
extern unsigned *fn_82636118(void *, int);

unsigned char fn_82ABE450(Obj_82ABE450 *o, int idx, unsigned char p3, unsigned p4, unsigned p5)
{
  unsigned char r = 1;
  unsigned *e;

  if (p4 == 0) {
    e = fn_82636118(o->tbl, idx - 1);
    if ((e[1] & 0xf000) != 0x5000 || ((e[1] >> 10) & 1) != (p5 & 0xff)) {
      p3 = 1;
    }
  }
  if (p3 != 0) {
    unsigned short *w = (unsigned short *)fn_82636118(o->tbl, idx);
    if ((*w & 0xaaa) != 0) r = 0;
  }
  return r;
}
