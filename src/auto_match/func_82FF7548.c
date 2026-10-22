typedef struct { int a, b, c; } Tail;
typedef struct { int b, c, d; } Mid;
typedef struct Node {
  struct Node *next;
  Mid m;
  unsigned int key;
  Tail t;
} Node;

typedef struct {
  Node *head;
  Node *tail;
  int count;
} List;

typedef struct {
  int lock[7];
} CritSec;

typedef struct {
  char pad0[0x50];
  CritSec cs;
  List a;
  List b;
} Obj;

extern void RtlEnterCriticalSection(CritSec *cs);
extern void RtlLeaveCriticalSection(CritSec *cs);
extern Node *fn_82FA5060();
extern int lbl_831BC768;

static void init_tail(Tail *t) { t->a = 0; t->b = 0; t->c = 0; }
static void init_mid(Mid *t) { t->b = 0; t->c = 0; t->d = 0; }

Node *fn_82FF7548(Obj *p, unsigned int key, int which)
{
  Node *n;
  List *l;

  RtlEnterCriticalSection(&p->cs);
  l = which == 1 ? &p->a : &p->b;
  for (n = l->head; n != 0; n = n->next) {
    if (key == n->key) goto done;
  }
  n = fn_82FA5060(lbl_831BC768, 0x20);
  if (n != 0) {
    n->next = 0; init_mid(&n->m); n->key = key; init_tail(&n->t);
    if (l->head == 0) {
      l->tail = n;
      l->head = n;
      n->next = 0;
    }
    else {
      n->next = l->head;
      l->head = n;
    }
    l->count++;
  }
done:
  RtlLeaveCriticalSection(&p->cs);
  return n;
}
