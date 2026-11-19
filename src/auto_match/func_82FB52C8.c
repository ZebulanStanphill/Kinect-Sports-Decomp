typedef struct Stream_82FB52C8 Stream_82FB52C8;

typedef struct StreamVtbl_82FB52C8 {
    void (*Destroy)(Stream_82FB52C8 *self, int flags); /* 0x00 */
} StreamVtbl_82FB52C8;

typedef struct Source_82FB52C8 {
    char pad0[0x34];
    unsigned char flags; /* 0x34 */
} Source_82FB52C8;

struct Stream_82FB52C8 {
    StreamVtbl_82FB52C8 *vt; /* 0x00 */
    char pad4[0x1c - 0x4];
    Source_82FB52C8 *source; /* 0x1c */
    char pad20[0x30 - 0x20];
    unsigned int state; /* 0x30 */
    char pad34[0x44 - 0x34];
    unsigned char active; /* 0x44 */
    char pad45[0x48 - 0x45];
    int pending;  /* 0x48 */
    int refCount; /* 0x4c */
};

typedef struct Node_82FB52C8 {
    struct Node_82FB52C8 *next; /* 0x00 */
    Stream_82FB52C8 *stream;    /* 0x04 */
} Node_82FB52C8;

typedef struct List_82FB52C8 {
    Node_82FB52C8 *head; /* 0x00 */
    Node_82FB52C8 *tail; /* 0x04 */
} List_82FB52C8;

typedef struct Current_82FB52C8 {
    int pad0;
    Stream_82FB52C8 *stream; /* 0x04 */
} Current_82FB52C8;

typedef struct Mixer_82FB52C8 {
    char pad0[0x54];
    List_82FB52C8 streams; /* 0x54 */
    char pad5c[0x74 - 0x5c];
    Current_82FB52C8 *current; /* 0x74 */
} Mixer_82FB52C8;

typedef struct Iterator_82FB52C8 {
    Node_82FB52C8 *node; /* 0x00 */
    Node_82FB52C8 *prev; /* 0x04 */
} Iterator_82FB52C8;

extern void *lbl_831BC768;

extern void fn_82FB5068(Stream_82FB52C8 *stream, int time);
extern void fn_82FF6060(List_82FB52C8 *list, Node_82FB52C8 *node, Node_82FB52C8 *prev);
extern void fn_82FA9208(Source_82FB52C8 *source);
extern void fn_82FA5190(void *heap, void *p);

static __forceinline unsigned char IsBusy(Stream_82FB52C8 *stream)
{
    if (stream->pending > 0 || stream->active != 0 ||
        ((int)stream->source != 0 && (stream->source->flags & 0x80) != 0) ||
        (stream->state & 0x80000000) != 0) {
        return 1;
    }
    return 0;
}

void fn_82FB52C8(Mixer_82FB52C8 *self, int time)
{
    Iterator_82FB52C8 it;
    Iterator_82FB52C8 next;
    Stream_82FB52C8 *stream;
    Source_82FB52C8 *source;
    void *heap;

    it.node = self->streams.head;
    it.prev = 0;
    while (it.node != 0) {
        stream = it.node->stream;
        if (IsBusy(stream)) {
            fn_82FB5068(stream, time);
            it.prev = it.node;
            it.node = it.node->next;
        } else if (stream != self->current->stream) {
            next.node = it.node->next;
            next.prev = it.prev;
            fn_82FF6060(&self->streams, it.node, it.prev);
            it = next;
            if (--stream->refCount == 0) {
                source = stream->source;
                stream->source = 0;
                if (source != 0) {
                    fn_82FA9208(source);
                }
                heap = lbl_831BC768;
                stream->vt->Destroy(stream, 0);
                fn_82FA5190(heap, stream);
            }
        } else {
            it.prev = it.node;
            it.node = it.node->next;
        }
    }
}
