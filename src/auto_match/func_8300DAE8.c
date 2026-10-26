extern void *lbl_831BC770;
extern void *lbl_832645D0;
extern void *fn_82FA5060(void *heap, unsigned int size);
extern void fn_8300DA50(void *p);

void *fn_8300DAE8(void)
{
  if (lbl_832645D0 == 0) {
    lbl_832645D0 = fn_82FA5060(lbl_831BC770, 0x50);
    if (lbl_832645D0 != 0) {
      fn_8300DA50(lbl_832645D0);
    }
  }
  return lbl_832645D0;
}
