typedef struct Flags_826293F0 {
    char pad[8];
    unsigned char *bits;
} Flags_826293F0;

typedef struct Game_826293F0 {
    char pad[0xf0];
    Flags_826293F0 *flags;
} Game_826293F0;

typedef struct Globals_826293F0 {
    Game_826293F0 *game;
    char pad4[0xb0 - 4];
    int nameCount;
    const unsigned char **names;
} Globals_826293F0;

typedef struct Item_826293F0 {
    char pad0[4];
    int kind;
    unsigned char name[0x40];
    int expected;
} Item_826293F0;

extern Globals_826293F0 lbl_83265988;
extern int fn_82526AF8(int count, const unsigned char **names, const unsigned char *key);

static __forceinline unsigned int Select(int ok, unsigned int value)
{
    return ok ? value : 0;
}

int fn_826293F0(Item_826293F0 **itemRef, int unused, int allow)
{
    Item_826293F0 *item = *itemRef;

    switch (item->kind) {
    case 0x68:
        if (allow == 0)
            return 0;
        break;
    case 0x80: {
        int index = fn_82526AF8(lbl_83265988.nameCount - 1, lbl_83265988.names + 1, item->name);
        int oneBased = index + 1;
        unsigned int id = Select(index != -1, oneBased);
        if (id != 0 &&
            item->expected != ((lbl_83265988.game->flags->bits[id >> 3] & (1 << (id & 7))) != 0))
            return 0;
        break;
    }
    default:
        return 4;
    }
    return 3;
}
