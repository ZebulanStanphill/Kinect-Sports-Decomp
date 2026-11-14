typedef struct { union { char *p; char buf[16]; } u; unsigned int size; unsigned int cap; } Str;
extern void fn_82520158(const char *path, int *resource, int flags);
extern void *fn_8251F720(int *resource, int flags);
extern void *fn_82631488(void *data);
extern void fn_8251FA58(void *data);
extern void fn_82230300(Str *s, int a, int b);

static __forceinline char *cstr(Str *s)
{
  if (s->cap >= 0x10) return s->u.p;
  return s->u.buf;
}

static __forceinline int Check(void *p) { return p ? 0 : (int)0x8007000E; }

unsigned char fn_82580EF8(Str *name, void **out)
{
  int resource;
  void *data;
  void *obj;
  unsigned char ok;
  fn_82520158(cstr(name), &resource, 0);
  ok = 0;
  data = fn_8251F720(&resource, 0);
  obj = fn_82631488(data);
  *out = obj;
  if (Check(obj) >= 0) ok = 1;
  fn_8251FA58(data);
  fn_82230300(name, 1, 0);
  return ok;
}
