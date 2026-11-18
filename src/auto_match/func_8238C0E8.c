/* Presents the current hero moment in the style that belongs to its kind and tells every linked
   object about it. Returns 0 when the moment is disabled or its kind has no presentation. */
typedef struct Target_8238C0E8 {
    char padding00[0x28];
    void *object; /* 0x28 */
} Target_8238C0E8;

typedef struct Link_8238C0E8 {
    Target_8238C0E8 *target; /* 0x00 */
    int extra;               /* 0x04 */
} Link_8238C0E8;

typedef struct LinkVector_8238C0E8 {
    Link_8238C0E8 *begin; /* 0x00 */
    Link_8238C0E8 *end;   /* 0x04 */
} LinkVector_8238C0E8;

typedef struct Slot_8238C0E8 {
    void **items; /* 0x00 */
    char padding04[0xc];
    int current; /* 0x10 */
} Slot_8238C0E8;

typedef struct Moment_8238C0E8 {
    char padding00[0x24];
    int enabled; /* 0x24 */
    char padding28[8];
    char data[0x258 - 0x30]; /* 0x30 */
    unsigned int kind;       /* 0x258 */
    char padding25C[0x26c - 0x25c];
    int extended; /* 0x26c */
} Moment_8238C0E8;

typedef struct Game_8238C0E8 {
    char padding00[8];
    Slot_8238C0E8 ***slots; /* 0x08 */
    char padding0C[0xa8 - 0xc];
    LinkVector_8238C0E8 *links; /* 0xa8 */
    char paddingAC[0xd4 - 0xac];
    void *presenter; /* 0xd4 */
    char paddingD8[0x1f0 - 0xd8];
    int slotIndex; /* 0x1f0 */
    int momentId;  /* 0x1f4 */
    char padding1F8[0x21c - 0x1f8];
    int allowSpecial; /* 0x21c */
} Game_8238C0E8;

typedef struct Self_8238C0E8 {
    char padding00[8];
    Game_8238C0E8 *game; /* 0x08 */
} Self_8238C0E8;

extern Moment_8238C0E8 *fn_822ABA88(void *item, int id);
extern void fn_822A1830(void *presenter, void *data, int style);
extern void fn_824C97F0(void *object, const char *name);

int fn_8238C0E8(Self_8238C0E8 *self)
{
    Game_8238C0E8 *game = self->game;
    Slot_8238C0E8 *slot = (*game->slots)[game->slotIndex];
    Moment_8238C0E8 *moment = fn_822ABA88(slot->items[slot->current], game->momentId);
    int style;

    if (moment->enabled != 0) {
        LinkVector_8238C0E8 *links;
        Link_8238C0E8 *begin;
        Link_8238C0E8 *end;
        Link_8238C0E8 *it;

        switch (moment->kind) {
        case 0:
        case 1:
        case 2:
            style = 3;
            break;
        case 0xb:
            if (game->allowSpecial == 0) {
                return 0;
            }
            style = 0;
            break;
        case 0xc:
            if (moment->extended == 0) {
                return 0;
            }
            style = 2;
            break;
        case 0x10:
            style = 1;
            break;
        default:
            return 0;
        }
        fn_822A1830(game->presenter, moment->data, style);
        links = game->links;
        begin = links->begin;
        it = begin;
        end = links->end;
        if (begin != end) {
            do {
                fn_824C97F0(it->target->object, "HeroMoment");
                it++;
            } while (it != end);
        }
        return 1;
    }
    return 0;
}
