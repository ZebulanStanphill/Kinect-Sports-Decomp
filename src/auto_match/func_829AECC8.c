extern int fn_829AB2C0();
extern int fn_829AB368();
extern int fn_829B50F8();
extern int fn_829B8840();
extern void *memcpy(void *, const void *, unsigned);
extern void *memset(void *, int, unsigned);
typedef struct { unsigned char b[0x540]; } Hdr_829AECC8;
void fn_829AECC8(unsigned char *o, unsigned a, unsigned b)
{
  Hdr_829AECC8 save;
  int n;
  int i;
  if (a != 0) {
    fn_829AB368(o, a);
  }
  if (b != 0) {
    fn_829AB368(o, b);
  }
  fn_829B50F8(o, *(unsigned *)(o + 0x59c));
  fn_829B50F8(o, *(unsigned *)(o + 0x5dc));
  fn_829B50F8(o, *(unsigned *)(o + 0x5d8));
  fn_829B50F8(o, *(unsigned *)(o + 0x674));
  fn_829B50F8(o, *(unsigned *)(o + 0x678));
  fn_829B50F8(o, *(unsigned *)(o + 0x638));
  if ((*(unsigned *)(o + 0x55c) & 0x1000) != 0) {
    fn_829AB2C0(o, *(unsigned *)(o + 0x604));
  }
  if ((*(unsigned *)(o + 0x55c) & 0x2000) != 0) {
    fn_829B50F8(o, *(unsigned *)(o + 0x65c));
  }
  if (*(unsigned *)(o + 0x644) != 0) {
    n = 1 << (8 - *(int *)(o + 0x62c));
    if (n > 0) {
      i = 0;
      do {
        fn_829B50F8(o, (*(unsigned **)(o + 0x644))[i]);
        n--;
        i++;
      } while (n != 0);
    }
    fn_829B50F8(o, *(unsigned *)(o + 0x644));
  }
  fn_829B8840(o + 0x564);
  save = *(Hdr_829AECC8 *)o;
  {
    unsigned w0 = *(unsigned *)(o + 0x540);
    unsigned w1 = *(unsigned *)(o + 0x544);
    unsigned w2 = *(unsigned *)(o + 0x548);
    memset(o, 0, 0x6a0);
    *(unsigned *)(o + 0x540) = w0;
    *(unsigned *)(o + 0x544) = w1;
    *(unsigned *)(o + 0x548) = w2;
  }
  *(Hdr_829AECC8 *)o = save;
}
