typedef struct Node Node;
struct Node {
  Node *next;
  Node *prev;
  void *owner;
};

typedef struct ListHead {
  Node *next;
  Node *prev;
} ListHead;

typedef struct Item {
  char pad0[0xc];
  unsigned short type;
  short pade;
  int refs;
  int pad14;
  int size;
} Item;

typedef struct Mgr {
  char pad0[0xc];
  int shift;
  char pad10[0x1b4 - 0x10];
  ListHead lists[8];
  char pad1f4[0x210 - 0x1f4];
  int x210;
  int x214;
} Mgr;

typedef struct { char pad[0x2c4]; char cs[0x1c]; } Glob;

extern void fn_82691AF0(Mgr *m, Item *it);
extern void fn_82691BF8(Mgr *m, Item *it);
extern void fn_82692150(Mgr *m, Item *it);
extern void fn_8270C258(void *p, Item *it);
extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern Glob *lbl_831E7E60;

void fn_82692538(Mgr *m, Item *it, Node *node)
{
  void *cs;

  if (it->type <= 7) {
    ListHead *list;
    node->owner = it;
    list = &m->lists[it->type];
    node->prev = list->prev;
    node->next = (Node *)list;
    list->prev->next = node;
    list->prev = node;
    m->x210 += (it->type + 1) << m->shift;
    if (--it->refs == 0) {
      fn_82692150(m, it);
    }
  } else if (it->type == 10) {
    fn_8270C258((char *)m + 0x14, it);
    if (--it->refs == 0) {
      fn_82691BF8(m, it);
    }
  } else {
    m->x214 -= it->size;
    cs = lbl_831E7E60->cs;
    RtlEnterCriticalSection(cs);
    fn_82691AF0(m, it);
    RtlLeaveCriticalSection(cs);
  }
}
