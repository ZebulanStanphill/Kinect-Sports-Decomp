/* Placeholder class name: a read-from-memory-buffer member function.
   The add operand order (pos before base) only matches as a C++ member. */
struct MemStream {
  char *base;
  int unk4;
  unsigned int size;
  unsigned int pos;
  int Read(char **out, unsigned int *n);
};

int MemStream::Read(char **out, unsigned int *n)
{
  unsigned int r = size - pos;
  if (r < *n) {
    *n = r;
    return 0x80182001;
  }
  *out = base + pos;
  pos += *n;
  return 0;
}
