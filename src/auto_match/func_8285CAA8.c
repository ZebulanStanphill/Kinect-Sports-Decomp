/* Prepares an object's per-element entries in the shared manager: fails when
 * the object is already known or not accepted, fills one entry per element
 * and asks fn_8285CA00 whether the owner's extra list rejects it. */
typedef struct Item_8285CAA8 {
    int words[3];
} Item_8285CAA8;

typedef struct Manager_8285CAA8 {
    char pad000[0x23C];
    int filter;           /* 0x23C */
    int type;             /* 0x240 */
    float scale;          /* 0x244 */
    unsigned short count; /* 0x248 */
    char pad24A[0x2];
    Item_8285CAA8 *items; /* 0x24C */
    char pad250[0xC];
    int table; /* 0x25C */
    char pad260[0x10];
} Manager_8285CAA8;

typedef struct Object_8285CAA8 {
    char pad00[0x14];
    int handle;           /* 0x14 */
    unsigned short count; /* 0x18 */
} Object_8285CAA8;

typedef struct Extra_8285CAA8 {
    char pad00[0x44];
    unsigned int list; /* 0x44 */
} Extra_8285CAA8;

typedef struct Owner_8285CAA8 {
    char pad00[0x40];
    Extra_8285CAA8 *extra; /* 0x40 */
} Owner_8285CAA8;

typedef struct Self_8285CAA8 {
    char pad00[0x44];
    int id; /* 0x44 */
} Self_8285CAA8;

extern Manager_8285CAA8 lbl_83211340;
extern char lbl_832115B0[];

extern int fn_828116B8(int table, int id);
extern int fn_8285ABD8(Object_8285CAA8 *object, int filter);
extern void fn_8285A980(int handle, unsigned short count, unsigned int type, float scale, unsigned int index,
                        Item_8285CAA8 *item);
extern unsigned char fn_82862A60(void *set, int a, Item_8285CAA8 *items, int c);
extern int fn_8285CA00(Object_8285CAA8 *object, unsigned int list, int b);

int fn_8285CAA8(Self_8285CAA8 *self, Object_8285CAA8 *object, int a, Owner_8285CAA8 *owner, int b, int c)
{
    unsigned short i;
    unsigned short count;

    if (fn_828116B8(lbl_83211340.table, self->id) != 0) {
        return 0;
    }
    if (fn_8285ABD8(object, lbl_83211340.filter) == 0) {
        return 0;
    }
    fn_8285A980(object->handle, object->count, lbl_83211340.type, lbl_83211340.scale, 0, lbl_83211340.items);
    if (!fn_82862A60(lbl_832115B0, a, lbl_83211340.items, c)) {
        return 0;
    }
    count = object->count;
    for (i = 1; i < count; i++) {
        fn_8285A980(object->handle, count, lbl_83211340.type, lbl_83211340.scale, i, &lbl_83211340.items[i]);
        count = object->count;
    }
    lbl_83211340.count = count;
    if (owner->extra != 0 && owner->extra->list != 0 && fn_8285CA00(object, owner->extra->list, b) != 0) {
        return 0;
    }
    return 1;
}
