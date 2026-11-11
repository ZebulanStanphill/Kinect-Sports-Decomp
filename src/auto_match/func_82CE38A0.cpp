struct MemStream {
  char *base;
  int unk4;
  unsigned int size;
  unsigned int pos;
  int Read(char **out, unsigned int *n);
};

extern "C" void *memcpy(void *dst, const void *src, unsigned int n);

extern "C" int fn_82CE38A0(MemStream *self, void *dst, unsigned int *n)
{
  char *data;
  int hr = self->Read(&data, n);
  if (hr >= 0) {
    memcpy(dst, data, *n);
  }
  return hr;
}
