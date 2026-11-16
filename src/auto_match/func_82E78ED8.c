extern void fn_82E579E0(void *self);
extern void *memset(void *dest, int value, unsigned int size);
extern int fn_82E78690(void *self, unsigned int index, void **out);
extern int fn_82EEB7A8(void *self, void *value);
extern void fn_82E569B0(void *self, int release);
extern int fn_82E78228(void *self, unsigned int index, void ***out);
extern void fn_82E77258(void *self, int release);

static __forceinline void *GetValue(void *self, unsigned int index)
{
    void *value;
    return fn_82E78690(self, index, &value) ? value : 0;
}

static __forceinline void ResetList(char *self)
{
    fn_82E569B0(self, 0);
    *(unsigned int *)(self + 0x68) = 0;
}

int fn_82E78ED8(char *self)
{
    unsigned int index;
    fn_82E579E0(self + 0x218);
    self[0x238] = 0;
    memset(self + 0x13c, 0, 0x3c);
    for (index = 0; index < *(unsigned int *)(self + 0x1e0); index++) {
        fn_82EEB7A8(self + 0x1e4, GetValue(self + 0x178, index));
    }
    ResetList(self + 0x178);
    *(unsigned int *)(self + 0x234) = 0;
    for (index = 0; index < *(unsigned int *)(self + 0x354); index++) {
        void **value;
        void *object;
        fn_82E78228(self + 0x244, index, &value);
        object = *value;
        if (object != 0) {
            (*(void (***)(void *))object)[2](object);
        }
    }
    self += 0x244;
    fn_82E77258(self, 0);
    *(unsigned int *)(self + 0x110) = 0;
    return 0;
}
