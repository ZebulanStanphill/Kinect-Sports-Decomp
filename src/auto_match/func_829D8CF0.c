typedef struct CacheFile_829D8CF0 {
    int pad0;                 /* 0x000 */
    int type;                 /* 0x004 */
    int pad8[2];              /* 0x008 */
    unsigned __int64 handle;  /* 0x010 */
    char pad18[0x248 - 0x18]; /* 0x018 */
} CacheFile_829D8CF0;

extern void fn_829D47B0(unsigned *out, unsigned n);
extern unsigned __int64 fn_829D6C98(void *p);
extern void fn_82A28E60(int a, int b, unsigned c);
extern void *memset(void *dst, int value, unsigned int size);
extern unsigned int XamCacheOpenFile(CacheFile_829D8CF0 *file);
extern unsigned int XamCacheCloseFile(CacheFile_829D8CF0 *file, int flags);
extern unsigned int XamCacheReset(int type);
extern char *lbl_832179FC;

static __inline unsigned Alloc_829D8CF0(unsigned n)
{
    unsigned out;
    fn_829D47B0(&out, n);
    return out;
}

void fn_829D8CF0(void)
{
    CacheFile_829D8CF0 *files;
    CacheFile_829D8CF0 *file;
    void *enumerator;
    unsigned __int64 handle;
    int i;

    files = (CacheFile_829D8CF0 *)Alloc_829D8CF0(0x24800);
    if (files != 0) {
        file = files;
        memset(files, 0, 0x24800);
        enumerator = lbl_832179FC + 0x8f4e0;
        *(int *)((char *)enumerator + 0x20) = 0;
        for (handle = fn_829D6C98(enumerator); handle != 0; handle = fn_829D6C98(enumerator)) {
            file->handle = handle;
            file->type = 0x18;
            if (XamCacheOpenFile(file) != 0) {
                file->handle = 0;
            }
            file++;
        }
        XamCacheReset(0x18);
        file = files;
        for (i = 0x100; i != 0; i--) {
            if (file->handle != 0) {
                XamCacheCloseFile(file, 0);
            }
            file++;
        }
        fn_82A28E60(*(int *)(lbl_832179FC + 0x8f4cc), 0, (unsigned)files);
    }
}
