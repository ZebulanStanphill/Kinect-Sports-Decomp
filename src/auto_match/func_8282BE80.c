extern void *fn_82F674A0(const char *name, const char *mode);

int fn_8282BE80(void **out, const char *name)
{
  void *f = fn_82F674A0(name, "rb");
  *out = f;
  return f != 0 ? 0 : -1;
}
