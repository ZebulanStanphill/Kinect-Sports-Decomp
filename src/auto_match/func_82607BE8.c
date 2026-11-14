typedef struct Slot_82607BE8 {
  char data[0x14];
} Slot_82607BE8;

typedef struct Obj_82607BE8 {
  char pad0[0x260];
  Slot_82607BE8 slot0;
  Slot_82607BE8 slot1;
  Slot_82607BE8 slot2;
  Slot_82607BE8 slot3;
} Obj_82607BE8;

Slot_82607BE8 *fn_82607BE8(Obj_82607BE8 *self, unsigned int which)
{
  switch (which) {
  case 0:
    return &self->slot0;
  case 1:
    return &self->slot1;
  case 2:
    return &self->slot2;
  case 3:
    return &self->slot3;
  }
  return 0;
}
