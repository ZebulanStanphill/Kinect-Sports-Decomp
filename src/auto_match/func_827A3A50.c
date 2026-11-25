typedef struct Entry_827A3A50 {
    int pad0;
    unsigned short info; /* 0x4 */
} Entry_827A3A50;

typedef struct Document_827A3A50 {
    char pad0[0x8];
    void *stream; /* 0x08 */
    char pad0C[0x18 - 0xC];
    void *indexed;            /* 0x18 */
    unsigned int selectStart; /* 0x1C */
    unsigned int selectEnd;   /* 0x20 */
} Document_827A3A50;

typedef struct Counter_827A3A50 {
    char pad0[0x10];
    unsigned short count; /* 0x10 */
} Counter_827A3A50;

typedef struct Track_827A3A50 {
    char pad0[0x8];
    Document_827A3A50 *document; /* 0x08 */
    char pad0C[0x18 - 0xC];
    unsigned int position; /* 0x18 */
    char pad1C[0x24 - 0x1C];
    Counter_827A3A50 counter; /* 0x24 */
    char pad36[0x2];
    double time; /* 0x38 */
    char pad40[0x48 - 0x40];
    float speed; /* 0x48 */
    char pad4C[0x68 - 0x4C];

    union {
        unsigned short flags;
        unsigned char flagBytes[2];
    } state; /* 0x68 */
} Track_827A3A50;

extern unsigned int fn_827912D8(void *stream);
extern Entry_827A3A50 *fn_827A3578(Track_827A3A50 *track, unsigned int position, unsigned int *start);
extern void fn_827A36C0(Track_827A3A50 *track, unsigned int position, int flags, int looping);
extern void fn_8279A718(Document_827A3A50 *document, unsigned int position);
extern void fn_8279C658(Document_827A3A50 *document, unsigned int start, unsigned int end);

static __forceinline void AddCount(Counter_827A3A50 *counter, unsigned short delta)
{
    counter->count += delta;
}

static __forceinline void SetPaused(Track_827A3A50 *track, unsigned char paused)
{
    if ((track->state.flags & 1) == 0 && paused) {
        track->state.flags |= 8;
    } else {
        track->state.flags &= 0xfff7;
    }
    track->time = 0.0;
}

static __forceinline void Select(Document_827A3A50 *document, unsigned int start, unsigned int end)
{
    if (document->selectStart != start || document->selectEnd != end) {
        fn_8279C658(document, start, end);
    }
}

void fn_827A3A50(Track_827A3A50 *track, unsigned int position, unsigned char select)
{
    if ((int)position != -1) {
        unsigned int length = fn_827912D8(track->document->stream);

        if (position > length) {
            position = length;
        }
        SetPaused(track, 1);
        if (track->document->indexed != 0) {
            unsigned int start;
            Entry_827A3A50 *entry = fn_827A3578(track, position, &start);

            if (entry != 0) {
                unsigned int size = entry->info >> 12;

                if (size != 1 && start != position) {
                    if (position >= track->position) {
                        position = size + start;
                    } else {
                        position = start;
                    }
                }
            }
        }
    }
    track->position = position;
    AddCount(&track->counter, 0xFFFF);
    track->speed = -1.0f;
    if ((int)track->position != -1) {
        fn_827A36C0(track, track->position, 1, track->state.flagBytes[0] & 1);
        fn_8279A718(track->document, track->position);
    }
    if ((unsigned char)(track->state.flags >> 1) & 1) {
        if (select) {
            if (((unsigned char)(track->state.flags >> 6) & 1) == 0 &&
                ((unsigned char)(track->state.flags >> 5) & 1) == 0) {
                Select(track->document, track->position, track->position);
            } else {
                if (track->document->selectEnd != track->position) {
                    fn_8279C658(track->document, track->document->selectStart, track->position);
                }
            }
        } else {
            fn_8279C658(track->document, track->position, track->position);
        }
    }
}
