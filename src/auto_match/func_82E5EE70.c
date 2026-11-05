extern int fn_82E57A78(unsigned, unsigned short *);
extern int fn_82E57F48(unsigned, unsigned short *);
extern int fn_82E58808(unsigned, unsigned short, unsigned *);
extern int fn_82F6ADA8(unsigned short *, unsigned);
int fn_82E5EE70(unsigned h, unsigned short *name, unsigned short *out)
{
  int hr;
  unsigned short i;
  struct { unsigned short cnt; unsigned v; } s;

  if (h == 0 || name == 0 || out == 0) {
    return 0x80004003;
  }
  if (*name == 0) {
    return 0x80070057;
  }
  i = 0;
  s.cnt = 0;
  s.v = 0;
  hr = fn_82E57A78(h, &s.cnt);
  if (hr >= 0) {
    for (i = 0; i < s.cnt; i++) {
      hr = fn_82E58808(h, i, &s.v);
      if (hr < 0 || s.v == 0) break;
      if (fn_82F6ADA8(name, s.v) == 0) {
        *out = i;
        goto done;
      }
    }
    hr = fn_82E57F48(h, name);
    if (hr >= 0) {
      *out = s.cnt;
    }
  }
done:
  return hr;
}
