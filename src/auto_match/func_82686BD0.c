long _InterlockedCompareExchange(long volatile *dest, long exchange, long comparand);

typedef struct Counted_82686BD0 {
  void *vt;
  long count;
} Counted_82686BD0;

/* Takes a reference unless the count is already zero; returns whether it did. */
unsigned char fn_82686BD0(Counted_82686BD0 *self)
{
  for (;;) {
    long count = *(volatile long *)&self->count;
    if (count == 0) {
      return 0;
    }
    if (_InterlockedCompareExchange(&self->count, count + 1, count) == count) {
      return 1;
    }
  }
}
