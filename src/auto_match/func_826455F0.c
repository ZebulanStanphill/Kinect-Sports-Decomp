extern unsigned long __gregister_get(unsigned int reg);
extern void KeAcquireSpinLockAtRaisedIrql(void *lock);
extern void KeReleaseSpinLockFromRaisedIrql(void *lock);
extern void fn_82647950(void *obj);

typedef struct Q_826455F0 {
  char pad0[0x10];
  void (*cb)(void *arg);
  void *arg;
} Q_826455F0;

typedef struct Obj_826455F0 {
  char pad0[0x2a94];
  unsigned int *q;
  char lock[1];
} Obj_826455F0;

void fn_826455F0(unsigned int mode, Obj_826455F0 *obj)
{
  unsigned int m;
  unsigned int *flags;
  Q_826455F0 *q;

  if (mode == 1) {
    q = (Q_826455F0 *)obj->q;
    if (q->cb != 0) {
      q->cb(q->arg);
    }
    m = 1 << *(unsigned char *)(__gregister_get(13) + 0x10c); flags = obj->q; KeAcquireSpinLockAtRaisedIrql(obj->lock); *flags = *flags & ~m & 0x3f; KeReleaseSpinLockFromRaisedIrql(obj->lock);
  } else if (mode == 0 && (*(unsigned int *)0x7fc86544 & 1) != 0) {
    fn_82647950(obj);
  }
}
