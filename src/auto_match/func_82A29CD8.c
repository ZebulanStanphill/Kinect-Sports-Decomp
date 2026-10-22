typedef long NTSTATUS;
typedef void *HANDLE;
typedef __int64 LONGLONG;

typedef struct {
    NTSTATUS Status;
    unsigned int Information;
} IO_STATUS_BLOCK;

extern NTSTATUS NtQueryInformationFile(HANDLE h, IO_STATUS_BLOCK *iosb, void *info, unsigned int len, int cls);
extern NTSTATUS NtSetInformationFile(HANDLE h, IO_STATUS_BLOCK *iosb, void *info, unsigned int len, int cls);
extern void fn_82A2B760(NTSTATUS status);

int fn_82A29CD8(HANDLE h)
{
    NTSTATUS status;
    LONGLONG pos;
    IO_STATUS_BLOCK iosb;
    LONGLONG eof;
    LONGLONG alloc;

    status = NtQueryInformationFile(h, &iosb, &pos, 8, 0xe);
    if (status >= 0) {
        eof = pos;
        status = NtSetInformationFile(h, &iosb, &eof, 8, 0x14);
        if (status >= 0) {
            alloc = pos;
            status = NtSetInformationFile(h, &iosb, &alloc, 8, 0x13);
            if (status >= 0) {
                return 1;
            }
        }
    }
    fn_82A2B760(status);
    return 0;
}
