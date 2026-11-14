typedef struct Node_83030988 {
    struct Node_83030988 *next;
    char pad4[0x1c];
    void *item;
} Node_83030988;

typedef struct Obj_83030988 {
    char pad0[0xc];
    int id;
    char pad10[0xf4];
    Node_83030988 *head;
    char pad108[0x10];
    unsigned int count;
} Obj_83030988;

extern void *lbl_831BC768;
extern void *lbl_832642EC;
extern void *fn_82FA5060(void *heap, unsigned int size);
extern void fn_82FA5190(void *heap, void *p);
extern void fn_8301AF50(void *mgr, int id, int flags);
extern void fn_83030318(Obj_83030988 *self, int arg, void *item);

int fn_83030988(Obj_83030988 *self, int arg, void *item)
{
    int result = 1;
    unsigned int count;
    void **items;
    void **p;
    Node_83030988 *n;
    unsigned int i;

    if (item == 0) {
        count = self->count;
        if (count != 0) {
            items = fn_82FA5060(lbl_831BC768, count * 4);
            if (items != 0) {
                p = items;
                for (n = self->head; n != 0; n = n->next) {
                    *p++ = n->item;
                }
                for (i = 0; i < count; i++) {
                    fn_83030318(self, arg, items[i]);
                }
                fn_82FA5190(lbl_831BC768, items);
            } else {
                result = 2;
            }
        } else {
            fn_8301AF50(lbl_832642EC, self->id, 0);
        }
    } else {
        fn_83030318(self, arg, item);
    }
    return result;
}
