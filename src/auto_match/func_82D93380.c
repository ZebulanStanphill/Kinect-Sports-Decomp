extern void RtlEnterCriticalSection(void *cs);

typedef struct Inner_82D93380 {
  char pad[0xc4];
  void *lock;
} Inner_82D93380;

typedef struct Owner_82D93380 {
  int pad[2];
  Inner_82D93380 *inner;
} Owner_82D93380;

void fn_82D93380(Owner_82D93380 *self)
{
  Inner_82D93380 *inner = self->inner;
  void *lock;
  if (inner == 0) {
    return;
  }
  lock = inner->lock;
  if (lock == 0) {
    return;
  }
  RtlEnterCriticalSection(lock);
}
