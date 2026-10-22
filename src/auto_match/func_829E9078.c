extern int fn_829EC5E8(void *p);

typedef struct {
  char pad[0x20];
  void *impl;
} Obj;

int fn_829E9078(Obj *o, int *out)
{
  int hr = 0x80004005;
  int r;
  if (out == 0) {
    return 0x80070057;
  }
  *out = 0;
  if (o->impl != 0) {
    r = fn_829EC5E8(o->impl);
    if (r >= 0) {
      *out = r;
      hr = 0;
    }
  }
  return hr;
}
