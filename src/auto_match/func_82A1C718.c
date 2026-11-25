typedef struct Attributes_82A1C718 {
    void *root;
    const void *name;
    unsigned int flags;
} Attributes_82A1C718;

typedef struct IoStatus_82A1C718 {
    int status;
    unsigned int information;
} IoStatus_82A1C718;

typedef struct State_82A1C718 {
    char pad00[0x1c];
    char data[0x24];
} State_82A1C718;

extern char lbl_832192F8[];
extern const char lbl_8208874C[];
extern void *memset(void *dst, int value, unsigned int size);
extern int NtCreateFile(void **handle, unsigned int access, Attributes_82A1C718 *attrs,
                        IoStatus_82A1C718 *status, __int64 *size, unsigned int fileFlags, unsigned int share,
                        unsigned int disposition, unsigned int options);
extern int NtWriteFile(void *file, void *event, void *apcRoutine, void *apcContext, IoStatus_82A1C718 *status,
                       const void *buffer, unsigned int size, const __int64 *offset);
extern int NtClose(void *handle);

void fn_82A1C718(State_82A1C718 *self)
{
    char buffer[0x400] = {0};
    void *handle;
    Attributes_82A1C718 attrs;
    IoStatus_82A1C718 status;
    __int64 offset;

    memset(self->data, 0, sizeof(self->data));
    memset(lbl_832192F8 + 0x14, 0, 0x284);
    attrs.root = 0;
    attrs.flags = 0x40;
    attrs.name = lbl_8208874C;
    if (NtCreateFile(&handle, 0xc0100000, &attrs, &status, 0, 4, 1, 1, 0x22) >= 0) {
        offset = 0x800;
        NtWriteFile(handle, 0, 0, 0, &status, buffer, sizeof(buffer), &offset);
        NtClose(handle);
    }
}
