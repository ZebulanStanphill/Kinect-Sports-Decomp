typedef struct Node_82E49E20 {
  struct Node_82E49E20 *next;
  struct Node_82E49E20 *prev;
  int used;
  unsigned int ptr;
  unsigned int size;
} Node_82E49E20;

typedef struct List_82E49E20 {
  int count;
  Node_82E49E20 *first;
  Node_82E49E20 *last;
} List_82E49E20;

extern unsigned int fn_82A2A4C8(int, unsigned int, int, int);
extern int fn_82A2A518(unsigned int, int, int);
extern int fn_82A1F470();
extern Node_82E49E20 *fn_82E50BE8(int, int, int, int, int);

static __forceinline Node_82E49E20 *Valid(List_82E49E20 *l, Node_82E49E20 *n)
{
  return n != (Node_82E49E20 *)&l->first ? n : 0;
}

int fn_82E49E20(List_82E49E20 *list, unsigned int size, unsigned int *out)
{
  Node_82E49E20 *head;
  Node_82E49E20 *n;
  Node_82E49E20 *p0;
  Node_82E49E20 *q;
  Node_82E49E20 *prev;
  unsigned int rounded;
  unsigned int p;
  int hr;
  int e;

  head = (Node_82E49E20 *)&list->first;
  hr = 0;
  p0 = list->first != head ? list->first : 0;
  q = 0;
  if (p0 != 0) {
    do {
      n = p0;
      p0 = Valid(list, n->next);
      if (n->used == 0) {
        if (n->size >= size) {
          n->used = 1;
          *out = n->ptr;
          goto done;
        }
        if (q == 0) {
          q = n;
        }
      }
    } while (p0 != 0);
    if (q != 0) {
      fn_82A2A518(q->ptr, 0, 0x8000);
      q->ptr = 0;
      goto alloc;
    }
  }
  q = fn_82E50BE8(0x14, 0, 0, 0, 0);
  if (q == 0) {
    hr = 0x8007000e;
    goto done;
  }
  q->next = 0;
  q->prev = 0;
  q->used = 0;
  q->ptr = 0;
  q->size = 0;
  prev = head->prev;
  q->prev = prev;
  q->next = head;
  prev->next = q;
  head->prev = q;
  list->count = list->count + 1;
alloc:
  rounded = ((size >> 12) + 1) * 0x1000;
  p = fn_82A2A4C8(0, rounded, 0x1000, 4);
  q->ptr = p;
  if (p == 0) {
    e = fn_82A1F470();
    if (e <= 0) {
      hr = e;
    } else {
      hr = (e & 0xffff) | 0x80070000;
    }
  } else {
    q->size = rounded;
    q->used = 1;
    *out = p;
  }
done:
  return hr;
}
