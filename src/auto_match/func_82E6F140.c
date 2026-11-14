typedef struct Header_82E6F140 {
    unsigned short streamId;
} Header_82E6F140;

typedef struct Writer_82E6F140 Writer_82E6F140;
typedef struct Writer_82E6F140Vtbl {
    void *slot0;
    void *slot4;
    int (*GetPacketSize)(Writer_82E6F140 *self, unsigned int *size);             /* 0x08 */
    void *slotC;
    void *slot10;
    int (*Flush)(Writer_82E6F140 *self);                                         /* 0x14 */
    void *slot18;
    void *slot1C;
    Writer_82E6F140 *(*GetNext)(Writer_82E6F140 *self);                          /* 0x20 */
    void *slot24;
    int (*GetLength)(Writer_82E6F140 *self, Header_82E6F140 *header, unsigned __int64 *length); /* 0x28 */
    int (*WritePacket)(Writer_82E6F140 *self, unsigned __int64 index);           /* 0x2c */
    int (*Write)(Writer_82E6F140 *self, void *a, void *b, Header_82E6F140 *header, int *written); /* 0x30 */
} Writer_82E6F140Vtbl;

struct Writer_82E6F140 {
    Writer_82E6F140Vtbl *vt;
    int pad4;
    unsigned short streamId;        /* 0x08 */
    char padA[0x38 - 0xa];
    int autoFlush;                  /* 0x38 */
    char pad3C[0x48 - 0x3c];
    unsigned __int64 packetIndex;   /* 0x48 */
    unsigned __int64 count;         /* 0x50 */
};

int fn_82E6F140(Writer_82E6F140 *self, void *a, void *b, Header_82E6F140 *header)
{
    int hr;
    unsigned __int64 length;
    unsigned int packetSize;
    int written;
    Writer_82E6F140 *next;

    if (header == 0)
        return 0x80004003;
    if (self->streamId != header->streamId)
        return 0xc00d36b3;

    length = 0;
    hr = self->vt->GetLength(self, header, &length);
    if (hr >= 0) {
        packetSize = 0;
        hr = self->vt->GetPacketSize(self, &packetSize);
        if (hr >= 0) {
            if (length > 0) {
                unsigned __int64 last = (length - 1) / packetSize;
                if (last + 1 > self->packetIndex && self->count > 0) {
                    unsigned __int64 n = last - self->packetIndex + 1;
                    unsigned __int64 i;
                    for (i = 0; i < n; i++) {
                        hr = self->vt->WritePacket(self, self->packetIndex);
                        if (hr < 0)
                            return hr;
                        if (self->autoFlush != 0) {
                            hr = self->vt->Flush(self);
                            if (hr < 0)
                                return hr;
                        }
                    }
                    if (hr < 0)
                        return hr;
                }
            }
            written = 0;
            hr = self->vt->Write(self, a, b, header, &written);
            if (hr >= 0) {
                if (written != 0)
                    self->count++;
                next = self->vt->GetNext(self);
                if (next != 0)
                    hr = fn_82E6F140(next, a, b, header);
            }
        }
    }
    return hr;
}
