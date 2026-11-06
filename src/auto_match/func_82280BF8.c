typedef struct { void (**vt)(void *); } Item_82280BF8;
typedef struct {int first; Item_82280BF8 *item;} Slot_82280BF8;
typedef struct {char pad[0x44]; int kind; int extra; Slot_82280BF8 a,b;} State_82280BF8;
static __forceinline Slot_82280BF8 *slot(State_82280BF8 *self) {
  if (self->kind == 1 || self->kind == 0) return &self->a;
  return &self->b;
}
void fn_82280BF8(State_82280BF8 *self) {
 if (slot(self)->item != 0) {
  Item_82280BF8 *item = slot(self)->item;
  item->vt[0](item);
 }
}
