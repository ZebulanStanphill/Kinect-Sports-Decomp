extern int fn_82E3C590(void *, unsigned, int);
extern int fn_82E3C5F8(void *, unsigned, unsigned short **);

int fn_82EE53B8(char *self, unsigned key)
{
  unsigned i;
  unsigned short *e;
  if (*(unsigned *)(self + 0xc) == 0) {
    return 0xC00D36B6;
  }
  for (i = 0; i < *(unsigned *)(self + 0x88); i++) {
    fn_82E3C5F8(self + 0x48, i, &e);
    if ((unsigned short)key == *e) return 1;
  }
  return fn_82E3C590(self + 0x48, key, 0) == 0 ? 0x8007000e : 0;
}
