typedef struct Array_8261C588 {
    char *begin;           /* 0x00 */
    char *end;             /* 0x04 */
    int capacity;          /* 0x08 */
    unsigned short stride; /* 0x0c */
} Array_8261C588;

typedef struct Pool_8261C588 {
    int unk0;             /* 0x00 */
    Array_8261C588 items; /* 0x04 */
} Pool_8261C588;

typedef struct Item_8261C588 {
    char pad0[0x84];
    struct Object_8261C588 *owner; /* 0x84 */
    char pad88[0x100 - 0x88];
} Item_8261C588;

typedef struct World_8261C588 {
    char pad0[0x3e4];
    int active; /* 0x3e4 */
    char pad3E8[0xcec - 0x3e8];
    Pool_8261C588 pool; /* 0xcec */
} World_8261C588;

typedef struct State_8261C588 {
    char pad0[0x138];
    unsigned int flags; /* 0x138 */
} State_8261C588;

static __forceinline void SetStateFlags(State_8261C588 *state, unsigned int mask)
{
    state->flags |= mask;
}

typedef struct Object_8261C588 {
    char pad0[0x4c];
    World_8261C588 *world; /* 0x4c */
    char pad50[0x380 - 0x50];
    State_8261C588 state; /* 0x380 */
    char pad4BC[0x8c0 - 0x4bc];
    char *listener; /* 0x8c0 */
} Object_8261C588;

typedef struct Message_8261C588 {
    int type;                /* 0x00 */
    int unk4;                /* 0x04 */
    Object_8261C588 *sender; /* 0x08 */
} Message_8261C588;

extern void fn_825925D8(Object_8261C588 *self, Message_8261C588 *message);
extern void fn_8261C680(Object_8261C588 *self, Object_8261C588 *other);
extern void fn_825A1778(void *listeners, World_8261C588 *world);
extern void fn_825D1EC8(Item_8261C588 *item);
extern void fn_8251E530(Array_8261C588 *array, Item_8261C588 *item);

void fn_8261C588(Object_8261C588 *self, Message_8261C588 *message)
{
    switch (message->type) {
    case 0x17:
        break;
    case 0x33:
        SetStateFlags(&self->state, 4);
        SetStateFlags(&self->state, 1);
        fn_825925D8(self, message);
        fn_8261C680(self, message->sender);
        break;
    case 0x44:
        if (message->sender == self) {
            World_8261C588 *world = self->world;
            Item_8261C588 *item;
            Item_8261C588 *end;
            Pool_8261C588 *pool;

            world->active = 0;
            if (self->listener != 0) {
                fn_825A1778(self->listener + 0x11c, world);
            }
            pool = &world->pool;
            end = (Item_8261C588 *)pool->items.end;
            for (item = (Item_8261C588 *)pool->items.begin; item < end; item++) {
                if (item->owner == self) {
                    fn_825D1EC8(item);
                    fn_8251E530(&pool->items, item);
                    item--;
                    end--;
                }
            }
        }
    default:
        fn_825925D8(self, message);
        break;
    }
}
