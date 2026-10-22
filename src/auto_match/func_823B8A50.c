extern void fn_822315A0(void *);

typedef struct Obj { void (**vtbl)(struct Obj *, int); } Obj;
typedef struct { char pad[0xc]; void *buf; Obj *obj; } Item;
typedef struct {
  int pad0;
  Item **items;
  unsigned int capacity;
  unsigned int head;
  unsigned int count;
} Queue;

void fn_823B8A50(Queue *q)
{
  Item *it;
  Obj *o;

  if (q->count != 0) {
    it = q->items[q->head];
    o = it->obj;
    if (o != 0) {
      (*o->vtbl[0])(o, 1);
    }
    if (it->buf != 0) {
      fn_822315A0(it->buf);
    }
    q->head++;
    if (q->capacity <= q->head) {
      q->head = 0;
    }
    q->count--;
    if (q->count == 0) {
      q->head = 0;
    }
  }
}
