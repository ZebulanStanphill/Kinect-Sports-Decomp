typedef unsigned int uint;
extern int fn_826D8B48();
typedef struct { void *p; int hr; } Res_826D98A8;

Res_826D98A8 * fn_826D98A8(Res_826D98A8 *out, unsigned int *it, uint *arg)
{
  int hr;
  if (*it != 0) {
    hr = fn_826D8B48(it, arg, ((*arg >> 8) ^ *arg) & *(uint *)(*it + 4));
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
