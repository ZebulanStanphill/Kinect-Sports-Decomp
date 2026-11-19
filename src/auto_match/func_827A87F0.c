typedef struct ShortItem_827A87F0 {
    int flags; /* 0x00: negative = short item */
    int pad04[3];
    int start; /* 0x10 */
    short pad14;
    unsigned short length; /* 0x16 */
} ShortItem_827A87F0;

typedef struct LongItem_827A87F0 {
    int flags; /* 0x00 */
    int pad04[3];
    int start; /* 0x10 */
    int pad14;
    int length; /* 0x18 */
} LongItem_827A87F0;

typedef union Item_827A87F0 {
    int flags;
    ShortItem_827A87F0 s;
    LongItem_827A87F0 l;
} Item_827A87F0;

typedef struct Track_827A87F0 {
    Item_827A87F0 **items; /* 0x00 */
    int pad04[4];
    unsigned int current; /* 0x14 */
    int pad18;
    float begin; /* 0x1c */
    int pad20;
    float end; /* 0x24 */
} Track_827A87F0;

static __forceinline unsigned char IsShort_827A87F0(Item_827A87F0 *item)
{
    return (unsigned char)((unsigned int)item->flags >> 31);
}

static __forceinline int Start_827A87F0(Item_827A87F0 *item)
{
    if (IsShort_827A87F0(item)) {
        return item->s.start;
    }
    return item->l.start;
}

static __forceinline int Length_827A87F0(Item_827A87F0 *item)
{
    if (IsShort_827A87F0(item)) {
        return item->s.length;
    }
    return item->l.length;
}

unsigned char fn_827A87F0(Track_827A87F0 *track, unsigned int index, float time)
{
    Item_827A87F0 *item;

    item = track->items[index];
    if (index == track->current) {
        return (float)Start_827A87F0(item) + time <= track->end - track->begin + 20.0f;
    }
    return index > track->current &&
           (float)(Start_827A87F0(item) + Length_827A87F0(item)) + time <= track->end - track->begin + 20.0f;
}
