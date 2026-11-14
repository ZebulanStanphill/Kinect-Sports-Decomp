extern void *XMemSet(void *, int, unsigned);

typedef struct Obj_83024AD8 {
  char pad0[0x74];
  int f74;
  char pad78[0x100 - 0x78];
  void *f100;
  char pad104[4];
  int f108;
  char pad10c[2];
  short f10e;
  char pad110[0x168 - 0x110];
  unsigned f168;
} Obj_83024AD8;

void fn_83024AD8(Obj_83024AD8 *o)
{
  if (o->f100 != 0) {
    if (o->f108 == 0x11) o->f74 = 4; else o->f74 = 1;
    o->f108 = 0x11;
    o->f10e = 0;
  }
  XMemSet(o->f100, 0, o->f168);
}
