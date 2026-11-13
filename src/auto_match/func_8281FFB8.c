typedef struct { char pad[0x10]; unsigned flags; } Obj_8281FFB8;
extern void fn_8281FD48(Obj_8281FFB8 *self, const char *name, int *out);

void fn_8281FFB8(Obj_8281FFB8 *self, int *out)
{
  if (self->flags & 1) {
    fn_8281FD48(self, ".data", out);
    return;
  }
  *out = 0;
}
