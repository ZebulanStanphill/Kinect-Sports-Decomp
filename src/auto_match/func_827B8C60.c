typedef struct Slot_827B8C60 {
    void *owner; /* 0x00 */
    char pad04[0xc];
    void *left;              /* 0x10 */
    void *right;             /* 0x14 */
    unsigned short start;    /* 0x18 */
    unsigned short unk1A;    /* 0x1A */
    unsigned short size;     /* 0x1C */
    unsigned short sourceId; /* 0x1E */
} Slot_827B8C60;

typedef struct Rect_827B8C60 {
    struct Rect_827B8C60 *next;     /* 0x00 */
    struct Rect_827B8C60 *prev;     /* 0x04 */
    Slot_827B8C60 *slot;            /* 0x08 */
    struct Rect_827B8C60 *left;     /* 0x0C */
    struct Rect_827B8C60 *right;    /* 0x10 */
    struct Rect_827B8C60 *freeNext; /* 0x14 */
    struct Rect_827B8C60 *freePrev; /* 0x18 */
    unsigned short *source;         /* 0x1C */
    unsigned short flags;           /* 0x20 */
    unsigned short start;           /* 0x22 */
    unsigned short size;            /* 0x24 */
    unsigned short misses;          /* 0x26 */
} Rect_827B8C60;

extern void fn_827B78D8(void *self, Rect_827B8C60 *rect, int size);
extern void fn_827B7978(void *self, Rect_827B8C60 *rect, unsigned char before, int size);
extern void *fn_827B8AD0(void *self, int size, int extra, Slot_827B8C60 *slot);

void fn_827B8C60(void *self, int size, int extra, Rect_827B8C60 *rect)
{
    Slot_827B8C60 *slot = rect->slot;
    void *found;

    if (slot->owner == 0 && rect->size > (unsigned int)(size * 2)) {
        if (slot->left == 0 && slot->right == 0) {
            fn_827B78D8(self, rect, size);
        } else if (slot->right == 0 && slot->sourceId == rect->source[2] &&
                   slot->size > (unsigned int)(size * 2)) {
            unsigned char sameStart = slot->start == rect->start;
            unsigned char sameEnd = slot->start + slot->size == rect->start + rect->size;
            if (sameStart != sameEnd) {
                fn_827B7978(self, rect, sameStart, size);
            }
        }
    }
    found = fn_827B8AD0(self, size, extra, rect->slot);
    if (found == 0) {
        rect->misses++;
    }
    if (rect->misses > 0x10) {
        rect->freeNext->freePrev = rect->freePrev;
        rect->freePrev->freeNext = rect->freeNext;
        rect->flags |= 0x4000;
    } else if (rect->misses != 0 && found != 0) {
        rect->misses--;
    }
}
