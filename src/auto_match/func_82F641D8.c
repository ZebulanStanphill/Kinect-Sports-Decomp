extern unsigned int lbl_831BB230;

unsigned int _set_abort_behavior(unsigned int flags, unsigned int mask)
{
  unsigned int oldflags = lbl_831BB230;
  lbl_831BB230 = oldflags & ~mask | flags & mask;
  return oldflags;
}
