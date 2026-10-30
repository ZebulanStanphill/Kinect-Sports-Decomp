typedef unsigned int uint;
extern int fn_826A9DB0();
typedef struct { void *p; int hr; } Res_func_826BF258;
typedef struct { int pad; uint **x; } A;

Res_func_826BF258 * fn_826BF258(Res_func_826BF258 *out, unsigned int *it, int **arg)
{
  int hr;
  if (*it != 0) {
    hr = fn_826A9DB0(it, arg, *(uint *)(**arg + 0xc) & *(uint *)(*it + 4));
    if (hr >= 0) {
      out->p = it;
      out->hr = hr;
      return out;
    }
  }
  hr = 0;
  out->p = 0;
  out->hr = hr;
  return out;
}
