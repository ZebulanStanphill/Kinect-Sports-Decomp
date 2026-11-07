extern unsigned char lbl_83215000[];
extern unsigned char KfAcquireSpinLock(void *);
extern void KfReleaseSpinLock(void *, unsigned char);
extern int fn_829C9C30(unsigned *);
int fn_829C9E90(unsigned *self) {
 int result=0;
 unsigned char irql=KfAcquireSpinLock(lbl_83215000+0x6c);
 *self &= ~2u;
 if ((*self & 4)==0) result=fn_829C9C30(self);
 KfReleaseSpinLock(lbl_83215000+0x6c,irql);
 return result;
}
