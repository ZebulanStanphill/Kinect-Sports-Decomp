typedef struct Item_83029CF0 {
    char data[0x10];
} Item_83029CF0;

typedef struct Shuffle_83029CF0 {
    char pad0[8];
    Item_83029CF0 *items;   /* 0x08 */
    unsigned char *played;  /* 0x0c */
    Item_83029CF0 *current; /* 0x10 */
    unsigned short index;   /* 0x14 */
    unsigned short count;   /* 0x16 */
    char pad18[4];
    int flags; /* 0x1c */
} Shuffle_83029CF0;

extern int fn_82F65350(void);

unsigned char fn_83029CF0(Shuffle_83029CF0 *self)
{
    unsigned char allPlayed = 1;
    unsigned char *p = self->played;
    unsigned int i;

    for (i = 0; i < self->count; i++) {
        allPlayed = allPlayed && *p != 0;
        p++;
    }
    if (allPlayed && self->played != 0) {
        p = self->played;
        for (i = 0; i < self->count; i++) {
            *p++ = 0;
        }
    }
    self->index = (unsigned short)(fn_82F65350() % self->count);
    if (self->flags & 2) {
        self->current = &self->items[self->index];
    }
    if (self->played != 0) {
        self->played[self->index] = 1;
    }
    return allPlayed;
}
