typedef struct ANSI_STRING_82A1F4F8 {
    unsigned short Length;
    unsigned short MaximumLength;
    char *Buffer;
} ANSI_STRING_82A1F4F8;

typedef struct OBJECT_ATTRIBUTES_82A1F4F8 {
    void *RootDirectory;
    ANSI_STRING_82A1F4F8 *ObjectName;
    unsigned long Attributes;
} OBJECT_ATTRIBUTES_82A1F4F8;

typedef struct FILE_NETWORK_OPEN_INFORMATION_82A1F4F8 {
    __int64 CreationTime;
    __int64 LastAccessTime;
    __int64 LastWriteTime;
    __int64 ChangeTime;
    __int64 AllocationSize;
    __int64 EndOfFile;
    unsigned long FileAttributes;
} FILE_NETWORK_OPEN_INFORMATION_82A1F4F8;

extern void RtlInitAnsiString(ANSI_STRING_82A1F4F8 *dst, const char *src);
extern int NtQueryFullAttributesFile(OBJECT_ATTRIBUTES_82A1F4F8 *attrs,
                                     FILE_NETWORK_OPEN_INFORMATION_82A1F4F8 *info);
extern void fn_82A2B760(int status);

unsigned long fn_82A1F4F8(const char *path)
{
    ANSI_STRING_82A1F4F8 name;
    OBJECT_ATTRIBUTES_82A1F4F8 oa;
    FILE_NETWORK_OPEN_INFORMATION_82A1F4F8 info;
    unsigned long result;
    int status;

    RtlInitAnsiString(&name, path);
    oa.RootDirectory = (void *)-3;
    oa.Attributes = 0x40;
    oa.ObjectName = &name;
    status = NtQueryFullAttributesFile(&oa, &info);
    if (status >= 0) {
        result = info.FileAttributes;
    } else {
        fn_82A2B760(status);
        result = (unsigned long)-1;
    }
    return result;
}
