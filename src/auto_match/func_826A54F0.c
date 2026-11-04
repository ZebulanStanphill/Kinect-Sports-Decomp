extern void fn_826A5188(void *, void *, unsigned);
typedef struct V_826A54F0 { unsigned char *data; unsigned count; } V_826A54F0;
void fn_826A54F0(V_826A54F0 *v, unsigned n) {
  unsigned old = v->count; unsigned char *p; unsigned *q; unsigned cnt, i;
  fn_826A5188(v, v, n);
  if (n > old) {
    p = v->data + old * 0x1c;
    i = 0;
    cnt = n - old;
    if (cnt != 0) {
      q = (unsigned *)(p + 0xc);
      do {
        if (p != 0) { *(unsigned char *)(q + 1) = 0; q[-1] = 0; *q = 0; }
        i++; p += 0x1c; q += 7;
      } while (i < cnt);
    }
  }
}
