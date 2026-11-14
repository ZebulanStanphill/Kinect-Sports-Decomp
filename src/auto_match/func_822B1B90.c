#define __lwsync() __emit(0x7C2004AC)

long _InterlockedCompareExchange(long volatile *dest, long exchange, long comparand);

typedef struct Lock_822B1B90 {
  int pad0[2];
  long locked;
} Lock_822B1B90;

typedef struct Guard_822B1B90 {
  Lock_822B1B90 *lock;
} Guard_822B1B90;

void fn_822B1B90(Guard_822B1B90 *self, Lock_822B1B90 *lock)
{
  self->lock = lock;
  while (_InterlockedCompareExchange(&self->lock->locked, 1, 0) != 0) {
  }
  __lwsync();
}
