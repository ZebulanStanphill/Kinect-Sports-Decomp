typedef struct Bits_82AE91E8 {
  unsigned pad : 18;
  unsigned kind : 7;
  unsigned rest : 7;
} Bits_82AE91E8;

typedef struct Obj_82AE91E8 {
  int f0;
  int f4;
  Bits_82AE91E8 bits;
} Obj_82AE91E8;

static __forceinline unsigned char isValid_82AE91E8(unsigned int k)
{
  return k >= 1 && k <= 0x52;
}

int fn_82AE91E8(Obj_82AE91E8 *o)
{
  return isValid_82AE91E8(o->bits.kind) != 0;
}
