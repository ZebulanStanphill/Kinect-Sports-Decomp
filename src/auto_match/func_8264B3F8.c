typedef struct Chunk_8264B3F8 Chunk_8264B3F8;
typedef struct Ent_8264B3F8 { unsigned int key; unsigned int mask; } Ent_8264B3F8;
struct Chunk_8264B3F8 {
  Chunk_8264B3F8 *next;
  unsigned int count;
  Ent_8264B3F8 e[1];
};
typedef struct Obj_8264B3F8 {
  unsigned int flags;
  int f4;
  int f8;
  int fc;
  char pad[0x70 - 0x10];
  int f70;
} Obj_8264B3F8;
void fn_8264B3F8(int p1, Chunk_8264B3F8 *c, unsigned int m)
{
  Ent_8264B3F8 *e;
  Obj_8264B3F8 *o;
  unsigned int n;
  if (m == 0) m = 0xffffffff;
  do {
    e = c->e;
    for (n = c->count; n != 0; n--) {
      o = (Obj_8264B3F8 *)(e->key * 4);
      if (o != 0) {
        if ((e->mask & m) != 0) o->f8 = p1;
        if ((e->key & 0x40000000) != 0) o->fc = p1;
        if ((o->flags & 0xf) == 9 && o->f70 != 0) fn_8264B3F8(p1, (Chunk_8264B3F8 *)o->f70, m);
      }
      e++;
    }
    c = c->next;
  } while (c != 0);
}
