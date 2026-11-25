typedef struct Ansi_82A29DE8 {
    unsigned short length;
    unsigned short maximumLength;
    const char *buffer;
} Ansi_82A29DE8;

typedef struct Attributes_82A29DE8 {
    void *root;
    Ansi_82A29DE8 *name;
    unsigned int attributes;
} Attributes_82A29DE8;

typedef struct IoStatus_82A29DE8 {
    int status;
    unsigned int information;
} IoStatus_82A29DE8;

typedef struct Table_82A29DE8 Table_82A29DE8;

struct Table_82A29DE8 {
    Table_82A29DE8 *next;
    void (*f[2])(void);
    int (*createFile)(void **handle, unsigned int access, Attributes_82A29DE8 *attributes,
                      IoStatus_82A29DE8 *ioStatus, void *allocationSize, unsigned int fileAttributes,
                      unsigned int share, unsigned int disposition, unsigned int options);
};

extern Table_82A29DE8 *lbl_8315D3D0;
extern void RtlInitAnsiString(Ansi_82A29DE8 *, const char *);
extern void fn_82A2B760(int status);
extern void fn_82A2A370(unsigned int error);

void *fn_82A29DE8(const char *name, unsigned int access, unsigned int share, void *security,
                  unsigned int creation, unsigned int flags, void *templateFile)
{
    Ansi_82A29DE8 ansi;
    Attributes_82A29DE8 attributes;
    IoStatus_82A29DE8 ioStatus;
    void *handle;
    unsigned int disposition;
    unsigned int options;
    int trailingSlash;
    int status;

    switch (creation) {
    case 1:
        disposition = 2;
        break;
    case 2:
        disposition = 5;
        break;
    case 3:
        disposition = 1;
        break;
    case 4:
        disposition = 3;
        break;
    case 5:
        disposition = 4;
        if (access & 0x40000000) {
            break;
        }
    default:
        fn_82A2B760(0xc000000d);
        return (void *)-1;
    }
    RtlInitAnsiString(&ansi, name);
    if (ansi.length > 1 && name[ansi.length - 1] == '\\') {
        trailingSlash = 1;
    } else {
        trailingSlash = 0;
    }
    attributes.root = (void *)-3;
    attributes.attributes = 0x40;
    attributes.name = &ansi;
    options = ((flags & 0x80000000) ? 2 : 0) | ((flags & 0x20000000) ? 8 : 0) |
              ((flags & 0x10000000) ? 0x800 : 0) | ((flags & 0x08000000) ? 4 : 0) |
              ((flags & 0x02000000) ? 0x4000 : 0) | ((flags & 0x40000000) ? 0 : 0x20);
    if (flags & 0x04000000) {
        options |= 0x1000;
        access |= 0x10000;
    }
    if (!(flags & 0x02000000)) {
        options |= 0x40;
    }
    status = lbl_8315D3D0->createFile(&handle, access | 0x100080, &attributes, &ioStatus, 0, flags & 0x7fa7,
                                      share, disposition, options);
    if (status < 0) {
        fn_82A2B760(status);
        if (status == (int)0xc0000035) {
            fn_82A2A370(0x50);
        } else if (status == (int)0xc00000ba) {
            if (trailingSlash) {
                fn_82A2A370(3);
            } else {
                fn_82A2A370(5);
            }
        }
        return (void *)-1;
    }
    if ((creation == 2 && ioStatus.information == 3) || (creation == 4 && ioStatus.information == 1)) {
        fn_82A2A370(0xb7);
    } else {
        fn_82A2A370(0);
    }
    return handle;
}
