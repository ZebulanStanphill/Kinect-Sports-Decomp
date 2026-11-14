typedef struct {
  char pad0[0x10];
  unsigned char ready;       /* 0x10 */
  char pad11[0x24 - 0x11];
  int mode;                  /* 0x24 */
  char pad28[0xd8 - 0x28];
  void *resource;            /* 0xd8 */
  char padDC[0x1e0 - 0xdc];
  unsigned char desc[0x7c];  /* 0x1e0 */
  int flags;                 /* 0x25c */
} Player_82679108;
extern void fn_82647448(void *resource);
extern void fn_82647460(void *resource);
extern unsigned char fn_82678FA0(Player_82679108 *self);
extern void fn_82677DD0(Player_82679108 *self);
void *memcpy(void *dst, const void *src, unsigned int size);

int fn_82679108(Player_82679108 *self, void *resource, const void *desc, int mode, int flags)
{
  if (resource != 0 && desc != 0) {
    self->resource = resource;
    fn_82647448(resource);
    if (!fn_82678FA0(self)) {
    fn_82677DD0(self);
    fn_82647460(self->resource);
    self->resource = 0;
      return 0;
    }
      self->mode = mode;
      memcpy(self->desc, desc, 0x7c);
      self->flags = flags;
      self->ready = 1;
    return 1;
  }
  return 0;
}
