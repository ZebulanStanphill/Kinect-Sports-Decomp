typedef struct Body_8242E688 {
    char pad0[0x44];
    unsigned char slot; /* 0x44 */
} Body_8242E688;

typedef struct Player_8242E688 {
    char pad0[0x1a0];
    Body_8242E688 *body; /* 0x1a0 */
} Player_8242E688;

typedef struct Entry_8242E688 {
    void **items; /* 0x00 */
    char pad4[0x10 - 0x4];
    int current; /* 0x10 */
} Entry_8242E688;

typedef struct Entries_8242E688 {
    Entry_8242E688 **begin; /* 0x00 */
} Entries_8242E688;

typedef struct Track_8242E688 {
    char pad0[0x8];
    Entries_8242E688 *entries; /* 0x08 */
} Track_8242E688;

extern int fn_8242C410(Track_8242E688 *self);
extern Player_8242E688 *fn_822ABA88(void *item, int flags);

/* The player whose body sits in the given slot, or null. */
Player_8242E688 *fn_8242E688(Track_8242E688 *self, unsigned int slot)
{
    int i;
    Entry_8242E688 *entry;
    Player_8242E688 *player;

    for (i = 0; i < fn_8242C410(self); i++) {
        entry = self->entries->begin[i];
        player = fn_822ABA88(entry->items[entry->current], 0);
        if (player->body->slot == slot) {
            return player;
        }
    }
    return 0;
}
