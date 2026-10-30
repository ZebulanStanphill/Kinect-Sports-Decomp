extern void fn_82E4FE40(void *);

typedef struct Arr_82E77398 {
    char *items;
    unsigned short count;
} Arr_82E77398;
static void xfree(void *p) { if (p != 0) fn_82E4FE40(p); }
void fn_82E77398(Arr_82E77398 *a)
{
    unsigned short i;
    if (a->items != 0 && a->count != 0) {
        i = 0;
        do {
            char *e = a->items + i * 0x1a;
            fn_82E4FE40(*(void **)(e + 0x12));
            *(void **)(e + 0x12) = 0;
            i = i + 1;
        } while (i < a->count);
    }
    xfree(a->items);
    a->items = 0;
}
