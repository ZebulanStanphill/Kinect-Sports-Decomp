typedef struct Use_82B17020 {
  int unknown0;
  void *target;
  struct Use_82B17020 *next;
} Use_82B17020;

typedef struct Block_82B17020 {
  Use_82B17020 *uses;
  int unknown4;
  int unknown8;
  unsigned int flags;
  int unknown10;
  struct Block_82B17020 *next;
} Block_82B17020;

typedef struct Owner_82B17020 {
  char pad[0x40];
  Block_82B17020 *blocks;
} Owner_82B17020;

/* Is `target` in the use list of any block that has flag 0x04000000? */
int fn_82B17020(void *self, Owner_82B17020 *owner, void *target)
{
  Block_82B17020 *block;
  Use_82B17020 *use;

  for (block = owner->blocks; block != 0; block = block->next) {
    if ((block->flags & 0x04000000) != 0) {
      for (use = block->uses; use != 0; use = use->next) {
        if (use->target == target) {
          return 1;
        }
      }
    }
  }
  return 0;
}
