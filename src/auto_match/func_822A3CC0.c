extern void *memset(void *dst, int value, unsigned int size);

typedef struct Pair_822A3CC0 {
    int enabled; /* 0x0 */
    int value;   /* 0x4 */
} Pair_822A3CC0;

typedef struct SharedPtr_822A3CC0 {
    void *ptr; /* 0x0 */
    void *rep; /* 0x4 */
} SharedPtr_822A3CC0;

typedef struct Items_822A3CC0 {
    void *first;   /* 0x00 */
    void *last;    /* 0x04 */
    void *end;     /* 0x08 */
    int allocator; /* 0x0c */
} Items_822A3CC0;

typedef struct Element_822A3CC0 {
    void *vt;             /* 0x00 */
    Items_822A3CC0 items; /* 0x04 */
    int value;            /* 0x14 */
} Element_822A3CC0;

typedef struct Screen_822A3CC0 {
    Pair_822A3CC0 pairs[5];       /* 0x00 */
    SharedPtr_822A3CC0 view;      /* 0x28 */
    unsigned char state[0x20];    /* 0x30 */
    int count50;                  /* 0x50 */
    int count54;                  /* 0x54 */
    Element_822A3CC0 elements[3]; /* 0x58 */
    Element_822A3CC0 extra;       /* 0xa0 */
    int selected;                 /* 0xb8 */
    int visible;                  /* 0xbc */
} Screen_822A3CC0;

extern char lbl_821B9328[];
extern void fn_82266D28(SharedPtr_822A3CC0 *self, void *ptr);

static __forceinline void InitItems(Items_822A3CC0 *items)
{
    items->first = 0;
    items->last = 0;
    items->end = 0;
}

static __forceinline void InitElement(Element_822A3CC0 *element)
{
    element->vt = lbl_821B9328;
    InitItems(&element->items);
    element->value = 0;
}

Screen_822A3CC0 *fn_822A3CC0(Screen_822A3CC0 *self)
{
    int i;
    Element_822A3CC0 *element;

    for (i = 0; i < 5; i++) {
        self->pairs[i].enabled = 1;
        self->pairs[i].value = 0;
    }
    self->view.ptr = 0;
    self->view.rep = 0;
    fn_82266D28(&self->view, 0);
    memset(self->state, 0, sizeof(self->state));
    self->count50 = 0;
    self->count54 = 0;
    element = self->elements;
    for (i = 3; i != 0; i--) {
        InitElement(element);
        element++;
    }
    InitElement(&self->extra);
    self->selected = 0;
    self->visible = 1;
    return self;
}
