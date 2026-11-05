extern int fn_8277EBC8();

typedef struct Rec_82780630 {
  char pad[0xc];
  unsigned int lo;
  unsigned int hi;
  int pad14;
} Rec_82780630;

typedef struct Cont_82780630 {
  char pad[0x18];
  unsigned int count;
  int pad1c[2];
  Rec_82780630 **blocks;
} Cont_82780630;

typedef struct Obj_82780630 {
  char pad[0xdc];
  unsigned int maxv;
} Obj_82780630;

void fn_82780630(Obj_82780630 *o, Cont_82780630 *c, unsigned int delta)
{
  unsigned int i;
  unsigned int a;
  unsigned int b;
  Rec_82780630 *r;

  for (i = 0; i < c->count; i++) {
    r = c->blocks[i >> 6] + (i & 0x3f);
    a = r->lo + delta;
    b = r->hi + delta;
    if (a != b) {
      fn_8277EBC8(o, r, delta);
      if (a > o->maxv) {
        o->maxv = a;
      }
      if (b > o->maxv) {
        o->maxv = b;
      }
    }
  }
}
