typedef struct { unsigned f0; int pad; unsigned char f8; unsigned char f9; } Obj_822A1178;
extern void fn_8266F628(unsigned, int);
extern void fn_8266F640(unsigned, int);

void fn_822A1178(Obj_822A1178 *o, const unsigned char *p)
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
    o->f9 = 0;
  }
}
