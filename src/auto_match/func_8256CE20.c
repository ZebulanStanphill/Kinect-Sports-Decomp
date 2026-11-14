typedef struct Entry_8256CE20 {
  int a;
  int b;
  unsigned int handle;
} Entry_8256CE20;

typedef struct Vec_8256CE20 {
  int alloc;
  Entry_8256CE20 *first;
  Entry_8256CE20 *last;
  Entry_8256CE20 *end;
} Vec_8256CE20;

typedef struct Owner_8256CE20 {
  char pad0[0x44];
  Vec_8256CE20 listA;        /* 0x44, first at 0x48 */
  Vec_8256CE20 listB;        /* 0x54, first at 0x58 */
  int pad64;
  unsigned int current;      /* 0x68 */
} Owner_8256CE20;

typedef struct Pair_8256CE20 {
  int first;
  int second;
} Pair_8256CE20;

typedef struct Locals_8256CE20 {
  Entry_8256CE20 *iterator[2];
  Pair_8256CE20 pair;
} Locals_8256CE20;

extern int fn_825200A8(unsigned int *a, unsigned int *b);
extern void fn_82517978(Pair_8256CE20 *out, int a, int b, int c);
extern void fn_8256C5D0(Owner_8256CE20 *self, Pair_8256CE20 *pair);
extern Entry_8256CE20 **fn_8256D710(Entry_8256CE20 **out, Entry_8256CE20 **vec, Entry_8256CE20 *where);

void fn_8256CE20(Owner_8256CE20 *self, unsigned int *handle)
{
  Locals_8256CE20 local;
  Entry_8256CE20 *it;
  unsigned int *current = &self->current;

  if (fn_825200A8(current, handle) != 0) {
    *current = 0;
    return;
  }
  it = self->listA.first;
  while (it != self->listA.last) {
    if (it->handle == *handle) {
      local.pair.first = 0;
      local.pair.second = 0;
      fn_82517978(&local.pair, it->a, it->b, 0);
      fn_8256C5D0(self, &local.pair);
      it = *fn_8256D710(local.iterator, &self->listA.first, it);
    } else {
      it++;
    }
  }
  it = self->listB.first;
  while (it != self->listB.last) {
    if (it->handle == *handle) {
      local.pair.first = 0;
      local.pair.second = 0;
      fn_82517978(&local.pair, it->a, it->b, 0);
      fn_8256C5D0(self, &local.pair);
      it = *fn_8256D710(local.iterator, &self->listB.first, it);
    } else {
      it++;
    }
  }
}
