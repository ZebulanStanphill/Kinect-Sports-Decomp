extern int fn_8267C4C8(void *);
extern int fn_8267C4F0(void *);

typedef struct Obj_827531E8 {
  int pad[3];
  void *r0;
  void *r1;
  void *r2;
  void *r3;
} Obj_827531E8;

unsigned char fn_827531E8(Obj_827531E8 *self, void *a, void *b, void *c, void *d)
{
  unsigned char flags;

  flags = 0;
  if (self->r0 != a) {
    if (a != 0) {
      fn_8267C4C8(a);
    }
    if (self->r0 != 0) {
      fn_8267C4F0(self->r0);
    }
    self->r0 = a;
  }
  if (self->r1 != b) {
    flags = 1;
    if (b != 0) {
      fn_8267C4C8(b);
    }
    if (self->r1 != 0) {
      fn_8267C4F0(self->r1);
    }
    self->r1 = b;
  }
  if (self->r2 != c) {
    flags = flags | 2;
    if (c != 0) {
      fn_8267C4C8(c);
    }
    if (self->r2 != 0) {
      fn_8267C4F0(self->r2);
    }
    self->r2 = c;
  }
  if (self->r3 != d) {
    flags = flags | 3;
    if (d != 0) {
      fn_8267C4C8(d);
    }
    if (self->r3 != 0) {
      fn_8267C4F0(self->r3);
    }
    self->r3 = d;
  }
  return flags;
}
