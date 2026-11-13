extern unsigned char KfAcquireSpinLock(void *);
extern void KfReleaseSpinLock(void *, unsigned char);
extern void *memcpy(void *, const void *, unsigned int);
extern void fn_829C8440(int, int);
extern char lbl_83215000[];

int fn_829C8918(int idx)
{
  unsigned char irql = KfAcquireSpinLock(lbl_83215000 + 0x6c);
  if (*(int *)(lbl_83215000 + 0x6ac + idx * 0x184) == 0) {
    char *src = lbl_83215000 + 0x6b0 + idx * 0x184;
    char *dst = lbl_83215000 + 0x70c + idx * 0x184;
    memcpy(dst, src, 0x5c);
    KfReleaseSpinLock(lbl_83215000 + 0x6c, irql);
    fn_829C8440(idx, 1);
  } else {
    KfReleaseSpinLock(lbl_83215000 + 0x6c, irql);
  }
  return 0;
}
