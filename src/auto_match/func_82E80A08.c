extern void *memcpy(void *d, const void *s, unsigned int n);
typedef struct { unsigned int size; int pad; char *data; } B;
unsigned int fn_82E80A08(B *b, void *dst, unsigned int off, unsigned int n)
{
  if (off + n > b->size) {
    n = b->size - off;
  }
  memcpy(dst, b->data + off, n);
  return n;
}
