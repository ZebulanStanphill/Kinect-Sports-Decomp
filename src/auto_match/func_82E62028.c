typedef struct Guid_82E62028 {
    unsigned int data[4];
} Guid_82E62028;

typedef struct Reader_82E62028 {
    int pad[6];
    unsigned int remaining;     /* 0x18 */
    int pad1c;
} Reader_82E62028;

typedef struct FileProps_82E62028 FileProps_82E62028;
typedef struct FilePropsVtbl_82E62028 {
    void *slots[11];
    unsigned __int64 (*GetSize)(FileProps_82E62028 *self);
} FilePropsVtbl_82E62028;

struct FileProps_82E62028 {
    FilePropsVtbl_82E62028 *vt;
    int pad4[2];
    void *source;               /* 0x0c */
    Guid_82E62028 objectId;     /* 0x10 */
    unsigned __int64 objectSize; /* 0x20 */
    Reader_82E62028 reader;     /* 0x28 */
    Guid_82E62028 fileId;       /* 0x48 */
    unsigned __int64 fileSize;  /* 0x58 */
    unsigned char creationDate[8]; /* 0x60 */
    unsigned __int64 dataPackets;  /* 0x68 */
    unsigned __int64 playDuration; /* 0x70 */
    unsigned __int64 sendDuration; /* 0x78 */
    unsigned __int64 preroll;      /* 0x80 */
    unsigned int flags;            /* 0x88 */
    unsigned int minPacketSize;    /* 0x8c */
    unsigned int maxPacketSize;    /* 0x90 */
    unsigned int maxBitrate;       /* 0x94 */
};

extern int fn_82E57620(Guid_82E62028 *out, Reader_82E62028 *r);
extern int fn_82E576A8(unsigned __int64 *out, Reader_82E62028 *r);
extern int fn_82E59EC8(unsigned int *out, Reader_82E62028 *r);
extern int fn_82EE5F60(Reader_82E62028 *r, void *out, unsigned int size);
extern int fn_82EE5E28(Reader_82E62028 *r, unsigned int size);

static __forceinline int ReadBytes_82E62028(Reader_82E62028 *r, void *out, unsigned int size)
{
    int hr = fn_82EE5F60(r, out, size);
    if (hr < 0)
        return hr;
    return fn_82EE5E28(r, size);
}

int fn_82E62028(FileProps_82E62028 *self, unsigned int *consumed)
{
    int hr;
    unsigned int avail;
    Reader_82E62028 *r;

    if (self->source == 0)
        return 0xc00d36b6;
    if (consumed == 0)
        return 0x80070057;
    *consumed = 0;
    avail = self->reader.remaining;
    if (avail < 0x68) {
        *consumed = 0x68;
        return 0xc00d36b1;
    }
    r = &self->reader;
    fn_82E57620(&self->objectId, r);
    fn_82E576A8(&self->objectSize, r);
    hr = fn_82E57620(&self->fileId, r);
    if (hr < 0)
        return hr;
    hr = fn_82E576A8(&self->fileSize, r);
    if (hr < 0)
        return hr;
    hr = ReadBytes_82E62028(r, self->creationDate, 8);
    if (hr < 0)
        return hr;
    hr = fn_82E576A8(&self->dataPackets, r);
    if (hr < 0)
        return hr;
    hr = fn_82E576A8(&self->playDuration, r);
    if (hr < 0)
        return hr;
    hr = fn_82E576A8(&self->sendDuration, r);
    if (hr < 0)
        return hr;
    hr = fn_82E576A8(&self->preroll, r);
    if (hr < 0)
        return hr;
    hr = fn_82E59EC8(&self->flags, r);
    if (hr < 0)
        return hr;
    hr = fn_82E59EC8(&self->minPacketSize, r);
    if (hr < 0)
        return hr;
    hr = fn_82E59EC8(&self->maxPacketSize, r);
    if (hr < 0)
        return hr;
    hr = fn_82E59EC8(&self->maxBitrate, r);
    if (hr < 0)
        return hr;
    *consumed = avail - self->reader.remaining;
    if (self->vt->GetSize(self) != *consumed)
        return 0xc00d3a9a;
    return 0;
}
