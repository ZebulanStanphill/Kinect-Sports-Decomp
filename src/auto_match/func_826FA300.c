typedef struct Stream_826FA300 {
    char pad0[0x15];
    unsigned char unusedBits; /* 0x15 */
    char pad16[0x16];
    int pos;     /* 0x2c */
    int size;    /* 0x30 */
    int filePos; /* 0x34 */
    char pad38[0x4];
    unsigned char *data; /* 0x3c */
} Stream_826FA300;

typedef struct PlaceTail_826FA300 {
    float ratio;              /* 0x3c */
    int depth;                /* 0x40 */
    unsigned int characterId; /* 0x44 */
    short clipDepth;          /* 0x48 */
    char unk4A;               /* 0x4a */
    char unk4B;               /* 0x4b */
} PlaceTail_826FA300;

typedef struct PlaceObject_826FA300 {
    void *data;              /* 0x00 */
    char cxform[0x20];       /* 0x04 */
    char matrix[0x18];       /* 0x24 */
    PlaceTail_826FA300 tail; /* 0x3c */
} PlaceObject_826FA300;

extern int fn_826E7408(Stream_826FA300 *stream);
extern unsigned char fn_826E7438(Stream_826FA300 *stream);
extern void fn_826C6248(PlaceObject_826FA300 *place);
extern void fn_826E7800(Stream_826FA300 *stream, int count);
extern void fn_826E8AF0(Stream_826FA300 *stream, void *matrix);
extern void fn_826C8C70(Stream_826FA300 *stream, const char *format, ...);
extern void fn_826E9330(Stream_826FA300 *stream, void *matrix);
extern void fn_826E8C68(Stream_826FA300 *stream, void *cxform);
extern void fn_826E92E8(Stream_826FA300 *stream, void *cxform);
extern void fn_826E7B08(Stream_826FA300 *stream, int pos);
extern void fn_8267C498(void *data);

static __forceinline unsigned short ReadU16(Stream_826FA300 *stream)
{
    unsigned char *bytes;
    unsigned short value;

    stream->unusedBits = 0;
    if (stream->size - stream->pos < 2) {
        fn_826E7800(stream, 2);
    }
    bytes = stream->data + stream->pos;
    value = (bytes[1] << 8) | bytes[0];
    stream->pos += 2;
    return value;
}

static __forceinline int Tell(Stream_826FA300 *stream)
{
    return stream->pos - stream->size + stream->filePos;
}

int fn_826FA300(Stream_826FA300 *stream)
{
    int start = Tell(stream);
    int remaining = fn_826E7408(stream) - start;

    if (fn_826E7438(stream)) {
        PlaceObject_826FA300 place;

        fn_826C6248(&place);
        place.tail.characterId = ReadU16(stream);
        place.tail.depth = ReadU16(stream);
        fn_826E8AF0(stream, place.matrix);
        fn_826C8C70(stream, "  CharId = %d\n  depth = %d\n  mat = \n", (unsigned short)place.tail.characterId,
                    place.tail.depth);
        fn_826E9330(stream, place.matrix);
        if (Tell(stream) < fn_826E7408(stream)) {
            fn_826E8C68(stream, place.cxform);
            fn_826C8C70(stream, "  cxform:\n");
            fn_826E92E8(stream, place.cxform);
        }
        fn_826E7B08(stream, start);
        if (place.data != 0) {
            fn_8267C498(place.data);
        }
    }
    return remaining;
}
