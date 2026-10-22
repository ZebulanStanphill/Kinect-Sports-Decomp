typedef struct {
    int a;
    int pad[7];
    int b;
} Src;

typedef struct {
    int h;
    int a;
    int b;
} Item;

extern char lbl_83219D50[];
extern Src *fn_82A40BA8(unsigned char *p);
extern Item *fn_82A3FF60(char *tag, int size, unsigned int flags, int z);
extern unsigned int fn_82A484F8(unsigned char *list, Item *item);
extern void fn_82A4F4E0(void *p);
extern int fn_82A45350(int h, int z);

void fn_82A48820(unsigned char *self)
{
    Src *src;
    Item *item;

    src = fn_82A40BA8(self + 500);
    if (src != 0) {
        item = fn_82A3FF60(lbl_83219D50, 0xc, 0x20970002, 0);
        if (item != 0) {
            if (fn_82A484F8(self + 0x21c, item) == 0) {
                fn_82A4F4E0(item);
            } else {
                item->a = src->a;
                item->b = src->b;
                item->h = fn_82A45350(*(int *)(self + 0x1d8), 0);
            }
        }
        fn_82A4F4E0(src);
    }
}
