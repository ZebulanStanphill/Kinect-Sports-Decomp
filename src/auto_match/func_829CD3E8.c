extern unsigned char lbl_83215000[];
extern unsigned char KfAcquireSpinLock(void *);
extern void KfReleaseSpinLock(void *, unsigned char);
extern int fn_829C9EF8(unsigned *);
int fn_829CD3E8(unsigned *self) {
 int result=0;
 unsigned char irql=KfAcquireSpinLock(lbl_83215000+0x6c);
 *self &= ~2u;
 if ((*self & 4)==0) result=fn_829C9EF8(self);
 KfReleaseSpinLock(lbl_83215000+0x6c,irql);
 return result;
}
