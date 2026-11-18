typedef struct Options_82BFE530 {
    unsigned int flags; /* 0x0 */
    int pad4;
    unsigned int arg8; /* 0x8 */
    int padc;
    unsigned int arg10; /* 0x10 */
    int pad14;
    unsigned int arg18; /* 0x18 */
} Options_82BFE530;

typedef struct Object_82BFE530 {
    char pad[0x40];
    int magic; /* 0x40 */
    char pad44[0x4c - 0x44];
    Options_82BFE530 *options; /* 0x4c */
} Object_82BFE530;

typedef struct Result_82BFE530 {
    unsigned int value;
    unsigned int reserved;
} Result_82BFE530;

extern unsigned int fn_82BFDD90(Object_82BFE530 *self, Result_82BFE530 *result);
extern unsigned int fn_82BFDF48(Object_82BFE530 *self, Result_82BFE530 *result, unsigned int arg8,
                                unsigned int arg18, unsigned int bit5, unsigned int arg10, unsigned int bit7);

#define HRESULT_FROM_WIN32(x)                                                                                \
    ((int)(x) <= 0 ? ((int)(x)) : ((int)(((x) & 0x0000FFFF) | (7 << 16) | 0x80000000)))

int fn_82BFE530(Object_82BFE530 *self, unsigned int *out)
{
    Result_82BFE530 result = {0};
    int hr = 0;
    unsigned int status;
    Options_82BFE530 *options;

    if (self == 0 || self->magic != 0x4c665175) {
        return 0x80070057;
    }
    options = self->options;
    if (options != 0 && (options->flags & 8) != 0) {
        status = fn_82BFDF48(self, &result, options->arg8, options->arg18, (options->flags >> 5) & 1,
                             options->arg10, (options->flags >> 7) & 1);
    } else {
        status = fn_82BFDD90(self, &result);
    }
    if (status != 0) {
        if (status != 0x102) {
            hr = HRESULT_FROM_WIN32(status);
        } else {
            hr = 0x80310002;
        }
    }
    if (hr >= 0 && out != 0) {
        *out = result.value;
    }
    return hr;
}
