/* Splits a rectangle's free span: the part beyond `size` becomes a new
   rectangle before or after it, which joins both lists of the allocator. */
typedef struct Slot_827B7978 {
    char unk00[0x18];
    unsigned short start; /* 0x18 */
    unsigned short unk1A; /* 0x1A */
    unsigned short size;  /* 0x1C */
} Slot_827B7978;

typedef struct Rect_827B7978 {
    struct Rect_827B7978 *next;     /* 0x00 */
    struct Rect_827B7978 *prev;     /* 0x04 */
    Slot_827B7978 *slot;            /* 0x08 */
    struct Rect_827B7978 *left;     /* 0x0C */
    struct Rect_827B7978 *right;    /* 0x10 */
    struct Rect_827B7978 *freeNext; /* 0x14 */
    struct Rect_827B7978 *freePrev; /* 0x18 */
    unsigned short *source;         /* 0x1C */
    unsigned short unk20;           /* 0x20 */
    unsigned short start;           /* 0x22 */
    unsigned short size;            /* 0x24 */
} Rect_827B7978;

typedef struct Allocator_827B7978 {
    char unk00[0x30];
    Rect_827B7978 *headNext; /* 0x30 */
    Rect_827B7978 *headPrev; /* 0x34 */
    int count;               /* 0x38 */
    Rect_827B7978 freeHead;  /* 0x3C */
} Allocator_827B7978;

extern Rect_827B7978 *fn_827B6F80(Allocator_827B7978 *self, unsigned short *source, int start, int size);

static __forceinline void PushBack_827B7978(Allocator_827B7978 *self, Rect_827B7978 *rect)
{
    Rect_827B7978 *head = (Rect_827B7978 *)&self->headNext;

    rect->prev = head->prev;
    rect->next = head;
    head->prev->next = rect;
    head->prev = rect;
    self->count++;
}

static __forceinline void PushFree_827B7978(Rect_827B7978 *head, Rect_827B7978 *rect)
{
    rect->freePrev = head->freePrev;
    rect->freeNext = head;
    head->freePrev->freeNext = rect;
    head->freePrev = rect;
}

void fn_827B7978(Allocator_827B7978 *self, Rect_827B7978 *rect, unsigned char before, int size)
{
    Slot_827B7978 *slot = rect->slot;
    int rest = slot->size - size;
    Rect_827B7978 *split;
    Rect_827B7978 *prev;
    Rect_827B7978 *next;

    if (before) {
        split = fn_827B6F80(self, rect->source, slot->start, rest);
        prev = rect->left;
        split->right = rect;
        split->left = prev;
        prev->right = split;
        rect->left = split;
        rect->start += rest;
        slot->start = rect->start;
    } else {
        split = fn_827B6F80(self, rect->source, slot->start + size, rest);
        next = rect->right;
        split->left = rect;
        split->right = next;
        next->left = split;
        rect->right = split;
    }
    slot->size = size;
    rect->size -= rest;
    PushBack_827B7978(self, split);
    PushFree_827B7978(&self->freeHead, split);
}
