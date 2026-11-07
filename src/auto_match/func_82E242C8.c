typedef struct Buffer_82E242C8 Buffer_82E242C8;
typedef struct BufferVt_82E242C8 {
    int (*QueryInterface)(Buffer_82E242C8 *self, const void *iid, void **out);
    unsigned int (*AddRef)(Buffer_82E242C8 *self);
    unsigned int (*Release)(Buffer_82E242C8 *self);
    int (*Lock)(Buffer_82E242C8 *self, unsigned char **data, unsigned int *maxLength, unsigned int *length);
    int (*Unlock)(Buffer_82E242C8 *self);
} BufferVt_82E242C8;
struct Buffer_82E242C8 {
    BufferVt_82E242C8 *vt;
};

typedef struct Sample_82E242C8 Sample_82E242C8;
typedef struct SampleVt_82E242C8 {
    void *slots[39];
    int (*GetBufferCount)(Sample_82E242C8 *self, unsigned int *count);
    int (*GetBufferByIndex)(Sample_82E242C8 *self, unsigned int index, Buffer_82E242C8 **buffer);
} SampleVt_82E242C8;
struct Sample_82E242C8 {
    SampleVt_82E242C8 *vt;
};

typedef struct Stream_82E242C8 Stream_82E242C8;
typedef struct StreamVt_82E242C8 {
    void *slots[12];
    int (*Write)(Stream_82E242C8 *self, const unsigned char *data, unsigned int length, unsigned int *written);
} StreamVt_82E242C8;
struct Stream_82E242C8 {
    StreamVt_82E242C8 *vt;
};

typedef struct Sink_82E242C8 {
    char pad0[0x104];
    Stream_82E242C8 *stream;
} Sink_82E242C8;

int fn_82E242C8(Sink_82E242C8 *self, Sample_82E242C8 *sample)
{
    int hr;
    unsigned int count = 0;
    Buffer_82E242C8 *buffer = 0;
    unsigned char *data = 0;
    unsigned int length = 0;
    unsigned int written = 0;
    unsigned int i;

    hr = sample->vt->GetBufferCount(sample, &count);
    if (hr < 0) {
        goto done;
    }
    for (i = 0; i < count; i++) {
        if (buffer != 0) {
            buffer->vt->Release(buffer);
            buffer = 0;
        }
        hr = sample->vt->GetBufferByIndex(sample, i, &buffer);
        if (hr < 0) {
            goto done;
        }
        hr = buffer->vt->Lock(buffer, &data, 0, &length);
        if (hr < 0) {
            goto done;
        }
        hr = self->stream->vt->Write(self->stream, data, length, &written);
        if (hr < 0) {
            goto done;
        }
        hr = buffer->vt->Unlock(buffer);
        if (hr < 0) {
            goto done;
        }
        data = 0;
    }
done:
    if (data != 0 && buffer != 0) {
        buffer->vt->Unlock(buffer);
    }
    if (buffer != 0) {
        buffer->vt->Release(buffer);
    }
    return hr;
}
