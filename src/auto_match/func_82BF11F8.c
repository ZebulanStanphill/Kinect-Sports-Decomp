extern void fn_82BE5240(void *self, int code, const char *format, ...);
extern int fn_82BE5A90(void *request, void **data);
extern void fn_82BE8D50(void *buffer);
extern void *fn_82BE56B0(unsigned int size);
extern void *fn_82BF6D88(void *buffer, void *data, unsigned int size);
extern void fn_82BE8A38(void *self);
extern void *fn_82BE1A10(void);
extern void fn_82BE1FF8(void *self, unsigned int size, unsigned __int64 value);
extern void fn_82BEB838(void *self, void *request);

void fn_82BF11F8(char *self, char *request)
{
    unsigned int size;
    void *data;
    void *buffer;
    unsigned __int64 value;
    if (*(int *)(request + 0x14) == 0x54) {
        size = *(unsigned int *)(request + 0x24);
        if (size == 0) {
            *(int *)(self + 0x10) = 0x18;
            fn_82BE5240(self, 0x25f, "Size: %u", 0);
        } else {
            data = 0;
            if (fn_82BE5A90(request, &data) == 0) {
                fn_82BE5240(self, 0x25a, " Could not take ownership of request data");
                *(int *)(self + 0x10) = 0x18;
            } else {
                if (*(void **)(self + 0x38) != 0) {
                    fn_82BE8D50(*(void **)(self + 0x38));
                }
                buffer = fn_82BE56B0(0x1c);
                if (buffer != 0) {
                    buffer = fn_82BF6D88(buffer, data, size);
                } else {
                    buffer = 0;
                }
                *(void **)(self + 0x38) = buffer;
                if (buffer == 0) {
                    *(int *)(self + 0x10) = 0x18;
                    fn_82BE5240(self, 0x65,
                                "Allocation failed: CMemoryBuffer in CMassiveAsset::HandleResponse()");
                } else {
                    *(int *)(self + 0x10) = 0x17;
                    fn_82BE8A38(self);
                    value = *(unsigned __int64 *)(request + 0x38);
                    fn_82BE1FF8(fn_82BE1A10(), size, value);
                }
            }
        }
    }
    fn_82BEB838(self, request);
}
