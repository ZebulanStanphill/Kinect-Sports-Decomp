typedef struct {
  char pad0[0xc];
  void *ready;
  char pad1[0x40];
  void *data;
  unsigned size;
} Obj_82EF3B58;
extern void *memcpy(void *, const void *, unsigned);

int fn_82EF3B58(Obj_82EF3B58 *o, unsigned cap, void *dst, unsigned *outn)
{
  if (o->ready == 0)
    return 0xc00d36b6;
  if (outn == 0 || (dst == 0 && cap != 0))
    return 0x80070057;
  *outn = o->size;
  if (cap < o->size)
    return 0xc00d36b1;
  if (o->size != 0)
    memcpy(dst, o->data, o->size);
  return 0;
}
