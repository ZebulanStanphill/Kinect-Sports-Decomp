typedef struct Obj_82826D90 {
  char pad0[0xcc];
  void *loader;
  char padd0[0xc];
  unsigned int count;
  unsigned int *offsets;
  char *names;
  char pade8[0x4c];
  unsigned char flags;
} Obj_82826D90;
extern void fn_8282D0E0(void *loader, int n, Obj_82826D90 **self);
extern char *strncpy(char *, const char *, unsigned int);
extern int fn_82F6DCE0(char *buf, unsigned int size, const char *fmt, ...);

void fn_82826D90(Obj_82826D90 *self, int id, char *buf, int size)
{
  if ((self->flags & 0x10) == 0) {
    fn_8282D0E0(self->loader, 1, &self);
  }
  if (self->count != 0) {
    strncpy(buf, self->names + self->offsets[id - 1], size);
  } else {
    fn_82F6DCE0(buf, size, "Asset %d", id);
  }
  buf[size - 1] = 0;
}
