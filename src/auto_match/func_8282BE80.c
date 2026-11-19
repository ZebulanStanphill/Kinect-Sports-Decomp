extern void *fopen(const char *name, const char *mode);

int fn_8282BE80(void **out, const char *name)
{
  void *f = fopen(name, "rb");
  *out = f;
  return f != 0 ? 0 : -1;
}
