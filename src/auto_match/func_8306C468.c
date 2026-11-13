typedef struct { unsigned short len, max; char *p; } Ansi_8306C468;
typedef struct { void *root; Ansi_8306C468 *name; unsigned attributes; } Attributes_8306C468;
typedef struct { int status; unsigned info; } IoStatus_8306C468;
extern void RtlInitAnsiString(Ansi_8306C468 *, const char *);
extern int NtCreateFile(void **handle, unsigned access, Attributes_8306C468 *attrs, IoStatus_8306C468 *iosb,
                        void *allocationSize, unsigned fileAttributes, unsigned shareAccess,
                        unsigned disposition, unsigned options);
extern int NtClose(void *);
extern void fn_82A2B760(int);

int fn_8306C468(const char *path)
{
    void *handle;
    Ansi_8306C468 name;
    IoStatus_8306C468 iosb;
    Attributes_8306C468 attrs;
    int status;

    RtlInitAnsiString(&name, path);
    attrs.root = (void *)-3;
    attrs.attributes = 0x40;
    attrs.name = &name;
    status = NtCreateFile(&handle, 0x100001, &attrs, &iosb, 0, 0x80, 3, 2, 0x4021);
    if (status >= 0) {
        NtClose(handle);
        return 1;
    }
    fn_82A2B760(status);
    return 0;
}
