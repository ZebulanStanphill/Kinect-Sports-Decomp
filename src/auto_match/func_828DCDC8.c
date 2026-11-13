extern void fn_828AC488(void *obj);
extern void *fn_828D4D10(void *obj, unsigned int value, int flag);
extern void fn_828DCC88(void *list, void *item);
extern int fn_828E9D90(void *stream);
extern int fn_828E9DA8(void *stream);
extern unsigned int fn_828E9FF8(void *stream, int bits);

static __forceinline unsigned int ReadBits_828DCDC8(void *stream, int bits)
{
  if (fn_828E9DA8(stream) - fn_828E9D90(stream) >= bits) {
    return fn_828E9FF8(stream, bits);
  }
  return 0;
}

void fn_828DCDC8(char *self, void *stream)
{
  unsigned char tmpA[64];
  unsigned char tmpB[64];
  unsigned int v;

  *(unsigned int *)(self + 0x80) = ReadBits_828DCDC8(stream, 2);
  *(unsigned int *)(self + 0x84) = ReadBits_828DCDC8(stream, 2);
  for (;;) {
    if (ReadBits_828DCDC8(stream, 1) == 0) {
      break;
    }
    v = ReadBits_828DCDC8(stream, 2);
    fn_828D4D10(tmpB, v, 0);
    fn_828DCC88(self + 0x88, fn_828D4D10(tmpA, v, 0));
    fn_828AC488(tmpA);
    fn_828AC488(tmpB);
  }
}
