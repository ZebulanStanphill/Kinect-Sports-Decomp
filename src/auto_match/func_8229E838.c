typedef unsigned int size_t;
extern void *memmove(void *dst, const void *src, size_t n);
extern void fn_8229E090(void *a, int b, int c);

typedef struct Item {
    char pad[0x414];
    int f414;
} Item;

typedef struct List {
    Item **begin;
    Item **end;
    int f8;
    int fc;
    int busy;
} List;

void fn_8229E838(List *l)
{
    Item **it;
    Item **next;
    Item *item;

    it = l->begin;
    l->busy = 1;
    if (it != l->end) {
        next = it + 1;
        do {
            item = *it;
            if (item != 0 && item->f414 != 0) {
                fn_8229E090(item, 1, 1);
                memmove(it, next, (l->end - next) * sizeof(Item *));
                l->end--;
            } else {
                it++;
                next++;
            }
        } while (it != l->end);
    }
    l->busy = 0;
}
