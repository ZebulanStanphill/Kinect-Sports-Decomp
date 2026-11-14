typedef struct Queue_827F2278 {
  char pad0[0x20];
  void *slots[4];          /* 0x20 */
  char pad30[0x53 - 0x30];
  unsigned char head;      /* 0x53 */
  unsigned char tail;      /* 0x54 */
  char pad55[0x104 - 0x55];
  void *active;            /* 0x104 */
  void *pending;           /* 0x108 */
} Queue_827F2278;

static __forceinline unsigned int Count(Queue_827F2278 *q)
{
  return ((q->head - q->tail) & 3) + 1;
}

unsigned char fn_827F2278(Queue_827F2278 *q)
{
  if (Count(q) > 1) {
    if (q->active != 0) return q->slots[q->head] == q->active;
    if (q->pending != 0) return q->slots[q->head] == q->pending;
  }
  return 0;
}
