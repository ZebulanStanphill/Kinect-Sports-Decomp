/* byte-packed header: position at +7, source data at +0xb, size at +0x1b */
typedef struct Header_82E735F0 {
    unsigned char bytes[0x125];
} Header_82E735F0;

typedef struct Source_82E735F0 Source_82E735F0;

typedef struct SourceVtbl_82E735F0 {
    void *slots[0xb4 / 4];
    int (*GetData)(Source_82E735F0 *self, unsigned char *out); /* 0xb4 */
} SourceVtbl_82E735F0;

struct Source_82E735F0 {
    SourceVtbl_82E735F0 *vt;
};

typedef struct Sink_82E735F0 Sink_82E735F0;

typedef struct SinkVtbl_82E735F0 {
    void *slots[4];
    int (*Prepare)(Sink_82E735F0 *self, unsigned short id, unsigned char kind, Source_82E735F0 *source,
                   unsigned int *count); /* 0x10 */
    void *slot14;
    /* 0x18 */
    int (*Write)(Sink_82E735F0 *self, Header_82E735F0 *header, Source_82E735F0 *source, int flags);
} SinkVtbl_82E735F0;

struct Sink_82E735F0 {
    SinkVtbl_82E735F0 *vt;
};

typedef struct Packet_82E735F0 {
    char pad0[0x20];
    unsigned short id;  /* 0x20 */
    unsigned char kind; /* 0x22 */
    char pad23[0x2c - 0x23];
    unsigned int remaining; /* 0x2c */
    char pad30[4];
    Source_82E735F0 *source; /* 0x34 */
    unsigned int position;   /* 0x38 */
} Packet_82E735F0;

extern void *memset(void *dst, int value, unsigned int size);
extern int fn_82E734C0(Packet_82E735F0 *self, Header_82E735F0 *header);

int fn_82E735F0(Packet_82E735F0 *self, Sink_82E735F0 *sink)
{
    unsigned int count;
    Header_82E735F0 header;
    int hr;

    if (sink == 0) {
        return 0x80004003;
    }
    count = 0;
    hr = sink->vt->Prepare(sink, self->id, self->kind, self->source, &count);
    if (hr < 0) {
        return hr;
    }
    memset(&header, 0, sizeof(header));
    hr = fn_82E734C0(self, &header);
    if (hr < 0) {
        return hr;
    }
    *(unsigned int *)(header.bytes + 7) = self->position;
    hr = self->source->vt->GetData(self->source, header.bytes + 0xb);
    if (hr < 0) {
        return hr;
    }
    *(unsigned int *)(header.bytes + 0x1b) = count;
    if (self->remaining < count) {
        *(unsigned int *)(header.bytes + 0x1b) = self->remaining;
    }
    hr = sink->vt->Write(sink, &header, self->source, 1);
    if (hr < 0) {
        return hr;
    }
    self->remaining -= *(unsigned int *)(header.bytes + 0x1b);
    self->position += *(unsigned int *)(header.bytes + 0x1b);
    return hr;
}
