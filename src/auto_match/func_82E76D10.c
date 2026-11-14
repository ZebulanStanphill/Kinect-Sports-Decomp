typedef struct Obj_82E76D10 {
  char pad[0x159];
  unsigned char a;  /* 0x159 */
  unsigned char b;  /* 0x15a */
  char pad15b[2];
  unsigned char c;  /* 0x15d */
} Obj_82E76D10;

static __forceinline unsigned char SizeOf(unsigned char kind)
{
  unsigned char n = 0;
  switch (kind) {
  case 1: n = 1; break;
  case 2: n = 2; break;
  case 3: n = 4; break;
  }
  return n;
}

int fn_82E76D10(Obj_82E76D10 *o)
{
  int n = SizeOf(o->c) + 1;
  n += SizeOf(o->a);
  n += SizeOf(o->b);
  return n;
}
