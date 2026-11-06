typedef struct { int a, b, c; } E12;
extern int fn_8266CBF0(void *);
extern void fn_8266D4A8(E12 *, E12 *, int, void *);
extern void fn_8266E0B8(E12 *, E12 *, int, void *);
extern void fn_8266E188(E12 *, E12 *, E12 *, int, int, void *);
void fn_8266E560(E12 *first, E12 *last, int n, void *buf)
{
  if (n <= 0x20) {
    fn_8266D4A8(first, last, 0, buf);
  } else {
    int half = (n + 1) / 2;
    E12 *mid = first + half;
    if (half <= fn_8266CBF0(buf)) {
      fn_8266E0B8(first, mid, half, buf);
      n -= half;
      fn_8266E0B8(mid, last, n, buf);
    } else {
      fn_8266E560(first, mid, half, buf);
      n -= half;
      fn_8266E560(mid, last, n, buf);
    }
    fn_8266E188(first, mid, last, half, n, buf);
  }
}
