typedef struct { int pad[4]; void *data; unsigned int size; } Field_8282B8A0;
extern void fn_82820EF8(void *data, unsigned int size);

void fn_8282B8A0(void *self, Field_8282B8A0 *field)
{
  if (field->size == 0) {
    return;
  }
  fn_82820EF8(field->data, 4);
}
