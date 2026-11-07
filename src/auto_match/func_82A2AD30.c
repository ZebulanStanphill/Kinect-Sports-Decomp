typedef struct AnsiString_82A2AD30 {
    unsigned short Length;
    unsigned short MaximumLength;
    char *Buffer;
} AnsiString_82A2AD30;

typedef struct IoStatus_82A2AD30 {
    int Status;
    unsigned int Information;
} IoStatus_82A2AD30;

typedef struct ObjAttr_82A2AD30 {
    void *RootDirectory;
    AnsiString_82A2AD30 *ObjectName;
    unsigned int Attributes;
} ObjAttr_82A2AD30;

typedef struct FsSizeInfo_82A2AD30 {
    __int64 TotalAllocationUnits;
    __int64 AvailableAllocationUnits;
    unsigned int SectorsPerAllocationUnit;
    unsigned int BytesPerSector;
} FsSizeInfo_82A2AD30;

extern void RtlInitAnsiString(AnsiString_82A2AD30 *dst, const char *src);
extern int NtOpenFile(void **handle, unsigned int access, ObjAttr_82A2AD30 *oa,
                      IoStatus_82A2AD30 *iosb, unsigned int share, unsigned int options);
extern int NtQueryVolumeInformationFile(void *handle, IoStatus_82A2AD30 *iosb,
                                        void *info, unsigned int length, unsigned int infoClass);
extern int NtClose(void *handle);
extern void fn_82A2B760(int status);
extern unsigned int fn_82A1F470(void);
extern void fn_82A2A370(unsigned int err);

int fn_82A2AD30(const char *path, unsigned __int64 *freeAvail,
                unsigned __int64 *totalBytes, unsigned __int64 *totalFree)
{
    void *handle;
    AnsiString_82A2AD30 name;
    IoStatus_82A2AD30 iosb;
    ObjAttr_82A2AD30 oa;
    FsSizeInfo_82A2AD30 info;
    int status;
    unsigned __int64 bytesPerUnit;
    unsigned __int64 avail;
    unsigned __int64 total;

    RtlInitAnsiString(&name, path);
    oa.RootDirectory = (void *)-3;
    oa.Attributes = 0x40;
    oa.ObjectName = &name;
    status = NtOpenFile(&handle, 0x100001, &oa, &iosb, 3, 0x800021);
    if (status < 0) {
        fn_82A2B760(status);
        if (fn_82A1F470() == 2) {
            fn_82A2A370(3);
        }
        return 0;
    }
    status = NtQueryVolumeInformationFile(handle, &iosb, &info, 0x18, 3);
    NtClose(handle);
    if (status < 0) {
        fn_82A2B760(status);
        return 0;
    }
    bytesPerUnit = (unsigned int)(info.BytesPerSector * info.SectorsPerAllocationUnit);
    avail = info.AvailableAllocationUnits * bytesPerUnit;
    total = info.TotalAllocationUnits * bytesPerUnit;
    if (freeAvail != 0) {
        *freeAvail = avail;
    }
    if (totalBytes != 0) {
        *totalBytes = total;
    }
    if (totalFree != 0) {
        *totalFree = avail;
    }
    return 1;
}
