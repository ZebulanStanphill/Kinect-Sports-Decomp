extern int fn_8269B718();

typedef struct Child_826C7C28 Child_826C7C28;
typedef struct { char pad[0x108]; void (*slot108)(Child_826C7C28 *); void (*slot10c)(Child_826C7C28 *); } Vt_826C7C28;
struct Child_826C7C28 {
  Vt_826C7C28 *vt;
  char pad4[0x62];
  unsigned char b66;
  char pad67[0x25];
  unsigned flags;
};
typedef struct {
  char pad[0x8c];
  unsigned :29;
  unsigned bit:1;
  unsigned :2;
  char pad90[0x10];
  int a0;
  char pad_a4[4];
  Child_826C7C28 **list;
  unsigned count;
} Obj_826C7C28;

static Child_826C7C28 *pick(Child_826C7C28 *c)
{
  return (c->b66 & 0x80) ? c : 0;
}

void fn_826C7C28(Obj_826C7C28 *o)
{
  unsigned n = o->count;
  unsigned char saved = o->bit;
  int i;
  if (n != 0) {
    unsigned m;
    i = 0;
    m = n;
    do {
      Child_826C7C28 *c = pick(*(Child_826C7C28 **)((char *)o->list + i));
      if (c != 0) {
        unsigned char f = (unsigned char)o->bit || saved;
        if (f) c->flags |= 4; else c->flags &= ~4;
        c->vt->slot10c(c);
        fn_8269B718(c, o->a0);
      }
      m--;
      i += 4;
    } while (m != 0);
  }
}
