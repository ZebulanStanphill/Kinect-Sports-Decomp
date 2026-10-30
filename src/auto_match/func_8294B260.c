typedef struct Range_8294B260 {
    int pad0[8];
    unsigned int lo;
    unsigned int hi;
} Range_8294B260;
typedef struct Item_8294B260 {
    int pad0;
    unsigned int kind;
    char pad8[0x60];
    Range_8294B260 *range;
} Item_8294B260;
typedef struct Kind_8294B260 {
    int pad0;
    unsigned int flags;
} Kind_8294B260;
typedef struct Set_8294B260 {
    int pad0[2];
    unsigned int count;
    int pad1[1];
    Kind_8294B260 **kinds;
    Item_8294B260 **items;
} Set_8294B260;

int fn_8294B260(Set_8294B260 *param_1, unsigned int *param_2)
{
    unsigned int i;
    unsigned int flags;
    Item_8294B260 *first;
    Item_8294B260 *it;
    Range_8294B260 *a;
    Range_8294B260 *b;

    i = *param_2 + 1;
    first = param_1->items[i];
    if (i < param_1->count) {
        do {
            it = param_1->items[i];
            flags = param_1->kinds[it->kind]->flags;
            if (((flags & 0x10) == 0 || (flags & 0x200) != 0) && (flags & 0x20) == 0) {
                break;
            }
            a = first->range;
            b = it->range;
            if (a->hi != b->hi || a->lo != b->lo) {
                break;
            }
            i++;
        } while (i < param_1->count);
    }
    *param_2 = i - 1;
    return 0;
}
