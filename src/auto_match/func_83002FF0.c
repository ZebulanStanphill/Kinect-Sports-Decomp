typedef struct Stream_83002FF0 Stream_83002FF0;

typedef struct StreamVtbl_83002FF0 {
    void (*destroy)(Stream_83002FF0 *self, int flags);
} StreamVtbl_83002FF0;

struct Stream_83002FF0 {
    StreamVtbl_83002FF0 *vt;
};

typedef struct Pair_83002FF0 {
    unsigned int id;
    Stream_83002FF0 *stream;
} Pair_83002FF0;

typedef struct Map_83002FF0 {
    Pair_83002FF0 *first;
    Pair_83002FF0 *last;
    Pair_83002FF0 *end;
} Map_83002FF0;

typedef struct Settings_83002FF0 {
    char pad0[0x3c];
    unsigned char mode; /* 0x3c */
} Settings_83002FF0;

typedef struct Source_83002FF0 {
    char pad0[0x24];
    Stream_83002FF0 *mainStream; /* 0x24 */
    Settings_83002FF0 *settings; /* 0x28 */
    char pad2c[0x28];
    Map_83002FF0 *streams; /* 0x54 */
} Source_83002FF0;

extern void *lbl_831BC768;
extern void *lbl_832642EC;
extern void *fn_82FA5060(void *heap, unsigned int size);
extern void fn_82FA5190(void *heap, void *memory);
extern void fn_8301B058(void *manager, Source_83002FF0 *source);
extern Stream_83002FF0 *fn_83034858(void *memory, Source_83002FF0 *source, unsigned char mode);
extern Stream_83002FF0 *fn_83034438(void *memory, Source_83002FF0 *source, unsigned int id,
                                    unsigned char mode);
extern unsigned int fn_83013B98(Map_83002FF0 *map, unsigned int id, Stream_83002FF0 *stream);
extern int fn_83034DB0(unsigned int id, Source_83002FF0 *source);
extern void fn_82FAF408(Map_83002FF0 *map, unsigned int id);

static __forceinline Stream_83002FF0 **FindStream(Map_83002FF0 *map, unsigned int id)
{
    Pair_83002FF0 *it;

    unsigned char found;

    for (it = map->first; it != map->last && it->id != id; it++) {
    }
    found = it != map->last;
    return found ? &it->stream : 0;
}

static __forceinline void DeleteStream(Stream_83002FF0 *stream)
{
    void *heap = lbl_831BC768;

    stream->vt->destroy(stream, 0);
    fn_82FA5190(heap, stream);
}

Stream_83002FF0 *fn_83002FF0(Source_83002FF0 *source, unsigned int id)
{
    unsigned char mode;
    void *memory;
    Map_83002FF0 *map;
    Stream_83002FF0 **found;
    Stream_83002FF0 *result;

    if (id != 0) {
        if (source->streams == 0) {
            map = (Map_83002FF0 *)fn_82FA5060(lbl_831BC768, 0xc);
            source->streams = map;
            if (map != 0) {
                map->first = 0;
                map->last = 0;
                map->end = 0;
            }
            if (source->streams == 0)
                return 0;
        }
        found = FindStream(source->streams, id);
        if (found != 0) {
            result = *found;
        } else {
            mode = source->settings != 0 ? source->settings->mode : 0;
            memory = fn_82FA5060(lbl_831BC768, 0x40);
            if (memory == 0) {
                result = 0;
            } else {
                result = fn_83034438(memory, source, id, mode);
                if (result != 0) {
                    if (fn_83013B98(source->streams, id, result) == 0) {
                        DeleteStream(result);
                        result = 0;
                    } else if (fn_83034DB0(id, source) != 1) {
                        fn_82FAF408(source->streams, id);
                        DeleteStream(result);
                        result = 0;
                    }
                }
            }
        }
    } else {
        fn_8301B058(lbl_832642EC, source);
        if (source->mainStream == 0) {
            mode = source->settings != 0 ? source->settings->mode : 0;
            memory = fn_82FA5060(lbl_831BC768, 0x40);
            source->mainStream = memory != 0 ? fn_83034858(memory, source, mode) : 0;
        }
        result = source->mainStream;
    }
    return result;
}
