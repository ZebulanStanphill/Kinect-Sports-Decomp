typedef struct Vec2_822676A0 {
    float x;
    float y;
} Vec2_822676A0;

typedef struct Segment_822676A0 {
    int first;           /* 0x00 */
    int second;          /* 0x04 */
    Vec2_822676A0 start; /* 0x08 */
    Vec2_822676A0 delta; /* 0x10 */
    char pad18[0x40];
} Segment_822676A0;

typedef struct List_822676A0 {
    void *head;
    unsigned int size;
} List_822676A0;

typedef struct Item_822676A0 {
    char pad0[0xe8];
    float scaleX; /* 0xe8 */
    float scaleY; /* 0xec */
    float width;  /* 0xf0 */
    float height; /* 0xf4 */
    float size;   /* 0xf8 */
} Item_822676A0;

typedef struct Source_822676A0 {
    char pad0[0x40];
    int first;  /* 0x40 */
    int second; /* 0x44 */
} Source_822676A0;

typedef struct Owner_822676A0 {
    List_822676A0 items; /* 0x00 */
    char pad8[0x18 - 0x8];
    void *track; /* 0x18 */
    char pad1c[0x24 - 0x1c];
    char segments[0x30]; /* 0x24 */
    int dirty;           /* 0x54 */
} Owner_822676A0;

extern void fn_82267EB0(List_822676A0 *list, Item_822676A0 *const *item);
extern void fn_8227E330(void *track, Segment_822676A0 *segment, void *segments);

static __forceinline Vec2_822676A0 MakeVec2(float x, float y)
{
    Vec2_822676A0 v;

    v.x = x;
    v.y = y;
    return v;
}

static __forceinline void SetScale(Item_822676A0 *item, float x, float y)
{
    item->scaleX = x;
    item->scaleY = y;
    item->width = item->size * x;
    item->height = item->size * y;
}

void fn_822676A0(Owner_822676A0 *self, Item_822676A0 *item, Source_822676A0 *source)
{
    Segment_822676A0 segment;

    SetScale(item, 0.75f, 1.5f);
    fn_82267EB0(&self->items, &item);
    segment.start = MakeVec2(-1.0f, -1.0f);
    segment.delta = MakeVec2(0.0f, 0.0f);
    segment.first = source->first;
    segment.second = source->second;
    fn_8227E330(self->track, &segment, self->segments);
    self->dirty = 1;
}
