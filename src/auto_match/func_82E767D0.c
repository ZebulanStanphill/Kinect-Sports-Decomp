extern void *memcpy(void *dst, const void *src, unsigned int n);

typedef struct { char pad[0x13c]; unsigned char data[0xfc]; unsigned char flags; } Self;

int fn_82E767D0(Self *s, void *out)
{
  if (out == 0) {
    return 0x80070057;
  }
  if ((s->flags & 2) == 0) {
    return 0xc00d3a98;
  }
  memcpy(out, s->data, 0x10);
  return 0;
}
