extern int fn_8269B718();

typedef struct Child_826C7B70 Child_826C7B70;
typedef struct { char pad[0x108]; void (*slot108)(Child_826C7B70 *); void (*slot10c)(Child_826C7B70 *); } Vt_826C7B70;
struct Child_826C7B70 {
  Vt_826C7B70 *vt;
  char pad4[0x62];
  unsigned char b66;
  char pad67[0x25];
  unsigned flags;
};
typedef struct {
  char pad[0x8c];
  unsigned :28;
  unsigned bit:1;
  unsigned :3;
  char pad90[0x10];
  int a0;
  char pad_a4[4];
  Child_826C7B70 **list;
  unsigned count;
} Obj_826C7B70;

static Child_826C7B70 *pick(Child_826C7B70 *c)
{
  return (c->b66 & 0x80) ? c : 0;
}

void fn_826C7B70(Obj_826C7B70 *o)
{
  unsigned n = o->count;
  unsigned char saved = o->bit;
  int i;
  if (n != 0) {
    unsigned m;
    i = 0;
    m = n;
    do {
      Child_826C7B70 *c = pick(*(Child_826C7B70 **)((char *)o->list + i));
      if (c != 0) {
        unsigned char f = (unsigned char)o->bit || saved;
        if (f) c->flags |= 8; else c->flags &= ~8;
        c->vt->slot108(c);
        fn_8269B718(c, o->a0);
      }
      m--;
      i += 4;
    } while (m != 0);
  }
}
