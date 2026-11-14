typedef struct Item_8301B7B8 {
    char pad0[0x30];
    unsigned char useCount;                 /* 0x30 */
    unsigned char locked;                   /* 0x31 */
} Item_8301B7B8;

int fn_8301B6D8(void *list, Item_8301B7B8 *item);

int fn_8301B7B8(void *list, Item_8301B7B8 *item)
{
    if (item->useCount != 0) {
        item->useCount--;
    }
    if (item->useCount == 0 && item->locked == 0) {
        return fn_8301B6D8(list, item);
    }
    return 1;
}
