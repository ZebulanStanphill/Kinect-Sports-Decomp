extern int fn_8264DB08();
extern int fn_82A1DDC0();
extern int memcpy();


extern int memcmp(const void *, const void *, unsigned);
extern int KeGetCurrentProcessType(void);

void fn_8263A998(int param_1, int param_2)
{
  unsigned char buf[0x600];
  unsigned char *dst;

  fn_8264DB08(buf, param_2, 0);
  dst = (unsigned char *)(param_1 + 0x3b70);
  if (memcmp(buf, dst, 0x600) != 0) {
    if (KeGetCurrentProcessType() != 2) {
      if (*(unsigned int *)(param_1 + 0x5e6c) != 0 && (*(unsigned int *)(param_1 + 0x5e70) & 0x80000000) == 0) {
        fn_82A1DDC0(*(int *)(param_1 + 0x5e6c), dst, 0x600);
      }
      *(unsigned int *)(param_1 + 0x5e70) = *(unsigned int *)(param_1 + 0x5e70) | 0x80000000;
    }
    memcpy(dst, buf, 0x600);
    *(unsigned int *)(param_1 + 0x421c) = *(unsigned int *)(param_1 + 0x421c) | 2;
  }
}
