typedef struct List_827A1F10 {
    void *items;        /* 0x0 */
    unsigned int count; /* 0x4 */
    int pad8[3];        /* 0x8 */
    int current;        /* 0x14 */
} List_827A1F10;

typedef struct Cursor_827A1F10 {
    List_827A1F10 *list; /* 0x0 */
    int pad;             /* 0x4 */
    int index;           /* 0x8 */
    float offset;        /* 0xc */
    unsigned char done;  /* 0x10 */
} Cursor_827A1F10;

typedef struct Track_827A1F10 {
    char pad0[0x24];
    List_827A1F10 list; /* 0x24 */
    char pad3c[0x98 - 0x3c];
    unsigned char flags; /* 0x98 */
} Track_827A1F10;

extern int fn_827A0BD0(Track_827A1F10 *self);
extern int fn_827A8770(List_827A1F10 *list);
extern unsigned char fn_82773E60(Cursor_827A1F10 *cursor);

int fn_827A1F10(Track_827A1F10 *self)
{
    Cursor_827A1F10 cursor;
    List_827A1F10 *list;
    int duration;
    int index;
    int result;

    fn_827A0BD0(self);
    list = &self->list;
    duration = fn_827A8770(list);
    result = 0;
    cursor.pad = 0;
    cursor.list = list;
    cursor.done = (self->flags >> 2) & 1;
    cursor.offset = -(float)(unsigned int)duration;
    index = list->current;
    cursor.index = index;
    while (fn_82773E60(&cursor)) {
        if (index >= 0) {
            result = index;
        } else {
            result = -1;
        }
        if ((unsigned int)index < list->count) {
            index++;
            cursor.index = index;
        }
    }
    return result;
}
