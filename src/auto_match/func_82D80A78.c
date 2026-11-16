typedef struct Callbacks_82D80A78 {
    void **entries;
    int count;
    void (*first)(void);
    void (*second)(void);
} Callbacks_82D80A78;

extern void *lbl_8323E230[];
extern void fn_82DAA4A0(void);
extern void fn_82DAA858(void);
extern void fn_82DA7910(void);
extern void fn_82CE8268(void *self, int index, Callbacks_82D80A78 callbacks);
extern void fn_82CE8920(void *self, int index, int size, int enabled);
extern void fn_830893D0(void *self);
extern void fn_83088FB0(void *self);

void fn_82D80A78(unsigned char *self)
{
    Callbacks_82D80A78 callbacks;
    unsigned char index;
    callbacks.first = fn_82DAA4A0;
    callbacks.second = fn_82DAA858;
    callbacks.entries = lbl_8323E230;
    callbacks.count = 17;
    index = 0;
    do {
        lbl_8323E230[index] = fn_82DA7910;
        ++index;
    } while (index < 17);
    if (*(int *)(self + 0x60) < 2) {
        *(int *)(self + 0x60) = 2;
    }
    fn_82CE8920(self, 0, 12, 1);
    fn_82CE8268(self, 0, callbacks);
    fn_82CE8268(self, 1, callbacks);
    fn_830893D0(self);
    fn_83088FB0(self);
}
