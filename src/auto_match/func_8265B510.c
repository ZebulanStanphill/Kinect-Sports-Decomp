typedef struct Context_8265B510 {
    void *arg0;           // 0x0
    void *arg1;           // 0x4
    unsigned int mode;    // 0x8
    unsigned char fieldC; // 0xc
    unsigned char fieldD; // 0xd
    char padE[2];
    void *arg2;                   // 0x10
    void *arg3;                   // 0x14
    unsigned char buffer[0x2000]; // 0x18
    void *param10;                // 0x2018
    void *param11;                // 0x201c
    void *param7;                 // 0x2020
    void *param8;                 // 0x2024
    unsigned char field2028;      // 0x2028
    unsigned char field2029;      // 0x2029
    char pad202A[2];
    int field202C; // 0x202c
    int field2030; // 0x2030
} Context_8265B510;

extern void *memset(void *dst, int value, unsigned int size);
extern int fn_8265ADD8(Context_8265B510 *context, void *arg0, void *arg1, void *arg2, void *arg3,
                       unsigned int mode);

int fn_8265B510(void *arg0, void *arg1, void *arg2, void *arg3, void *unused4, void *unused5, void *param7,
                void *param8, unsigned int flags, void *param10, void *param11)
{
    Context_8265B510 context;
    unsigned int mode;
    int hr;

    hr = 0;
    mode = 0;
    if ((flags & 3) == 1) {
    } else if ((flags & 3) == 2) {
        mode = 8;
    } else if ((flags & 3) != 3) {
        hr = 0x80070057;
    }
    if (flags & 0x8) {
        mode |= 2;
    }
    if (flags & 0x4) {
        mode |= 4;
    }
    if (flags & 0x40) {
        mode |= 0x20;
    }
    if (flags & 0x10) {
        mode |= 0x10;
    }
    if (flags & 0x80) {
        mode |= 0x40;
    }
    if (flags & 0x200) {
        mode |= 0x80;
    }
    if (flags & 0x400) {
        mode |= 0x100;
    }
    if (hr >= 0) {
        memset(context.buffer, 0, sizeof(context.buffer));
        context.param7 = param7;
        context.param8 = param8;
        context.field2029 = 0;
        context.param10 = param10;
        context.param11 = param11;
        hr = fn_8265ADD8(&context, arg0, arg1, arg2, arg3, mode);
    }
    return hr;
}
