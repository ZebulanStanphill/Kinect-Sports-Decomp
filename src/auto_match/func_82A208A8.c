typedef struct {
  unsigned char tag;
  unsigned char size;
  unsigned short off;
} Slot_82A208A8;

typedef struct {
  int pad0;
  unsigned short top;
  unsigned short pad6;
  unsigned short count;
  unsigned short padA;
  unsigned short nslots;
  unsigned short free;
} Heap_82A208A8;

void *memmove(void *, const void *, unsigned int);

void fn_82A208A8(Heap_82A208A8 *h)
{
  unsigned int i;
  unsigned int cur = h->top - h->nslots * 4;
  unsigned int dst = cur;
  unsigned int lo = cur;
  unsigned int hi = cur;

  for (i = 0; i < h->count; i++) {
    Slot_82A208A8 *s = (Slot_82A208A8 *)((char *)h + h->top + (i - h->nslots) * 4);
    unsigned int off = s->off;
    unsigned int end = s->size + off;
    cur -= s->size;
    s->off = cur;
    if (end == dst) {
      dst = off;
    } else if (hi == lo) {
      hi = end;
      lo = off;
    } else if (end == lo) {
      lo = off;
    } else {
      unsigned int n = hi - lo;
      unsigned int nd = dst - n;
      memmove((char *)h + nd, (char *)h + lo, n);
      dst = nd;
      hi = end;
      lo = off;
    }
  }
  if (hi != lo) {
    unsigned int n = hi - lo;
    memmove((char *)h + (dst - n), (char *)h + lo, n);
  }
  h->free = cur;
}
