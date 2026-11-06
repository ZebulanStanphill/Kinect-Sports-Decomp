extern int KeGetCurrentProcessType(void);
extern void *fn_82A3FF60(void *, int, int, int);
extern int fn_82A1F2B8(const char *);
extern void __debugbreak(void);
extern char lbl_83219D50[];
typedef struct Node_82A77750 { struct Node_82A77750 *chunk; struct Node_82A77750 *next; unsigned pad; } Node_82A77750;
typedef struct { Node_82A77750 *free; Node_82A77750 *chunks; char pad[0x24]; unsigned lim; unsigned cur; } List_82A77750;

Node_82A77750 *fn_82A77750(List_82A77750 *l)
{
  int low;
  Node_82A77750 *c;
  Node_82A77750 *e;
  Node_82A77750 *r;
  int i;
  low = 0;
  if (l->cur < l->lim + 2 && KeGetCurrentProcessType() != 2) {
    low = 1;
  }
  if (l->free == 0 || low != 0) {
    if (l->cur + 2 <= 0xffffffff) {
      c = (Node_82A77750 *)fn_82A3FF60(lbl_83219D50, 0x1c, 0x20970006, 0);
      if (c != 0) {
        e = (Node_82A77750 *)((char *)c + 4);
        for (i = 2; i != 0; i--) {
          e->next = l->free;
          l->free = e;
          e = (Node_82A77750 *)((char *)e + 12);
        }
        c->chunk = l->chunks;
        l->chunks = c;
        l->cur = l->cur + 2;
      }
    } else {
      fn_82A1F2B8("SimpList: non-growable list ran out of room for new elements");
      __debugbreak();
    }
  }
  r = l->free;
  if (r != 0) {
    l->free = r->next;
  } else {
    r = 0;
  }
  return r;
}
