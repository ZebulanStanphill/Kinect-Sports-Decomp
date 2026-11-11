extern void RtlLeaveCriticalSection(void *cs);

typedef struct Inner_82D933A0 {
  char pad[0xc4];
  void *lock;
} Inner_82D933A0;

typedef struct Owner_82D933A0 {
  int pad[2];
  Inner_82D933A0 *inner;
} Owner_82D933A0;

void fn_82D933A0(Owner_82D933A0 *self)
{
  Inner_82D933A0 *inner = self->inner;
  void *lock;
  if (inner == 0) {
    return;
  }
  lock = inner->lock;
  if (lock == 0) {
    return;
  }
  RtlLeaveCriticalSection(lock);
}
