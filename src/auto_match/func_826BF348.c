typedef unsigned int uint;
extern int fn_826BE408();
typedef struct { void *p; int hr; } Res_func_826BF348;
typedef struct { int pad; uint **x; } A;

Res_func_826BF348 * fn_826BF348(Res_func_826BF348 *out, unsigned int *it, int **arg)
{
  int hr;
  if (*it != 0) {
    hr = fn_826BE408(it, arg, *(uint *)(**arg + 0xc) & *(uint *)(*it + 4));
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
