typedef struct {
    char pad[0x28];
    int value;
} Item_828185B8;

typedef void (*Cb_828185B8)(Item_828185B8 *it, int a, int value, int b);

extern void fn_828223C8(Item_828185B8 *it, Item_828185B8 **next);
extern Item_828185B8 lbl_8320A5DC;

void fn_828185B8(Cb_828185B8 cb)
{
    Item_828185B8 *it;
    Item_828185B8 *cur;

    if (cb != 0) {
        cur = &lbl_8320A5DC;
        for (;;) {
            fn_828223C8(cur, &it);
            if (it == 0) {
                break;
            }
            cb(it, 0, it->value, 0);
            cur = it;
        }
    }
}
