extern void fn_830241A8(void *p, unsigned int value, unsigned int mask);
extern void *lbl_832643D4;

void fn_82FEC128(unsigned int value, unsigned int mask)
{
  if (lbl_832643D4 == 0) {
    return;
  }
  fn_830241A8(lbl_832643D4, value, mask);
}
