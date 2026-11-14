typedef struct IoStatus_82BF9038 {
    long status;
    unsigned int information;
} IoStatus_82BF9038;

typedef struct Backing_82BF9038 {
    int pad[2];
    __int64 base;
    void *handle;
} Backing_82BF9038;

extern Backing_82BF9038 lbl_8322FD08;

extern long NtReadFile(void *file, void *event, void *apc, void *apcContext, IoStatus_82BF9038 *iosb,
                       void *buffer, unsigned int length, __int64 *offset);
extern long NtWriteFile(void *file, void *event, void *apc, void *apcContext, IoStatus_82BF9038 *iosb,
                        void *buffer, unsigned int length, __int64 *offset);

int fn_82BF9038(void *buffer, unsigned int length, unsigned int offset, int read)
{
    __int64 position;
    IoStatus_82BF9038 iosb;
    long status;

    position = offset + lbl_8322FD08.base;
    if (read != 0) {
        status = NtReadFile(lbl_8322FD08.handle, 0, 0, 0, &iosb, buffer, length, &position);
    } else {
        status = NtWriteFile(lbl_8322FD08.handle, 0, 0, 0, &iosb, buffer, length, &position);
    }
    if (status >= 0 && length != iosb.information) {
        status = 0xc0000185;
    }
    return status >= 0;
}
