extern void *memset(void *, int, unsigned int);

typedef struct {
  char pad0[0x10];
  unsigned __int64 f10;
  char pad18[0x8];
  unsigned short f20;
  unsigned char f22;
  char pad23;
  unsigned int f24;
} Src_82E734C0;

int fn_82E734C0(Src_82E734C0 *self, unsigned char *out)
{
  if (out == 0)
    return 0x80070057;
  memset(out, 0, 0x125);
  *(unsigned short *)out = self->f20;
  *(unsigned int *)(out + 2) = self->f24 & 1;
  out[6] = self->f22;
  *(unsigned int *)(out + 0xf) = (unsigned int)self->f10;
  return 0;
}
