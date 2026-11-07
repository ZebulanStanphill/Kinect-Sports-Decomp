typedef struct SpinLockBlock_829C5910 {
  unsigned char pad0[0x24];
  unsigned int lock;           /* 0x24 */
  unsigned char pad28[0x28];
  unsigned int state;          /* 0x50 */
} SpinLockBlock_829C5910;

extern unsigned char KfAcquireSpinLock(unsigned int *lock);
extern void KfReleaseSpinLock(unsigned int *lock, unsigned char irql);
extern int fn_829C57F8(int code);
extern SpinLockBlock_829C5910 lbl_83214DB0;

void fn_829C5910(void)
{
  unsigned char irql;

  irql = KfAcquireSpinLock(&lbl_83214DB0.lock);
  lbl_83214DB0.state = 8;
  KfReleaseSpinLock(&lbl_83214DB0.lock, irql);
  fn_829C57F8(0x4c7);
}
