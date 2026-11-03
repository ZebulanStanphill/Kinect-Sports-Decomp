typedef struct Obj Obj;
struct Obj { int (**vt)(); };
extern int fn_82F377E8(void *, unsigned, Obj ****);
extern int fn_82F384C0(void *, int);
int fn_82F38AE0(char *self, __int64 *out)
{
  int hr;
  __int64 total;
  unsigned n, i;
  Obj ***it;
  __int64 tmp;
  Obj **po;
  if (out == 0) return 0x80070057;
  hr = fn_82F384C0(self, 0);
  if (hr >= 0) {
    n = *(unsigned *)(self + 0x70);
    total = 0;
    i = 0;
    if (n != 0) {
      do {
        fn_82F377E8(self + 8, i, &it);
        po = *it;
        if (po == 0) { hr = 0x8000ffff; break; }
        tmp = 0;
        hr = ((int (*)(Obj *, int, __int64 *))((int *)*(int *)po)[5])((Obj *)po, 0, &tmp);
        if (hr < 0) break;
        i++;
        total += tmp;
      } while (i < n);
    }
    *out = total;
  }
  return hr;
}
