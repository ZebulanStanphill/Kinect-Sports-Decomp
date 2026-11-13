extern void fn_8282AFD0(void *);

typedef struct {
  char pad0[0x34];
  int x34;
  unsigned int x38;
  char pad1[0x2b8 - 0x3c];
  unsigned int x2b8;
  unsigned int x2bc;
  unsigned int x2c0;
  unsigned int x2c4;
  char pad2[0x3e8 - 0x2c8];
  unsigned char x3e8;
} Obj;

typedef struct {
  char pad[0x14];
  unsigned int x14;
  unsigned int x18;
} Arg;

void fn_8282B068(Obj *p, Arg *a)
{
  if (a->x14 != 0) {
    if (a->x14 != p->x2c0 || a->x18 != p->x2c4) {
      if (p->x2b8 != 0) {
        p->x34++;
        if (p->x3e8 == 0)
          fn_8282AFD0(p);
        p->x2b8 = 0;
      }
      p->x2c0 = a->x14;
      p->x2c4 = a->x18;
    }
    p->x2bc++;
    p->x2b8++;
    if (p->x2bc == p->x38) {
      p->x34++;
      if (p->x3e8 == 0)
        fn_8282AFD0(p);
    }
  }
}
