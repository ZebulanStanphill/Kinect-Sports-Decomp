typedef struct Ctx {
  char p0[0xc];
  int mode0;
  int mode1;
  unsigned int x14;
  unsigned int x18;
  unsigned int x1c;
  unsigned int x20;
  unsigned int x24;
  unsigned int x28;
  unsigned int x2c;
  unsigned int x30;
  unsigned int x34;
  unsigned int x38;
  unsigned int x3c;
  unsigned int x40;
  unsigned int x44;
  unsigned int x48;
  unsigned int x4c;
  char p50[0x38dc - 0x50];
  unsigned int x38dc;
} Ctx;

extern void fn_82EDF318(Ctx *);

int fn_82EDFDE0(unsigned int base0, unsigned int base1, Ctx *c, unsigned int p4, unsigned int p5)
{
  if (c->mode0 == 0) {
    c->x14 = c->x34 + base0;
  }
  else if (c->mode0 == 1) {
    c->x18 = c->x38 + base0;
    if (p4 != 0) {
      c->x1c = p4;
    }
    else {
      c->x1c = c->x3c + base0;
    }
    if (p5 != 0) {
      c->x20 = p5;
    }
    else {
      c->x20 = c->x40 + base0;
    }
  }
  if (c->mode1 == 0) {
    c->x24 = c->x44 + base1;
  }
  else if (c->mode1 == 1) {
    c->x28 = base1;
    c->x2c = c->x48 + base1;
    c->x30 = c->x4c + base1;
  }
  if (c->x38dc == 1) {
    fn_82EDF318(c);
  }
  return 0;
}
