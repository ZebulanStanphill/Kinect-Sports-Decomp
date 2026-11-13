typedef struct { char pad[0x10]; unsigned flags; } Obj_82820038;
extern void fn_8281FEC0(Obj_82820038 *self, void *a, int *out);
void fn_82820038(Obj_82820038 *self, void *a, int *out)
{
  if (self->flags & 1) {
    fn_8281FEC0(self, a, out);
    return;
  }
  *out = 0;
}
