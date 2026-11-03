extern void fn_826824B0(unsigned);
extern void fn_826C3378(void *, unsigned, unsigned);

void fn_826C3768(unsigned *self, unsigned *src)
{
  unsigned old, nw;
  unsigned t;
  unsigned f;
  if (self != src) {
    old = *self;
    if ((*(unsigned char *)(self + 2) & 2) == 0 && old != 0 && old != *src) {
      fn_826824B0(old);
    }
    *self = *src;
    if ((*(unsigned char *)(self + 2) & 2) == 0) {
      nw = *src;
      if (nw != 0 && old != nw) {
        *(unsigned *)(nw + 8) = (*(unsigned *)(nw + 8) + 1) & 0x8fffffff;
      }
    }
    t = src[1];
    if (t != 0) {
      fn_826C3378(self, t, *(unsigned char *)(src + 2) & 1);
    } else {
      fn_826C3378(self, 0, 0);
    }
  }
}
