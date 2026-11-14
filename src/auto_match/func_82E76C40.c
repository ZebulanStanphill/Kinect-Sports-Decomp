typedef struct Obj_82E76C40 {
  char pad[0x151];
  unsigned char a;
  unsigned char b;
  unsigned char c;
  int flag;
} Obj_82E76C40;

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

int fn_82E76C40(Obj_82E76C40 *o)
{
  int n = SizeOf(o->a) + 2;
  n += SizeOf(o->c);
  n += SizeOf(o->b);
  n += 6;
  if (o->flag != 0) n += 1;
  return n;
}
