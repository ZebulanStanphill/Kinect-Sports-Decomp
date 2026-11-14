typedef struct Item_8282EC60 {
    int f0;
    unsigned int a;
    int f8;
    unsigned int b;
} Item_8282EC60;

extern void *memmove(void *, const void *, unsigned int);

static __forceinline int Less(Item_8282EC60 *x, Item_8282EC60 *y)
{
    return x->a + x->b <= y->b;
}

void fn_8282EC60(Item_8282EC60 **first, Item_8282EC60 **last)
{
    Item_8282EC60 **next;
    Item_8282EC60 **next1;
    Item_8282EC60 **first1;
    Item_8282EC60 *val;
    int cnt;
    if (first != last) {
        next = first + 1;
        if (next != last) {
            do {
                next1 = next;
                val = *next;
                if (Less(val, *first)) {
                    cnt = (int)(next1 - first);
                    memmove(next1 + 1 - cnt, first, cnt * 4);
                    *first = val;
                } else {
                    first1 = next1;
                    while (Less(val, *--first1)) {
                        *next1 = *first1;
                        next1 = first1;
                    }
                    *next1 = val;
                }
                next++;
            } while (next != last);
        }
    }
}
