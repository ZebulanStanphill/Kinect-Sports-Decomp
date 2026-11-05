typedef struct In_827FED58 {
  char pad0[0x1c];
  char f1c, f1d, f1e, f1f, f20, f21, f22;
} In_827FED58;

typedef struct Mid_827FED58 {
  char pad[0x30];
  In_827FED58 *in;
} Mid_827FED58;

unsigned char fn_827FED58(Mid_827FED58 **pp)
{
  unsigned char r = 0;
  In_827FED58 *p = (*pp)->in;

  if (p == 0) return r;
  if (p->f1f != 0) r = 1;
  if (p->f20 != 0) r |= 2;
  if (p->f21 != 0) r |= 4;
  if (p->f22 != 0) r |= 8;
  if (p->f1c != 0) r |= 0x10;
  if (p->f1d != 0) r |= 0x20;
  if (p->f1e != 0) r |= 0x40;
  return r;
}
