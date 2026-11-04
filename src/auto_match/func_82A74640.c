extern int fn_82A6D090(int, int, int *);
extern int fn_82A6D200(int, int);
extern int fn_82A75410(int, int, int *);
extern int fn_82A75588(int, int);

int fn_82A74640(int *out, int a, int h)
{
  int hr;
  int v;
  hr = fn_82A75588(h, a + 3);
  if (hr >= 0) {
    hr = fn_82A75410(h, 3, &v);
    if (hr >= 0) {
      if (((unsigned)v & 0x80000000) == 0) {
        hr = fn_82A6D200(h, 1);
        if (hr >= 0) *out = 0;
      } else if ((v & 0x40000000) == 0) {
        hr = fn_82A6D200(h, 2);
        if (hr >= 0) {
          hr = fn_82A6D090(h, 2, &v);
          if (hr >= 0) *out = v + 1;
        }
      } else if ((v & 0x20000000) == 0) {
        hr = fn_82A6D200(h, 3);
        if (hr >= 0) {
          hr = fn_82A6D090(h, a, &v);
          if (hr >= 0) *out = v + 4;
        }
      } else {
        hr = 0x80040002;
      }
    }
  }
  return hr;
}
