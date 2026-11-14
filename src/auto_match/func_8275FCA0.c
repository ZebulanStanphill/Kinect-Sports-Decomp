typedef struct Obj_8275FCA0 {
  char pad0[0x28];
  unsigned char *data;
} Obj_8275FCA0;

static __forceinline unsigned int ReadLength(const unsigned char *data)
{
  unsigned int value = 0;
  const unsigned char *p = data + 1;
  unsigned int i = 0;
  unsigned int shift = 0;
  unsigned int count = ((data[0] >> 3) & 3) + 1;
  for (; i < count; i++) {
    value |= (unsigned int)p[i] << shift;
    shift += 8;
  }
  return value;
}

static __forceinline unsigned int HashBytes(const unsigned char *data, unsigned int length)
{
  unsigned int hash = 0;
  while (length != 0) {
    length--;
    hash = hash * 33 ^ data[length];
  }
  return hash;
}

unsigned int fn_8275FCA0(Obj_8275FCA0 *self)
{
  return HashBytes(self->data, ReadLength(self->data));
}
