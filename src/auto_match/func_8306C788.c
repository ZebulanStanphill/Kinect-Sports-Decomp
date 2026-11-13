typedef struct FileTime_8306C788 { unsigned long hi; unsigned long lo; } FileTime_8306C788;
typedef union ULargeInt_8306C788 {
    struct { unsigned long HighPart; unsigned long LowPart; } u;
    unsigned __int64 QuadPart;
} ULargeInt_8306C788;
extern void fn_8306C7F8(__int64 *);

int fn_8306C788(const FileTime_8306C788 *local, FileTime_8306C788 *file)
{
    __int64 bias;
    ULargeInt_8306C788 t;
    fn_8306C7F8(&bias);
    t.u.LowPart = local->lo;
    t.u.HighPart = local->hi;
    t.QuadPart -= bias;
    file->lo = t.u.LowPart;
    file->hi = t.u.HighPart;
    return 1;
}
