typedef struct ContentData_82A26438 {
    unsigned int deviceId;
    unsigned int contentType;
} ContentData_82A26438;

extern unsigned int XamContentCreateEx(unsigned int userIndex, const char *rootName, const ContentData_82A26438 *data,
                                       unsigned int flags, unsigned int *disposition, unsigned int *licenseMask,
                                       unsigned int fileCacheSize, unsigned __int64 contentSize, void *overlapped);

unsigned int fn_82A26438(unsigned int userIndex, const char *rootName, const ContentData_82A26438 *data,
                         unsigned int flags, unsigned int *disposition, unsigned int *licenseMask,
                         unsigned int fileCacheSize, unsigned __int64 contentSize, void *overlapped)
{
    if (data == 0 || data->deviceId == 0 || (flags & 0x90) == 0x90)
        return 0x57;
    if (data->contentType == 1 && (flags & 0x80) == 0)
        flags |= 0x10;
    if ((data->contentType & 0xffffff00) != 0 && (flags & 0xf) != 3)
        return 0x57;
    return XamContentCreateEx(userIndex, rootName, data, flags, disposition, licenseMask, fileCacheSize, contentSize, overlapped);
}
