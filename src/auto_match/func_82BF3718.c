void *memset(void *, int, unsigned int);

typedef struct Request_82BF3718 {
    const char *name;     /* 0x0 */
    unsigned int nameLen; /* 0x4 */
    const char *path;     /* 0x8 */
    unsigned int pathLen; /* 0xc */
    unsigned short size;  /* 0x10 */
    unsigned short flags; /* 0x12 */
} Request_82BF3718;

typedef struct Result_82BF3718 {
    unsigned __int64 size; /* 0x0 */
    unsigned int unk8[5];  /* 0x8 */
} Result_82BF3718;

typedef void *(*AllocFunc_82BF3718)(unsigned int size);
typedef void (*FreeFunc_82BF3718)(void *memory);

extern const char *lbl_83175598;
extern unsigned int lbl_8322B4F0;
extern AllocFunc_82BF3718 lbl_831751D0;
extern FreeFunc_82BF3718 lbl_831751CC;
extern unsigned int fn_82F6D460(const char *s, unsigned int max);
extern unsigned int fn_82BF9D18(int *handle, Request_82BF3718 *request, Result_82BF3718 *result);
extern unsigned int fn_82BF9EC0(int handle, void *buffer, unsigned int size);
extern void fn_82BFA140(int handle, int close);

unsigned int fn_82BF3718(const char *path, void **out)
{
    Request_82BF3718 request = {0};
    Result_82BF3718 result;
    int handle;
    unsigned int size;
    unsigned int read;
    void *buffer;

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
    result.size = 0;
    memset(result.unk8, 0, sizeof(result.unk8));
    handle = 0;
    if (fn_82BF9D18(&handle, &request, &result) != 0) {
        return 0;
    }
    size = (unsigned int)result.size;
    if (size == 0) {
        fn_82BFA140(handle, 0);
        return 0;
    }
    read = 0;
    buffer = lbl_831751D0(size);
    *out = buffer;
    if (buffer == 0) {
        fn_82BFA140(handle, 0);
        return read;
    }
    if (fn_82BF9EC0(handle, buffer, size) == 0) {
        read = size;
    } else {
        lbl_831751CC(*out);
        *out = 0;
    }
    fn_82BFA140(handle, 0);
    return read;
}
