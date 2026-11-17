typedef struct Item_822842B0 {
    int type;  /* +0x0 */
    int flags; /* +0x4 */

    union {
        void *string;
        unsigned char boolean;
        double number;
    } value; /* +0x8 */
} Item_822842B0;

typedef struct Entry_822842B0 {
    unsigned int enabled[3]; /* +0x0 */
    float values[3];         /* +0xc */
    char pad18[0x30 - 0x18]; /* +0x18 */
    char name[0x234 - 0x30]; /* +0x30 */
} Entry_822842B0;

extern void fn_82273CD8(Item_822842B0 *item, int type);
extern void fn_82273C88(Item_822842B0 *item);
extern int fn_82672C20(void *self, const char *method, Item_822842B0 *args, int count);
extern const char *lbl_831CEF1C[];

void fn_822842B0(char *self, int index)
{
    Entry_822842B0 *entry = (Entry_822842B0 *)(self + index * 0x234 + 0xc);
    Item_822842B0 items[7];
    Item_822842B0 *item;
    unsigned char enabled;
    float value;
    int i;
    Item_822842B0 *it;

    for (i = 0, it = items; i < 7; i++, it++) {
        it->type = 0;
        it->flags = 0;
    }
    fn_82273CD8(&items[0], 5);
    items[0].value.string = entry->name;
    enabled = entry->enabled[0] != 0;
    fn_82273CD8(&items[1], 2);
    items[1].value.boolean = enabled;
    enabled = entry->enabled[1] != 0;
    fn_82273CD8(&items[2], 2);
    items[2].value.boolean = enabled;
    enabled = entry->enabled[2] != 0;
    fn_82273CD8(&items[3], 2);
    items[3].value.boolean = enabled;
    value = entry->values[0];
    fn_82273CD8(&items[4], 3);
    items[4].value.number = value;
    value = entry->values[1];
    fn_82273CD8(&items[5], 3);
    items[5].value.number = value;
    value = entry->values[2];
    fn_82273CD8(&items[6], 3);
    items[6].value.number = value;
    fn_82672C20(*(void **)self, lbl_831CEF1C[index], items, 7);
    item = items + 7;
    i = 6;
    do {
        item--;
        fn_82273C88(item);
        i--;
    } while (i >= 0);
}
