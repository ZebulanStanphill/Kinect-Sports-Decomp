typedef struct SB_822403C8 {
  char pad0[0x10];
  unsigned int *f10;
  unsigned int *f14;
  char pad18[0x20 - 0x18];
  int *f20;
  int *f24;
  char pad28[0x30 - 0x28];
  unsigned int *f30;
  char pad34[0x3c - 0x34];
  unsigned int f3c;
  unsigned int state;
} SB_822403C8;
extern void fn_82230300(void *, int, int);
extern void fn_82230360(void *, unsigned int, unsigned int);
extern void fn_82240378(void *, void *);

void *fn_822403C8(void *ret, SB_822403C8 *sb)
{
  char s1[32];
  char s2[32];
  char s3[32];
  char *s;
  int p;
  unsigned int end, base, hi, lo;

  if ((sb->state & 2) == 0) {
    p = *sb->f24;
    if (p != 0) {
      end = p;
      if (sb->f3c >= (unsigned int)p) {
        end = sb->f3c;
      }
      base = *sb->f14;
      fn_82230300(s1, 0, 0);
      fn_82230360(s1, base, end - base);
      fn_82240378(ret, s1);
      s = s1;
      goto done;
    }
  }
  if ((sb->state & 4) == 0 && (p = *sb->f20) != 0) {
    lo = *sb->f10;
    hi = (*sb->f30 - lo) + p;
    fn_82230300(s2, 0, 0);
    fn_82230360(s2, lo, hi);
    fn_82240378(ret, s2);
    s = s2;
  } else {
    fn_82230300(s3, 0, 0);
    fn_82240378(ret, s3);
    s = s3;
  }
done:
  fn_82230300(s, 1, 0);
  return ret;
}
