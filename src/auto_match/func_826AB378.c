typedef unsigned int uint;
extern int fn_826A9E60();
typedef struct { void *p; int hr; } Res_func_826AB378;
typedef struct { int pad; uint **x; } A;

Res_func_826AB378 * fn_826AB378(Res_func_826AB378 *out, unsigned int *it, int **arg)
{
  int hr;
  if (*it != 0) {
    hr = fn_826A9E60(it, arg, *(uint *)(**arg + 0xc) & *(uint *)(*it + 4));
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
