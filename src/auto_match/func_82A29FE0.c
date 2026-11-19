typedef struct IoStatusBlock_82A29FE0 {
    int status;               /* 0x0 */
    unsigned int information; /* 0x4 */
} IoStatusBlock_82A29FE0;

typedef struct LargeInteger_82A29FE0 {
    unsigned int high; /* 0x0 */
    unsigned int low;  /* 0x4 */
} LargeInteger_82A29FE0;

typedef struct Overlapped_82A29FE0 {
    int internal;              /* 0x0 */
    unsigned int internalHigh; /* 0x4 */
    unsigned int offset;       /* 0x8 */
    unsigned int offsetHigh;   /* 0xc */
    unsigned int event;        /* 0x10 */
} Overlapped_82A29FE0;

extern int NtWriteFile(void *file, unsigned int event, void *apcRoutine, void *apcContext,
                       void *ioStatusBlock, const void *buffer, unsigned int length,
                       LargeInteger_82A29FE0 *byteOffset);
extern int NtWaitForSingleObjectEx(void *handle, int waitMode, int alertable, void *timeout);
extern void fn_82A2B760(int status);

int fn_82A29FE0(void *file, const void *buffer, unsigned int length, unsigned int *written,
                Overlapped_82A29FE0 *overlapped)
{
    IoStatusBlock_82A29FE0 ioStatus;
    LargeInteger_82A29FE0 byteOffset;
    int status;

    if (written != 0) {
        *written = 0;
    }
    if (overlapped != 0) {
        byteOffset.low = overlapped->offset;
        byteOffset.high = overlapped->offsetHigh;
        overlapped->internal = 0x103;
        status = NtWriteFile(file, overlapped->event, 0, (overlapped->event & 1) == 0 ? overlapped : 0,
                             overlapped, buffer, length, &byteOffset);
        if ((status & 0xc0000000) != 0xc0000000 && status != 0x103) {
            if (written != 0) {
                *written = overlapped->internalHigh;
            }
            return 1;
        }
    } else {
        status = NtWriteFile(file, 0, 0, 0, &ioStatus, buffer, length, 0);
        if (status == 0x103) {
            status = NtWaitForSingleObjectEx(file, 1, 0, 0);
            if (status < 0) {
                goto failed;
            }
            status = ioStatus.status;
        }
        if (status >= 0) {
            *written = ioStatus.information;
            return 1;
        }
    failed:
        if ((status & 0xc0000000) == 0x80000000) {
            *written = ioStatus.information;
        }
    }
    fn_82A2B760(status);
    return 0;
}
