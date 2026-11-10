extern int fn_82E53480(void *a, void *out);

int fn_82E2D5A8(void *self, void *a, void *out)
{
  if (out == 0) {
    return 0x80070057;
  }
  return fn_82E53480(a, out);
}
