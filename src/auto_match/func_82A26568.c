typedef union {
    struct {
        unsigned long HighPart;
        unsigned long LowPart;
    } u;
    unsigned __int64 QuadPart;
} ULARGE_INTEGER_82A26568;

extern unsigned long fn_82A26438(unsigned long userIndex, const char *rootName, const void *contentData,
                                 unsigned long contentFlags, unsigned long *disposition, unsigned long *licenseMask,
                                 unsigned long fileCacheSize, ULARGE_INTEGER_82A26568 contentSize, void *overlapped);

unsigned long fn_82A26568(unsigned long userIndex, const char *rootName, const void *contentData,
                          unsigned long contentFlags, unsigned long *disposition, unsigned long *licenseMask,
                          void *overlapped)
{
    ULARGE_INTEGER_82A26568 size = {0};
    return fn_82A26438(userIndex, rootName, contentData, contentFlags, disposition, licenseMask, 0, size, overlapped);
}
