typedef struct {
    int pad;
    void **items;
} Owner;

extern void fn_828182C0(void *item, int key, int flags, void **out);
extern void fn_82817C98(void *found, int value);

unsigned char fn_82800838(Owner *o, int index, int key, int value)
{
    void *found;

    fn_828182C0(o->items[index + 8], key, 0, &found);
    if (found != 0) {
        fn_82817C98(found, value);
        return 1;
    }
    return 0;
}
