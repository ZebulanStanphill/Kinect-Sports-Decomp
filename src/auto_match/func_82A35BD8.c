typedef struct { unsigned short len, max; char *p; } Ansi_82A35BD8;
typedef struct { unsigned root; Ansi_82A35BD8 *name; unsigned attributes; } Attributes_82A35BD8;
typedef struct { unsigned int high, low; } FileTime_82A35BD8;

typedef struct NetworkOpenInfo_82A35BD8 {
    FileTime_82A35BD8 creationTime;
    FileTime_82A35BD8 lastAccessTime;
    FileTime_82A35BD8 lastWriteTime;
    FileTime_82A35BD8 changeTime;
    FileTime_82A35BD8 allocationSize;
    unsigned int endOfFileHigh;
    unsigned int endOfFileLow;
    unsigned int fileAttributes;
} NetworkOpenInfo_82A35BD8;

typedef struct AttributeData_82A35BD8 {
    unsigned int fileAttributes;
    FileTime_82A35BD8 creationTime;
    FileTime_82A35BD8 lastAccessTime;
    FileTime_82A35BD8 lastWriteTime;
    unsigned int fileSizeHigh;
    unsigned int fileSizeLow;
} AttributeData_82A35BD8;

typedef struct Table_82A35BD8 Table_82A35BD8;
struct Table_82A35BD8 {
    Table_82A35BD8 *next;
    void (*f[10])(void);
    int (*queryFullAttributesFile)(Attributes_82A35BD8 *attrs, NetworkOpenInfo_82A35BD8 *info);
};

extern Table_82A35BD8 *lbl_8315D3D0;
extern void RtlInitAnsiString(Ansi_82A35BD8 *, const char *);
extern void fn_82A2B760(int status);

int fn_82A35BD8(const char *name, int level, AttributeData_82A35BD8 *out)
{
    Ansi_82A35BD8 ansi;
    Attributes_82A35BD8 attrs;
    NetworkOpenInfo_82A35BD8 info;
    int status;

    RtlInitAnsiString(&ansi, name);
    attrs.root = -3;
    attrs.attributes = 0x40;
    attrs.name = &ansi;
    status = lbl_8315D3D0->queryFullAttributesFile(&attrs, &info);
    if (status >= 0) {
        out->fileAttributes = info.fileAttributes;
        out->creationTime = info.creationTime;
        out->lastAccessTime = info.lastAccessTime;
        out->lastWriteTime = info.lastWriteTime;
        out->fileSizeHigh = info.endOfFileHigh;
        out->fileSizeLow = info.endOfFileLow;
        return 1;
    }
    fn_82A2B760(status);
    return 0;
}
