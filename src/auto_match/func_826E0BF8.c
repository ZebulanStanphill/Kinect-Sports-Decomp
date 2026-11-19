typedef struct StringData_826E0BF8 {
    int pad0;
    long refCount; /* 0x04 */
    char text[1];  /* 0x08 */
} StringData_826E0BF8;

typedef struct String_826E0BF8 {
    unsigned int tagged; /* data pointer, low two bits are flags */
} String_826E0BF8;

typedef struct Stream_826E0BF8 {
    char pad0[0x40];
} Stream_826E0BF8;

typedef struct Loader_826E0BF8 {
    char pad0[0x28];
    Stream_826E0BF8 local; /* 0x28 */
    char pad68[0x314 - 0x68];
    Stream_826E0BF8 *external; /* 0x314 */
} Loader_826E0BF8;

typedef struct TagInfo_826E0BF8 {
    int tagType; /* 0x00 */
} TagInfo_826E0BF8;

typedef struct Result_826E0BF8 {
    int first;
    unsigned int second;
} Result_826E0BF8;

extern long _InterlockedExchangeAdd(long volatile *target, long value);
extern unsigned fn_826DF558(Loader_826E0BF8 *loader);
extern unsigned short fn_826A6A38(Loader_826E0BF8 *loader);
extern void fn_8268B330(String_826E0BF8 *string);
extern void fn_826E8660(Stream_826E0BF8 *stream, String_826E0BF8 *string);
extern void fn_826C8C70(Stream_826E0BF8 *stream, const char *format, ...);
extern Result_826E0BF8 *fn_826E0920(Result_826E0BF8 *out, Loader_826E0BF8 *loader, unsigned *id,
                                    const char *fileName, const char *exportName, unsigned short format,
                                    unsigned short width, unsigned short height);
extern void fn_82687270(unsigned int handle);
extern void fn_8267BE38(void *data);

static __forceinline const char *Text(String_826E0BF8 *string)
{
    return ((StringData_826E0BF8 *)(string->tagged & ~3u))->text;
}

static __forceinline void Release(String_826E0BF8 *string)
{
    StringData_826E0BF8 *data = (StringData_826E0BF8 *)(string->tagged & ~3u);
    if (_InterlockedExchangeAdd(&data->refCount, -1) - 1 == 0) {
        fn_8267BE38(data);
    }
}

void fn_826E0BF8(Loader_826E0BF8 *loader, TagInfo_826E0BF8 *tagInfo)
{
    Stream_826E0BF8 *stream = loader->external;
    unsigned characterId;
    unsigned short format;
    unsigned short width;
    unsigned short height;
    String_826E0BF8 exportName;
    String_826E0BF8 fileName;
    unsigned id;
    Result_826E0BF8 result;

    if (stream == 0) {
        stream = &loader->local;
    }
    characterId = fn_826DF558(loader);
    format = fn_826A6A38(loader);
    width = fn_826A6A38(loader);
    height = fn_826A6A38(loader);
    fn_8268B330(&exportName);
    fn_8268B330(&fileName);
    fn_826E8660(stream, &exportName);
    fn_826E8660(stream, &fileName);
    fn_826C8C70(stream,
                "  DefineExternalImage2: tagInfo.TagType = %d, id = 0x%X, fmt = %d, name = '%s',"
                " exp = '%s', w = %d, h = %d\n",
                tagInfo->tagType, characterId, format, Text(&fileName), Text(&exportName), width, height);
    id = characterId & 0x9FFFF;
    fn_826E0920(&result, loader, &id, Text(&fileName), Text(&exportName), format, width, height);
    if (result.first == 0 && result.second != 0) {
        fn_82687270(result.second);
    }
    Release(&fileName);
    Release(&exportName);
}
