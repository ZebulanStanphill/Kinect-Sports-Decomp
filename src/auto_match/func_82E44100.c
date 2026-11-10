extern int fn_82E7B718(void *obj, void *out);

int fn_82E44100(char *self, void *out)
{
  if (out == 0) {
    return 0x80004003;
  }
  return fn_82E7B718(self + 8, out);
}
