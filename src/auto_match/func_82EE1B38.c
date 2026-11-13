typedef struct Host_82EE1B38 {
  char pad[0x48];
  char sub[0x254 - 0x48];
  unsigned int count;
} Host_82EE1B38;
extern int fn_82EE1048(void *, unsigned int, unsigned int *);
extern int fn_82EE17C8(Host_82EE1B38 *, unsigned int, unsigned int);

int fn_82EE1B38(Host_82EE1B38 *h, unsigned short *a, unsigned short *b, unsigned short n, unsigned int out)
{
  unsigned short seen;
  unsigned int i;
  unsigned int tmp;
  int hr;
  unsigned short *e;

  if (out != 0) {
    seen = 0;
    i = 0;
    if (h->count > 0) {
      do {
        hr = fn_82EE1048(h->sub, i, &tmp);
        e = (hr >= 0) ? (unsigned short *)tmp : 0;
        if (e == 0) {
          return (int)0xc00d36bb;
        }
        if ((a == 0 || *a == e[1]) && (b == 0 || *b == e[0])) {
          if (seen == n) {
            return fn_82EE17C8(h, i & 0xffff, out);
          }
          seen = seen + 1;
        }
        i++;
      } while (i < h->count);
    }
  }
  return (int)0x80070057;
}
