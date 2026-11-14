unsigned int strlen(const char *s);

typedef struct Obj_82EF3A68 {
  char pad0[0xc];
  void *source;
  char pad10[0x20 - 0x10];
  unsigned __int64 totalSize;
  char pad28[0x48 - 0x28];
  const char *name;
  const char *value;
  int pad50;
  unsigned int extra;
  const char *text;
} Obj_82EF3A68;

int fn_82EF3A68(Obj_82EF3A68 *self, unsigned __int64 *outSize, unsigned __int64 *outSize2)
{
  unsigned __int64 size;
  if (self->source == 0)
    return 0xc00d36b6;
  size = (unsigned __int64)self->extra + 0x28;
  if (self->name != 0)
    size += strlen(self->name) + 1;
  if (self->value != 0)
    size += strlen(self->value) + 1;
  if (self->text != 0)
    size += strlen(self->text) + 1;
  if (outSize != 0)
    *outSize = size;
  if (outSize2 != 0)
    *outSize2 = size;
  self->totalSize = size;
  return 0;
}
