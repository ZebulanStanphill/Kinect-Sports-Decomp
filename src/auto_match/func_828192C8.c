typedef struct Obj_828192C8 { char pad0[0x3c]; unsigned int key; } Obj_828192C8;

int fn_828192C8(const Obj_828192C8 *self, unsigned int key)
{
  unsigned int a = self->key;
  if (a > key)
    return -1;
  return a < key;
}
