extern void *fn_826811F8(int key, void *provider, int extra);

void *fn_82685160(int *self, int key, int extra)
{
  int provider = self[3];
  if (provider == 0) {
    return 0;
  }
  return fn_826811F8(key, (void *)provider, extra);
}
