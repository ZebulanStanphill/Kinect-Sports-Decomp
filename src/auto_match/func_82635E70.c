typedef struct { int a, b, c; } Entry_82635E70;
typedef struct { Entry_82635E70 *data; unsigned int size; unsigned int cap; } Vec_82635E70;
typedef struct {
  char pad0[0x50];
  int hr;
  char pad54[0xc];
  Vec_82635E70 items;
  char rest[0x26d0 - 0x6c];
} Slot_82635E70;
typedef struct {
  int current;
  int pad4[3];
  Slot_82635E70 slots[2];
} Self_82635E70;

extern void fn_82634DF8(Slot_82635E70 *slot, int a, int b, int c, Entry_82635E70 *entry);
extern void fn_82637090(Vec_82635E70 *v, Entry_82635E70 *entry, int *hr);

int fn_82635E70(Self_82635E70 *self, Entry_82635E70 *entry, int flag)
{
  Slot_82635E70 *slot = &self->slots[self->current];
  fn_82634DF8(slot, 1, flag == 0, 0, entry);
  fn_82637090(&slot->items, entry, &slot->hr);
  return slot->items.size - 1;
}
