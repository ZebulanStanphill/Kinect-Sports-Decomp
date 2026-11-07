typedef struct Player_8255BCC0 { char pad[0x14]; int result; } Player_8255BCC0;
typedef struct User_8255BCC0 { char pad[0xd48]; Player_8255BCC0 *player; } User_8255BCC0;
typedef struct Slot_8255BCC0 { int pad0; User_8255BCC0 *user; int rest[10]; } Slot_8255BCC0;
typedef struct Info_8255BCC0 { int pad0; unsigned int id; } Info_8255BCC0;
typedef struct Ref_8255BCC0 { Info_8255BCC0 *info; void *ref; } Ref_8255BCC0;
typedef struct Table_8255BCC0 { char pad[0x28]; Slot_8255BCC0 slots[4]; } Table_8255BCC0;
extern Table_8255BCC0 lbl_832960A0;
extern void fn_8255BB98(Ref_8255BCC0 *out, Player_8255BCC0 *player);
extern void fn_822315A0(void *ref);

static User_8255BCC0 *GetUser_8255BCC0(unsigned int index)
{
  unsigned int count = 0;
  int k;
  for (k = 3; k >= 0; k--) {
    Slot_8255BCC0 *slot = &lbl_832960A0.slots[k];
    if (slot->user != 0) {
      count++;
    }
    if (count == index - 1) {
      return slot->user;
    }
  }
  return 0;
}

int fn_8255BCC0(unsigned int id)
{
  unsigned int n = 0;
  unsigned int i;
  int k;
  Ref_8255BCC0 ref;
  Player_8255BCC0 *player;
  {
    Slot_8255BCC0 *slot = &lbl_832960A0.slots[3];
    k = 4;
    do {
      if (slot->user != 0) {
        n++;
      }
      slot--;
    } while (--k != 0);
  }
  for (i = 0; i < n; i++) {
    player = GetUser_8255BCC0(i)->player;
    fn_8255BB98(&ref, player);
    if (ref.info != 0 && ref.info->id == id) {
      int result = player->result;
      if (ref.ref != 0) {
        fn_822315A0(ref.ref);
      }
      return result;
    }
    if (ref.ref != 0) {
      fn_822315A0(ref.ref);
    }
  }
  return 0;
}
