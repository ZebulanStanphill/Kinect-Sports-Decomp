typedef struct StringData_826E1288 {
    int pad0;
    long refCount; /* 0x04 */
    char text[1];  /* 0x08 */
} StringData_826E1288;

typedef struct String_826E1288 {
    unsigned int tagged; /* data pointer, low two bits are flags */
} String_826E1288;

typedef struct Stream_826E1288 {
    char pad0[0x15];
    unsigned char unusedBits; /* 0x15 */
    char pad16[0x16];
    int pos;  /* 0x2c */
    int size; /* 0x30 */
    char pad34[0x8];
    unsigned char *data; /* 0x3c */
} Stream_826E1288;

typedef struct Loader_826E1288 {
    char pad0[0x28];
    Stream_826E1288 local; /* 0x28 */
    char pad68[0x314 - 0x68];
    Stream_826E1288 *external; /* 0x314 */
} Loader_826E1288;

typedef struct TagInfo_826E1288 {
    int tagType; /* 0x00 */
} TagInfo_826E1288;

typedef struct Result_826E1288 {
    int first;
    unsigned int second;
} Result_826E1288;

extern long _InterlockedExchangeAdd(long volatile *target, long value);
extern void fn_826E7800(Stream_826E1288 *stream, int count);
extern void fn_8268B330(String_826E1288 *string);
extern void fn_826E8660(Stream_826E1288 *stream, String_826E1288 *string);
extern void fn_826C8C70(Stream_826E1288 *stream, const char *format, ...);
extern Result_826E1288 *fn_826E0920(Result_826E1288 *out, Loader_826E1288 *loader, int *id,
                                    const char *fileName, const char *exportName, unsigned short format,
                                    unsigned short width, unsigned short height);
extern void fn_82687270(unsigned int handle);
extern void fn_8267BE38(void *data);

extern const char lbl_82196582[];

static __forceinline unsigned short ReadU16(Stream_826E1288 *stream)
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

static __forceinline const char *Text(String_826E1288 *string)
{
    return ((StringData_826E1288 *)(string->tagged & ~3u))->text;
}

static __forceinline void Release(String_826E1288 *string)
{
    StringData_826E1288 *data = (StringData_826E1288 *)(string->tagged & ~3u);
    if (_InterlockedExchangeAdd(&data->refCount, -1) - 1 == 0) {
        fn_8267BE38(data);
    }
}

void fn_826E1288(Loader_826E1288 *loader, TagInfo_826E1288 *tagInfo)
{
    Stream_826E1288 *stream = loader->external;
    int characterId;
    unsigned short format;
    unsigned short size;
    String_826E1288 fileName;
    int id;
    Result_826E1288 result;

    if (stream == 0) {
        stream = &loader->local;
    }
    characterId = ReadU16(stream) | 0x50000;
    format = ReadU16(stream);
    size = ReadU16(stream);
    fn_8268B330(&fileName);
    fn_826E8660(stream, &fileName);
    fn_826C8C70(stream,
                "  DefineExternalGradientImage: tagInfo.TagType = %d, id = 0x%X, fmt = %d, name = '%s',"
                " size = %d\n",
                tagInfo->tagType, characterId, format, Text(&fileName), size);
    id = characterId;
    fn_826E0920(&result, loader, &id, Text(&fileName), lbl_82196582, format, size, size);
    if (result.first == 0 && result.second != 0) {
        fn_82687270(result.second);
    }
    Release(&fileName);
}
