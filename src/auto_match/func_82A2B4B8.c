/* GetFileSizeEx: NtQueryInformationFile(FileNetworkOpenInformation) through the I/O
   function table, EndOfFile on success, XapiSetLastNTError (fn_82A2B760) on failure. */
typedef struct IoStatusBlock_82A2B4B8 {
    long status;
    unsigned long information;
} IoStatusBlock_82A2B4B8;

typedef struct NetworkOpenInfo_82A2B4B8 {
    __int64 creationTime;
    __int64 lastAccessTime;
    __int64 lastWriteTime;
    __int64 changeTime;
    __int64 allocationSize;
    __int64 endOfFile;          /* 0x28 */
    unsigned long attributes;
} NetworkOpenInfo_82A2B4B8;

typedef long (*QueryInfo_82A2B4B8)(void *handle, IoStatusBlock_82A2B4B8 *iosb, void *info,
                                   unsigned long length, int infoClass);

typedef struct Api_82A2B4B8 {
    char pad[0x20];
    QueryInfo_82A2B4B8 queryInformation;   /* 0x20 */
} Api_82A2B4B8;

extern Api_82A2B4B8 *lbl_8315D3D0;
extern void fn_82A2B760(long status);

int fn_82A2B4B8(void *handle, __int64 *size)
{
    IoStatusBlock_82A2B4B8 iosb;
    NetworkOpenInfo_82A2B4B8 info;
    long status;

    status = lbl_8315D3D0->queryInformation(handle, &iosb, &info, sizeof(info), 0x22);
    if (status < 0) {
        fn_82A2B760(status);
        return 0;
    }
    *size = info.endOfFile;
    return 1;
}
