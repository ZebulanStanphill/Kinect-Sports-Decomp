extern void *fopen(const char *name, const char *mode);

int fn_8282DE20(void **out, const char *name)
{
  void *f = fopen(name, "wb");
  *out = f;
  return f != 0 ? 0 : -1;
}
