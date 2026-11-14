typedef struct {
  char pad[0x34];
  void **data;         /* 0x34 */
  unsigned int size;   /* 0x38 */
} Owner_826A2FF8;
extern void fn_82696330(void *item);
extern void fn_8267BE38(void *item);
extern void fn_827A9810(void ***array, int newSize);

void fn_826A2FF8(Owner_826A2FF8 *self, int index, int count)
{
  int i;
  if (self->size == 0) return;
  for (i = 0; i < count; i++) {
    void *item = self->data[index + i];
    if (item != 0) {
      fn_82696330(item);
      fn_8267BE38(item);
    }
  }
  for (i = index + count; i < (int)self->size; i++) {
    self->data[i - count] = self->data[i];
    self->data[i] = 0;
  }
  fn_827A9810(&self->data, self->size - count);
}
