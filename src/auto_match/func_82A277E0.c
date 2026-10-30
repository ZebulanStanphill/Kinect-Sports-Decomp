extern void *_ReturnAddress(void);
extern int KeGetCurrentProcessType(void);
extern void KeBugCheckEx(unsigned int, void *, void *, unsigned int, void *);

int fn_82A277E0(char *p1, int unused, unsigned char *p3)
{
  if ((*(unsigned int *)(p1 + 0x14) & 0x40000) != 0 && ((unsigned char *)p1)[0x17b] != KeGetCurrentProcessType()) {
    KeBugCheckEx(0xf4, p1, _ReturnAddress(), 0x1444, p3);
  }
  if ((p3[-0xb] & 1) == 0) {
    return -1;
  }
  if ((p3[-0xb] & 8) != 0) {
    return *(unsigned int *)(p3 - 0x18) - *(unsigned short *)(p3 - 0x10) - 0x30;
  }
  return *(unsigned short *)(p3 - 0x10) * 16 - p3[-10];
}
