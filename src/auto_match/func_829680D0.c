typedef struct Item_829680D0 {
  int pad0;
  unsigned int flags;   /* 0x04 */
  unsigned int count;   /* 0x08 */
  int pad0c;
  int base;             /* 0x10 */
  int pad14;
  int value;            /* 0x18 */
} Item_829680D0;

typedef struct Link_829680D0 {
  int pad0;
  int item;             /* 0x04 */
  int pad8;
  int depth;            /* 0x0c */
} Link_829680D0;

typedef struct Set_829680D0 {
  int pad0;
  unsigned int numItems;     /* 0x04 */
  unsigned int numLinks;     /* 0x08 */
  int padc;
  Item_829680D0 **items;     /* 0x10 */
  Link_829680D0 **links;     /* 0x14 */
} Set_829680D0;

int fn_829680D0(Set_829680D0 *s, int target, unsigned int mask, unsigned int exclude)
{
  unsigned int i;
  int total;
  int hasFlag;
  for (i = 0; i < s->numItems; i++) {
    Item_829680D0 *it = s->items[i];
    if ((it->flags & mask) == mask && (it->flags & exclude) == 0) {
      it->count = 0;
    }
  }
  for (i = 0; i < s->numLinks; i++) {
    Link_829680D0 *l = s->links[i];
    Item_829680D0 *it = s->items[l->item];
    if ((it->flags & mask) == mask && (it->flags & exclude) == 0) {
      unsigned int d = l->depth + 1;
      if (it->count <= d) {
        it->count = d;
      }
    }
  }
  total = 0;
  hasFlag = 0;
  for (i = 0; i < s->numItems; i++) {
    Item_829680D0 *it = s->items[i];
    unsigned int f = it->flags;
    if ((f & mask) == mask) {
      if ((f & exclude) == 0) {
        int c;
        it->base = total;
        it->value = target;
        if ((f & 0x400) != 0) {
          hasFlag = 1;
        }
        c = it->count;
        it->count = 0;
        total = c + total;
      }
    }
  }
  for (i = 0; i < s->numLinks; i++) {
    Link_829680D0 *l = s->links[i];
    Item_829680D0 *it = s->items[l->item];
    if ((it->flags & mask) == mask && (it->flags & exclude) == 0) {
      l->item = it->value;
      l->depth = it->base + l->depth;
    }
  }
  s->items[target]->count = total;
  if (hasFlag) {
    s->items[target]->flags = s->items[target]->flags | 0x400;
  }
  return 0;
}
