typedef struct {
  char pad0[0x10];
  unsigned __int64 dirty;  /* 0x10 */
  char pad1[0x2934 - 0x18];
  unsigned int flags;      /* 0x2934 */
} Device_825CCA30;
extern void fn_8263A1B8(Device_825CCA30 *dev, unsigned int index, void *texture);
extern void fn_8262FEC8(void *resource);
extern void fn_8263CBB0(Device_825CCA30 *dev, unsigned int index, void *value, unsigned __int64 mask);
extern void fn_8263A508(Device_825CCA30 *dev, void *resource);

static __forceinline void SetDirty(unsigned __int64 *d, unsigned __int64 m) { *d |= m; }

void fn_825CCA30(Device_825CCA30 *dev, void **textures, void *resource)
{
  int i;
  for (i = 0; i < 3; i++) {
    fn_8263A1B8(dev, i, textures[i]);
    if (textures[i] != 0) fn_8262FEC8(textures[i]);
    fn_8263CBB0(dev, i, 0, 0x8000000000000000ULL >> (unsigned)(i + 32));
  }
  fn_8263A508(dev, resource);
  if (resource != 0) fn_8262FEC8(resource);
  dev->flags |= 4;
  SetDirty(&dev->dirty, 0x800);
}
