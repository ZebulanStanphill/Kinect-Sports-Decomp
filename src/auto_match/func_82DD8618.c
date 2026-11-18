/* Removes entry `index` from a small inline entry list: the last entry takes
 * its place, the trailing data block moves down over the freed slot, and
 * fn_82DD8470 recomputes the list's derived data. */
typedef struct Entry_82DD8618 {
    unsigned int key;   /* 0x0 */
    unsigned int value; /* 0x4 */
} Entry_82DD8618;

typedef struct List_82DD8618 {
    unsigned char sizeA;       /* 0x0 */
    unsigned char sizeB;       /* 0x1 */
    unsigned char count;       /* 0x2 */
    unsigned char pad3;        /* 0x3 */
    Entry_82DD8618 entries[1]; /* 0x4 */
} List_82DD8618;

extern void fn_82DD8470(List_82DD8618 *list);

void fn_82DD8618(List_82DD8618 *list, int index)
{
    int oldCount;
    int last;
    unsigned int *dst;
    unsigned int *src;
    int i;

    oldCount = list->count;
    last = oldCount - 1;
    list->count = last;
    list->entries[index] = list->entries[last];
    dst = (unsigned int *)&list->entries[last];
    src = (unsigned int *)&list->entries[oldCount];
    for (i = (list->sizeA + list->sizeB - 1) >> 1; i >= 0; i--) {
        *dst++ = *src++;
    }
    fn_82DD8470(list);
}
