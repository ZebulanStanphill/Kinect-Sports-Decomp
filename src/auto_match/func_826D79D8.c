int fn_826D79D8(int *p, unsigned *key, unsigned idx)
{
  int r = idx;
  unsigned *e = (unsigned *)(idx * 0x10 + *p + 8);
  if (*e != 0xfffffffe && e[1] == idx) {
    for (;;) {
      if (e[1] == idx && e[2] == *key) return r;
      r = *e;
      if (r == -1) break;
      e = (unsigned *)(r * 0x10 + *p + 8);
    }
  }
  return -1;
}
