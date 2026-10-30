typedef struct Node_83053338 {
  char pad0[0xc];
  struct Node_83053338 *next;   /* 0x0c */
  char pad10[0x28];
} Node_83053338;

typedef struct Pool_83053338 {
  char pad0[0x98];
  Node_83053338 *freeList;      /* 0x98 */
  int pad9c;
  Node_83053338 *block;         /* 0xa0 */
} Pool_83053338;

typedef struct Cfg_83053338 {
  char pad0[0x2c];
  unsigned int count;           /* 0x2c */
} Cfg_83053338;

extern void *lbl_831BC978;
extern Node_83053338 *fn_82FA5060(void *heap, unsigned int bytes);
extern int fn_83050938(Pool_83053338 *p, Cfg_83053338 *c);

int fn_83053338(Pool_83053338 *p, Cfg_83053338 *c)
{
  p->freeList = 0;
  if (c->count == 0) {
    return 0x1f;
  }
  if (fn_83050938(p, c) == 1) {
    Node_83053338 *n = fn_82FA5060(lbl_831BC978, c->count * 0x38);
    Node_83053338 *end, *it;
    p->block = n;
    if (n == 0) {
      return 2;
    }
    it = n;
    end = (Node_83053338 *)((char *)n + c->count * 0x38);
    do {
      if (p->freeList == 0) {
        p->freeList = it;
        it->next = 0;
      } else {
        it->next = p->freeList;
        p->freeList = it;
      }
      it++;
    } while (it < end);
  }
  return 1;
}
