extern int KeGetCurrentProcessType(void);
extern void *fn_82A3FF60(void *, int, int, int);
extern int fn_82A1F2B8(const char *);
extern void __debugbreak(void);
extern char lbl_83219D50[];
typedef struct Node_82A5A1F8 { struct Node_82A5A1F8 *chunk; struct Node_82A5A1F8 *next; unsigned pad; } Node_82A5A1F8;
typedef struct { Node_82A5A1F8 *free; Node_82A5A1F8 *chunks; char pad[0xcc]; unsigned lim; unsigned cur; } List_82A5A1F8;

Node_82A5A1F8 *fn_82A5A1F8(List_82A5A1F8 *l)
{
  int low;
  Node_82A5A1F8 *c;
  Node_82A5A1F8 *e;
  Node_82A5A1F8 *r;
  int i;
  low = 0;
  if (l->cur < l->lim && KeGetCurrentProcessType() != 2) {
    low = 1;
  }
  if (l->free == 0 || low != 0) {
    if (l->cur + 16 <= 0xffffffff) {
      c = (Node_82A5A1F8 *)fn_82A3FF60(lbl_83219D50, 0xc4, 0x20970006, 0);
      if (c != 0) {
        e = (Node_82A5A1F8 *)((char *)c + 4);
        for (i = 16; i != 0; i--) {
          e->next = l->free;
          l->free = e;
          e = (Node_82A5A1F8 *)((char *)e + 12);
        }
        c->chunk = l->chunks;
        l->chunks = c;
        l->cur = l->cur + 16;
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
