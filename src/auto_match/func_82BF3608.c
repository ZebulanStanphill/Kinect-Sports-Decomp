void *memset(void *, int, unsigned int);

typedef struct Request_82BF3608 {
    const char *name;     /* 0x0 */
    unsigned int nameLen; /* 0x4 */
    const char *path;     /* 0x8 */
    unsigned int pathLen; /* 0xc */
    unsigned short size;  /* 0x10 */
    unsigned short flags; /* 0x12 */
} Request_82BF3608;

typedef struct Result_82BF3608 {
    unsigned __int64 size;  /* 0x0 */
    unsigned __int64 unk8;  /* 0x8 */
    unsigned __int64 unk10; /* 0x10 */
    unsigned int unk18;     /* 0x18 */
    unsigned int unk1c;     /* 0x1c */
} Result_82BF3608;

extern const char *lbl_83175598;
extern unsigned int lbl_8322B4F0;
extern unsigned int fn_82F6D460(const char *s, unsigned int max);
extern unsigned int fn_82BF99F0(int *handle, Request_82BF3608 *request, Result_82BF3608 *result);
extern unsigned int fn_82BF9FC0(int handle, const void *data, unsigned int size);
extern void fn_82BFA140(int handle, int close);

unsigned int fn_82BF3608(const char *path, const void *data, unsigned int size)
{
    Request_82BF3608 request = {0};
    Result_82BF3608 result;
    int handle;

    request.name = lbl_83175598;
    if (lbl_83175598 == 0) {
        request.nameLen = 0;
    } else {
        request.nameLen = fn_82F6D460(lbl_83175598, lbl_8322B4F0);
    }
    request.path = path;
    request.size = 0x50;
    if (path == 0) {
        request.pathLen = 0;
    } else {
        request.pathLen = fn_82F6D460(path, 0x104);
    }
    handle = 0;
    memset(&result.unk8, 0, 0x18);
    result.size = size;
    result.unk8 = 0;
    result.unk18 = 0;
    result.unk1c = 0;
    result.unk10 = 0;
    if (fn_82BF99F0(&handle, &request, &result) == 0) {
        if (fn_82BF9FC0(handle, data, size) == 0) {
            fn_82BFA140(handle, 0);
            return size;
        }
        fn_82BFA140(handle, 1);
    }
    return 0;
}
