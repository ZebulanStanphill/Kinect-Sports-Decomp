typedef struct Bits_82B166D8 {
  unsigned pad : 18;
  unsigned kind : 7;
  unsigned rest : 7;
} Bits_82B166D8;

typedef struct Obj_82B166D8 {
  int f0;
  int f4;
  Bits_82B166D8 bits;
} Obj_82B166D8;

static __forceinline unsigned char isRange_82B166D8(unsigned int k)
{
  return k >= 0x10 && k <= 0x12;
}

unsigned char fn_82B166D8(Obj_82B166D8 *o)
{
  unsigned int k = o->bits.kind;
  return isRange_82B166D8(k) || k == 2 || k == 0xc;
}
