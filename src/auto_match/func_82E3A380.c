typedef struct Guid_82E3A380 {
    unsigned long data1;
    unsigned short data2;
    unsigned short data3;
    unsigned char data4[8];
} Guid_82E3A380;

typedef struct Stream_82E3A380 Stream_82E3A380;

typedef struct StreamVtbl_82E3A380 {
    void *slots[7];
    int (*Seek)(Stream_82E3A380 *self, unsigned __int64 position); /* 0x1C */
    void *slot20;
    int (*Read)(Stream_82E3A380 *self, void *buffer, unsigned int size, unsigned int *read); /* 0x24 */
} StreamVtbl_82E3A380;

struct Stream_82E3A380 {
    StreamVtbl_82E3A380 *vtbl;
};

unsigned __int64 _byteswap_uint64(unsigned __int64 value);

extern Guid_82E3A380 lbl_8202E618;
extern void fn_82E39C50(Guid_82E3A380 *guid, const unsigned char **pp);

/* Reads an object header (little-endian GUID and 64-bit size) at position. */
int fn_82E3A380(void *self, Stream_82E3A380 *stream, unsigned __int64 position, Guid_82E3A380 *outId,
                unsigned __int64 *outSize)
{
    Guid_82E3A380 id = lbl_8202E618;
    unsigned int bytesRead = 0;
    unsigned __int64 size;
    const unsigned char *p;
    int hr;

    hr = stream->vtbl->Seek(stream, position);
    if (hr < 0) {
        goto done;
    }
    if (stream->vtbl->Read(stream, &id, 16, &bytesRead) < 0) {
        goto fail;
    }
    if (bytesRead < 16) {
    fail:
        hr = 0xC00D3A9A;
        goto done;
    }
    size = 0;
    hr = stream->vtbl->Read(stream, &size, 8, &bytesRead);
    if (hr < 0) {
        hr = 0xC00D3A9A;
        goto done;
    }
    if (bytesRead < 8) {
        hr = 0xC00D3A9A;
        goto done;
    }
    p = (const unsigned char *)&id;
    fn_82E39C50(&id, &p);
    size = _byteswap_uint64(size);
    if (size < 0x18) {
        hr = 0xC00D3A9A;
        goto done;
    }
    *outId = id;
    *outSize = size;

done:
    return hr;
}
