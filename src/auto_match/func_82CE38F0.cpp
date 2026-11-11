struct MemStream {
  char *base;
  int unk4;
  unsigned int size;
  unsigned int pos;
  int Read(char **out, unsigned int *n);
};

extern "C" int fn_82CE38F0(MemStream *self, char **out, unsigned int *n)
{
  return self->Read(out, n);
}
