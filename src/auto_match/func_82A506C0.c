struct Lock_82A506C0;
typedef struct {
  void *pad[2];
  void (*f8)(struct Lock_82A506C0 *);
  void *padc[2];
  void (*f14)(struct Lock_82A506C0 *);
} LockVt_82A506C0;
typedef struct Lock_82A506C0 { LockVt_82A506C0 *vt; } Lock_82A506C0;
typedef struct { char pad[0x2c]; Lock_82A506C0 lock; } Owner_82A506C0;
typedef struct {
  char pad[0x30];
  Owner_82A506C0 *owner;
  unsigned *f34;
  char pad38[4];
  unsigned f3c;
  char pad40[0xc];
  void *f4c;
} Obj_82A506C0;
extern void *memcpy(void *, const void *, unsigned);

void fn_82A506C0(Obj_82A506C0 *o, unsigned n, void *dst)
{
  unsigned cur;
  o->owner->lock.vt->f8(&o->owner->lock);
  cur = o->f34 != 0 ? *o->f34 : o->f3c;
  if (n == cur)
    memcpy(dst, o->f4c, n * 4);
  o->owner->lock.vt->f14(&o->owner->lock);
}
