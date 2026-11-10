typedef struct { int pad[4]; char *inner; } Obj_82E7E5B8;
extern int fn_82E7B718(void *obj, void *out);

int fn_82E7E5B8(Obj_82E7E5B8 *self, void *out)
{
  if (self->inner == 0) {
    return 0x80004003;
  }
  return fn_82E7B718(self->inner + 0x10, out);
}
