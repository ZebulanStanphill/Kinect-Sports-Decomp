extern int fn_827D50B8(void *self);
extern unsigned int fn_827D9D40(void *self);
extern int fn_827D9D98(void *self);
extern void *fn_827D5070(void *self);
extern void *fn_82522D98(unsigned int size);
extern void fn_82522ED8(void *memory);
extern void *memcpy(void *destination, const void *source, unsigned int size);
extern int fn_826287A0(void *data, void *header, int mode, void *out);
extern void fn_827DA660(void *self, void *data, int index);
extern void fn_8260D110(void *self);
extern void RtlLeaveCriticalSection(void *section);

int fn_8260C610(char *self, int mode)
{
    int result = fn_827D50B8(*(void **)(self + 0x58));
    if (result == 0) {
        if (fn_827D50B8(*(void **)(self + 0x50)) != 0) {
            goto unlock;
        }
        *(void **)(self + 0x34) = fn_82522D98(fn_827D9D40(self + 0x60));
        {
            void *buffer = *(void **)(self + 0x50);
            unsigned int size = fn_827D9D40(self + 0x60);
            memcpy(*(void **)(self + 0x34), fn_827D5070(buffer), size);
        }
        fn_827D9D40(self + 0x60);
        {
            int error = fn_826287A0(*(void **)(self + 0x34), self + 0xc8, mode, self + 0x140);
            if (error != 0) {
                result = error;
            }
        }
        {
            void *buffer = *(void **)(self + 0x50);
            int index = fn_827D9D98(self + 0x60);
            fn_827DA660(*(void **)(self + 0x40), fn_827D5070(buffer), index);
        }
        fn_82522ED8(*(void **)(self + 0x34));
        *(void **)(self + 0x34) = 0;
        fn_8260D110(self);
    }
    if (result != 0x3e5 && result != 0x3e4) {
    unlock:
        RtlLeaveCriticalSection(self + 0x1a0);
    }
    return result;
}
