extern void *memcpy(void *, const void *, unsigned);
extern int fn_82E78690(void *, unsigned, unsigned *);

static __forceinline unsigned sel_82E78E18(int ok, unsigned v) { return ok ? v : 0; }

int fn_82E78E18(char *self, unsigned idx, void *dst)
{
  unsigned buf;
  unsigned t;
  if ((*(unsigned char *)(self + 0x238) & 2) == 0) {
    return 0xC00D3A98;
  }
  if (*(int *)(self + 0x13c) != 0) {
    return 0xC00D3A9B;
  }
  idx = idx & 0xffff;
  if (idx >= *(unsigned short *)(self + 0x146)) {
    return 0x80070057;
  }
  if (idx >= *(unsigned *)(self + 0x1e0)) {
    return 0xC00D3A98;
  }
  t = fn_82E78690(self + 0x178, idx, &buf);
  t = sel_82E78E18(t, buf);
  if (t == 0) {
    return 0xC00D36BB;
  }
  memcpy(dst, (void *)t, 0x125);
  return 0;
}
