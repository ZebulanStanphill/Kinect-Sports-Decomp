typedef struct { unsigned f0; int pad; int f8; int fc; } Obj_822A13C8;
extern void fn_8266F628(unsigned, int);
extern void fn_8266F640(unsigned, int);

void fn_822A13C8(Obj_822A13C8 *o, const unsigned char *p)
{
  const unsigned char *q = p;
  unsigned c;
  unsigned char b;
  c = *p;
  b = 0x68;
  if (c == 0x68) {
    int d = (int)"hasReachedEnd" - (int)p;
    do {
      q++;
      if (c == 0) goto match;
      b = q[d];
      c = *q;
    } while (c == b);
  }
  if (c - b == 0) {
match:
    fn_8266F640(o->f0, 1);
    fn_8266F628(o->f0, 1);
    o->f8 = 0;
    o->fc = 0;
  }
}
