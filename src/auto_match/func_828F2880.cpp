typedef struct Header_828F2880 {
    char padding[0x30];
    unsigned int flags; /* 0x30 */
    char tail[0xc];
} Header_828F2880;

typedef struct Texture_828F2880 {
    char padding[0x18];
    Header_828F2880 *header; /* 0x18 */
} Texture_828F2880;

typedef struct Layout_828F2880 {
    int field0;      /* 0x00 */
    int field4;      /* 0x04 */
    int field8;      /* 0x08 */
    int fieldC;      /* 0x0c */
    char tail[0x30]; /* 0x10 */
} Layout_828F2880;

typedef struct Desc_828F2880 {
    int field0; /* 0x00 */
    int field4; /* 0x04 */
    int field8; /* 0x08 */
    int fieldC; /* 0x0c */
    char pad10[0x18];
    char data28[0x30]; /* 0x28 */
} Desc_828F2880;

struct Lock_828F2880;
extern "C" void fn_82923B38(Lock_828F2880 *lock);
extern "C" void fn_829242C0(Lock_828F2880 *lock);

struct Lock_828F2880 {
    int words[4];

    __forceinline Lock_828F2880()
    {
        fn_82923B38(this);
    }

    __forceinline ~Lock_828F2880()
    {
        fn_829242C0(this);
    }
};

extern "C" int fn_829242C8(Lock_828F2880 *lock, Desc_828F2880 *desc, Texture_828F2880 *texture, int arg3,
                           int arg4, int arg5, unsigned int flags);
extern "C" void fn_82A94798(Header_828F2880 *header, const void *data, Layout_828F2880 *layout);
extern "C" int fn_828F1B70(void *device, int arg1, int arg2, int desc0, int desc4, int desc8, int descC,
                           int arg3, void *descData, unsigned int tiled, int layout4, int layout8,
                           int layoutC, int arg5, int arg6);

extern "C" int fn_828F2880(void *device, int arg1, int arg2, Texture_828F2880 *texture, int arg3, int arg4,
                           int arg5, int arg6)
{
    Lock_828F2880 lock;
    Desc_828F2880 desc;
    Layout_828F2880 layout;
    unsigned int flags;
    int hr;

    if (device == 0) {
        return 0x8876086C;
    }
    if (texture == 0) {
        return 0x8876086C;
    }
    flags = 1;
    if (device == texture) {
        flags = 0x10001;
    }
    hr = fn_829242C8(&lock, &desc, texture, arg3, arg4, 0, flags);
    if (hr < 0) {
        return hr;
    }
    fn_82A94798(texture->header, 0, &layout);
    hr = fn_828F1B70(device, arg1, arg2, desc.field0, desc.field4, desc.field8, desc.fieldC, arg3,
                     desc.data28, (texture->header->flags >> 11) & 1, layout.field4, layout.field8,
                     layout.fieldC, arg5, arg6);
    if (hr < 0) {
        return hr;
    }
    return 0;
}
