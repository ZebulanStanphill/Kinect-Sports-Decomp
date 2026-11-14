typedef struct Block_82CF98E8 {
  int unk0;
  unsigned int minSize;
  char *cur;
  char *end;
} Block_82CF98E8;
unsigned int fn_82CF98E8(Block_82CF98E8 *self, unsigned int size)
{
  if (self->end != 0) {
    unsigned int avail = self->end - self->cur;
    if (avail >= size) {
      return avail;
    }
    return size;
  }
  if (size < self->minSize) {
    return self->minSize;
  }
  return (size + 0x7fff) & ~0x7fff;
}
