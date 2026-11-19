void *memset(void *, int, unsigned int);

typedef struct Request_82BF3860 {
    const char *name;     /* 0x0 */
    unsigned int nameLen; /* 0x4 */
    const char *path;     /* 0x8 */
    unsigned int pathLen; /* 0xc */
    unsigned short size;  /* 0x10 */
    unsigned short flags; /* 0x12 */
} Request_82BF3860;

typedef struct Result_82BF3860 {
    unsigned __int64 size; /* 0x0 */
    unsigned int unk8[5];  /* 0x8 */
} Result_82BF3860;

extern const char *lbl_83175598;
extern unsigned int lbl_8322B4F0;
extern unsigned int fn_82F6D460(const char *s, unsigned int max);
extern unsigned int fn_82BF9D18(int *handle, Request_82BF3860 *request, Result_82BF3860 *result);
extern void fn_82BFA140(int handle, int close);

int fn_82BF3860(const char *path)
{
    Request_82BF3860 request = {0};
    Result_82BF3860 result;
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
    result.size = 0;
    memset(result.unk8, 0, sizeof(result.unk8));
    handle = 0;
    if (fn_82BF9D18(&handle, &request, &result) == 0) {
        fn_82BFA140(handle, 1);
        return 1;
    }
    return 0;
}
