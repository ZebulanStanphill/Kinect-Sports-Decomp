typedef struct Obj_827F40B8 { int f0; int f4; void *handle; } Obj_827F40B8;
extern void fn_827F6950(void *handle, void **out);
extern void fn_827F7090(void *handle);

void fn_827F40B8(Obj_827F40B8 *self)
{
  void *result;
  fn_827F6950(self->handle, &result);
  if (result != 0) {
    fn_827F7090(self->handle);
  }
}
