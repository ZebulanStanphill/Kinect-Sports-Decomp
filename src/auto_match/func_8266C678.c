extern void *memcpy(void *dst, const void *src, unsigned int n);

typedef struct { int valid; unsigned char data[0x34]; } Slot;
typedef struct { char pad[0xf8]; Slot slots[4]; } Self;

int fn_8266C678(Self *s, int i, void *out)
{
  if (i < 4 && out != 0 && s->slots[i].valid != 0) {
    memcpy(out, s->slots[i].data, 0x34);
    return 1;
  }
  return 0;
}
