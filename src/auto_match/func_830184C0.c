extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern void fn_83019FD0(void *);

typedef struct Node_830184C0 {
  struct Node_830184C0 *next;
  unsigned int key;
} Node_830184C0;
typedef struct It_830184C0 {
  Node_830184C0 *cur;
  Node_830184C0 *prev;
} It_830184C0;
typedef struct List_830184C0 {
  Node_830184C0 *head;
  Node_830184C0 *tail;
  Node_830184C0 *freelist;
  int pad[2];
  int count;
} List_830184C0;
typedef struct Obj_830184C0 {
  char pad0[0x6a0];
  List_830184C0 list;
  char pad6b8[0x720 - 0x6b8];
  char cs[1];
} Obj_830184C0;

static __forceinline It_830184C0 Erase_830184C0(List_830184C0 *o, It_830184C0 it)
{
  It_830184C0 r;
  Node_830184C0 *next = it.cur->next;
  r.cur = next;
  r.prev = it.prev;
  if (it.cur == o->head) {
    o->head = next;
  } else {
    it.prev->next = next;
  }
  if (it.cur == o->tail) {
    o->tail = it.prev;
  }
  it.cur->next = o->freelist;
  o->freelist = it.cur;
  o->count = o->count - 1;
  return r;
}

void fn_830184C0(Obj_830184C0 *o, unsigned int key)
{
  It_830184C0 it;
  List_830184C0 *l;
  RtlEnterCriticalSection(o->cs);
  l = &o->list;
  it.cur = l->head;
  it.prev = 0;
  while (it.cur != 0) {
    if (it.cur->key == key) {
      fn_83019FD0(&it.cur->key);
      it = Erase_830184C0(l, it);
    } else {
      it.prev = it.cur;
      it.cur = it.cur->next;
    }
  }
  RtlLeaveCriticalSection(o->cs);
}
