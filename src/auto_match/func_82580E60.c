typedef struct Str_82580E60 { union { char *p; char buf[16]; } u; unsigned int size; unsigned int cap; } Str_82580E60;
extern void fn_82520158(const char *path, int *resource, int flags);
extern void *fn_8251F720(int *resource, int flags);
extern void *fn_82631830(void *data);
extern void fn_8251FA58(void *data);
extern void fn_82230300(Str_82580E60 *s, int a, int b);

static __forceinline char *cstr(Str_82580E60 *s)
{
  if (s->cap >= 0x10) return s->u.p;
  return s->u.buf;
}

static __forceinline int Check(void *p) { return p ? 0 : (int)0x8007000E; }

unsigned char fn_82580E60(Str_82580E60 *name, void **out)
{
  int resource;
  void *data;
  void *obj;
  unsigned char ok = 0;
  fn_82520158(cstr(name), &resource, 0);
  data = fn_8251F720(&resource, 0);
  obj = fn_82631830(data);
  *out = obj;
  if (Check(obj) >= 0) ok = 1;
  fn_8251FA58(data);
  fn_82230300(name, 1, 0);
  return ok;
}
