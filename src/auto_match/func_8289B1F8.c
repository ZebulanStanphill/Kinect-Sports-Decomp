/* The XDK's ppcintrinsics.h defines __lwsync() as this __emit. */
void __emit(unsigned int);
#define __lwsync() __emit(0x7C2004AC)

typedef struct Node { struct Node *next; struct Node *prev; } Node;
typedef struct Lock { int a, b; int held; } Lock;
typedef struct Owner { int a; Lock lock; } Owner;
typedef struct Entry { Node *next; Node *prev; Owner *owner; } Entry;
typedef struct Guard { Lock *l; } Guard;
typedef struct Item_8289B1F8 { int value; Entry entry; } Item_8289B1F8;
extern void fn_822B1B90(Guard *g, Lock *lock);
extern Entry *fn_82899120(Entry *e, Owner *owner);

static __forceinline void Entry_Unlink(Entry *e)
{
  Guard g;
  if (e->owner) {
    fn_822B1B90(&g, &e->owner->lock);
    e->next->prev = e->prev;
    e->prev->next = e->next;
    __lwsync();
    g.l->held = 0;
  }
}

void fn_8289B1F8(void *al, Item_8289B1F8 *dst, const Item_8289B1F8 *src)
{
  Item_8289B1F8 t;
  t.value = src->value;
  fn_82899120(&t.entry, src->entry.owner);
  if (dst != 0) {
    dst->value = t.value;
    fn_82899120(&dst->entry, t.entry.owner);
  }
  Entry_Unlink(&t.entry);
}
