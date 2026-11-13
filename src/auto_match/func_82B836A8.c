typedef struct {
    int unk0;
    unsigned int pad0 : 16;
    unsigned int state : 2;
    unsigned int pad1 : 9;
    unsigned int type : 5;
} Item_82B836A8;

extern int lbl_8316E230[];
extern void fn_82B83528(void *a, void *b, void *c, int d, int *table, int count,
                        Item_82B836A8 *item, void *out, unsigned char *handled);

void fn_82B836A8(void *a, void *b, void *c, int d, Item_82B836A8 *item, void *out)
{
    unsigned char handled;

    fn_82B83528(a, b, c, d, lbl_8316E230, 0x14, item, out, &handled);
    if (item->type == 10 && handled == 0) {
        item->state = 1;
    }
}
