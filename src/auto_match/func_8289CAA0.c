typedef struct Item_8289CAA0 {
    char pad0[0x26];
    unsigned char enabled; /* 0x26 */
} Item_8289CAA0;

typedef struct Self_8289CAA0 {
    char pad0[0x18];
    void *kind; /* 0x18 */
} Self_8289CAA0;

extern int fn_82897B20(void *kind);
extern void fn_8289AAC0(Self_8289CAA0 *self, unsigned char enabled, Item_8289CAA0 *item);
extern void fn_8289C538(Self_8289CAA0 *self, unsigned char enabled, Item_8289CAA0 *item);
extern void fn_82899B38(Self_8289CAA0 *self, unsigned char disabled, Item_8289CAA0 *item);
extern void fn_8289C640(Self_8289CAA0 *self, unsigned char disabled, Item_8289CAA0 *item);
extern void fn_82899D60(Self_8289CAA0 *self, unsigned char enabled, Item_8289CAA0 *item);
extern void fn_8289C7B0(Self_8289CAA0 *self, unsigned char enabled, Item_8289CAA0 *item);

void fn_8289CAA0(Self_8289CAA0 *self, Item_8289CAA0 *item, unsigned char immediate)
{
    switch (fn_82897B20(self->kind)) {
    case 1:
        if (immediate) {
            fn_8289AAC0(self, item->enabled, item);
        } else {
            fn_8289C538(self, item->enabled, item);
        }
        break;
    case 2:
        if (immediate) {
            fn_82899B38(self, item->enabled == 0, item);
        } else {
            fn_8289C640(self, item->enabled == 0, item);
        }
        break;
    case 3:
        if (immediate) {
            fn_82899D60(self, item->enabled, item);
        } else {
            fn_8289C7B0(self, item->enabled, item);
        }
        break;
    }
}
