typedef struct Item_829F12C8 {
    char data[0xa0];
} Item_829F12C8;

typedef struct Dev_829F12C8 {
    char pad0[0x280];
    int mode;
} Dev_829F12C8;

extern long fn_829EF778(Dev_829F12C8 *self, Item_829F12C8 *item);

long fn_829F12C8(Dev_829F12C8 *self, Item_829F12C8 *items)
{
    long hr;
    unsigned int i;

    if (self == 0) {
        return 0x80070057;
    }
    if (items == 0) {
        return 0x80070057;
    }
    if (self->mode == 0) {
        for (i = 0; i < 2; i++) {
            hr = fn_829EF778(self, &items[i]);
            if (hr < 0) {
                return hr;
            }
        }
        return hr;
    }
    return fn_829EF778(self, &items[self->mode != 1]);
}
