typedef struct Node_82C294A8 { int data; int pad4; struct Node_82C294A8 *next; struct Node_82C294A8 *prev; } Node_82C294A8;
typedef struct Sink_82C294A8 Sink_82C294A8;
struct Sink_82C294A8 { void *f0, *f4; int (*f8)(Sink_82C294A8 *, int); };
typedef struct List_82C294A8 { char pad[8]; Node_82C294A8 *head; } List_82C294A8;
typedef struct Q_82C294A8 {
  char pad0[0x10];
  List_82C294A8 *list;
  char pad14[4];
  unsigned count;
  char pad1c[0x30 - 0x1c];
  int ctx;
  Sink_82C294A8 *sink;
  char pad38[0x74 - 0x38];
  int size;
  int total;
} Q_82C294A8;
typedef struct Obj_82C294A8 { char pad[0x2c]; Q_82C294A8 *q; } Obj_82C294A8;
extern int fn_82C10B28(int, int, Node_82C294A8 **);

int fn_82C294A8(Obj_82C294A8 *self)
{
  Q_82C294A8 *q = self->q;
  Node_82C294A8 *n = 0;
  int r = 0;
  if (q->count != 0) {
    n = q->list->head;
    while (n != 0) {
      r = q->sink->f8(q->sink, n->data);
      if (r < 0) break;
      if (n->prev != 0) n->prev->next = n->next;
      if (n->next != 0) n->next->prev = n->prev;
      q->count--;
      q->total -= q->size;
      if (q->count == 0) q->list->head = 0;
      r = fn_82C10B28(q->ctx, 0x1e, &n);
      if (r < 0) return r;
      n = q->list->head;
    }
  }
  return r;
}
