void *memcpy(void *d, const void *s, unsigned int n);
extern unsigned int fn_826BCDE8(const unsigned short *s);
extern unsigned char fn_82773958(void *s, unsigned int n);

void fn_82773A20(unsigned short **s, const unsigned short *src, unsigned int n)
{
  if (n == -1) {
    n = fn_826BCDE8(src);
  }
  if (fn_82773958(s, n) && n != 0) {
    memcpy(*s, src, (n + 1) * 2);
  }
}
