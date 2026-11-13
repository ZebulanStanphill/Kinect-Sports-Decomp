typedef struct { int a, b, c; } Entry_82635E18;
typedef struct { Entry_82635E18 *data; unsigned int size; unsigned int cap; } Vec_82635E18;
typedef struct {
  char pad0[0x50];
  int hr;
  char pad54[0xc];
  Vec_82635E18 items;
  char rest[0x26d0 - 0x6c];
} Slot_82635E18;
typedef struct {
  int current;
  int pad4[3];
  Slot_82635E18 slots[2];
} Self_82635E18;

extern void fn_82634DF8(Slot_82635E18 *slot, int a, int b, int c, Entry_82635E18 *entry);
extern void fn_82637090(Vec_82635E18 *v, Entry_82635E18 *entry, int *hr);

int fn_82635E18(Self_82635E18 *self, Entry_82635E18 *entry)
{
  Slot_82635E18 *slot = &self->slots[self->current];
  fn_82634DF8(slot, 1, 0, 0, entry);
  fn_82637090(&slot->items, entry, &slot->hr);
  return slot->items.size - 1;
}
