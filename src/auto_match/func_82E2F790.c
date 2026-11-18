typedef struct Stream_82E2F790 Stream_82E2F790;

typedef struct StreamVtbl_82E2F790 {
    void *slot0;
    void *slot1;
    unsigned long (*Release)(Stream_82E2F790 *self); /* 0x08 */
    void *slots[31];
    unsigned short (*GetId)(Stream_82E2F790 *self); /* 0x88 */
} StreamVtbl_82E2F790;

struct Stream_82E2F790 {
    StreamVtbl_82E2F790 *vt;
};

/* Block list of stream pointers (fn_82E2E4C0 removes an entry). */
typedef struct List_82E2F790 {
    char blocks[0x68];
    unsigned int count; /* 0x68 */
} List_82E2F790;

typedef struct Source_82E2F790 {
    char pad0[0x54];
    char lock[0x40];       /* 0x54 */
    List_82E2F790 streams; /* 0x94 */
} Source_82E2F790;

extern void fn_82E50CB8(void *lock);
extern void fn_82E50F10(void *lock);
extern int fn_82E2F3F8(List_82E2F790 *list, unsigned int index, Stream_82E2F790 **out);
extern int fn_82E2E4C0(List_82E2F790 *list, unsigned int index);

/* Removes count entries starting at index; false when the range is out of bounds or a removal fails. */
static __forceinline int RemoveAt(List_82E2F790 *list, unsigned int index, unsigned int count)
{
    int hr;
    unsigned int i;

    if (index + count > list->count) {
        return 0;
    }
    for (i = 0; i < count; i++) {
        hr = fn_82E2E4C0(list, index);
        if (hr < 0) {
            break;
        }
        list->count--;
    }
    return hr >= 0;
}

/* Releases and removes the stream with the given identifier. */
long fn_82E2F790(Source_82E2F790 *self, unsigned short id)
{
    Stream_82E2F790 *stream = 0;
    long hr = 0;
    unsigned int i;

    fn_82E50CB8(self->lock);
    for (i = 0; i < self->streams.count; i++) {
        if (!fn_82E2F3F8(&self->streams, i, &stream) || stream == 0) {
            hr = 0x80070057;
            break;
        }
        if (stream->vt->GetId(stream) == id) {
            break;
        }
    }
    if (stream != 0) {
        if (stream->vt->GetId(stream) != id) {
            hr = 0xc00d36b3;
        } else {
            stream->vt->Release(stream);
            if (!RemoveAt(&self->streams, i, 1)) {
                hr = 0x8000ffff;
            } else {
                hr = 0;
            }
        }
    }
    fn_82E50F10(self->lock);
    return hr;
}
