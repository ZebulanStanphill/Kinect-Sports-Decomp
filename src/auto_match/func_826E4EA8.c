typedef struct StringData_826E4EA8 {
    int pad0;
    long refCount; /* 0x04 */
    char text[1];  /* 0x08 */
} StringData_826E4EA8;

typedef struct String_826E4EA8 {
    unsigned int tagged; /* data pointer, low two bits are flags */
} String_826E4EA8;

typedef struct Stream_826E4EA8 {
    char pad0[0x15];
    unsigned char unusedBits; /* 0x15 */
    char pad16[0x16];
    int pos;  /* 0x2c */
    int size; /* 0x30 */
    char pad34[0x8];
    unsigned char *data; /* 0x3c */
} Stream_826E4EA8;

extern long _InterlockedExchangeAdd(long volatile *target, long value);
extern void fn_826E7800(Stream_826E4EA8 *stream, int count);
extern void fn_8268B330(String_826E4EA8 *string);
extern void fn_826E8660(Stream_826E4EA8 *stream, String_826E4EA8 *string);
extern void fn_826C8C70(Stream_826E4EA8 *stream, const char *format, ...);
extern void fn_826E3F28(void *info, unsigned short version, unsigned int imageFormat, const char *swfName,
                        const char *prefix, unsigned int flags);
extern void fn_8267BE38(void *data);

static __forceinline unsigned short ReadU16(Stream_826E4EA8 *stream)
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

static __forceinline unsigned int ReadU32(Stream_826E4EA8 *stream)
{
    unsigned char *bytes;
    unsigned int value;

    stream->unusedBits = 0;
    if (stream->size - stream->pos < 4) {
        fn_826E7800(stream, 4);
    }
    bytes = stream->data + stream->pos;
    value = bytes[3] << 8 | bytes[2];
    value = value << 8 | bytes[1];
    value = value << 8 | bytes[0];
    stream->pos += 4;
    return value;
}

static __forceinline const char *Text(String_826E4EA8 *string)
{
    return ((StringData_826E4EA8 *)(string->tagged & ~3u))->text;
}

static __forceinline void Release(String_826E4EA8 *string)
{
    StringData_826E4EA8 *data = (StringData_826E4EA8 *)(string->tagged & ~3u);
    if (_InterlockedExchangeAdd(&data->refCount, -1) - 1 == 0) {
        fn_8267BE38(data);
    }
}

void fn_826E4EA8(void *info, Stream_826E4EA8 *stream, int tagType)
{
    unsigned int flags = 0;
    unsigned short version;
    unsigned short imageFormat;
    String_826E4EA8 prefix;
    String_826E4EA8 swfName;

    version = ReadU16(stream);
    if (version >= 0x10a) {
        flags = ReadU32(stream);
    }
    imageFormat = ReadU16(stream);
    fn_8268B330(&prefix);
    fn_8268B330(&swfName);
    fn_826E8660(stream, &prefix);
    fn_826E8660(stream, &swfName);
    fn_826C8C70(stream,
                "  ExportInfo: tagType = %d, tool ver = %d.%d, imgfmt = %d, prefix = '%s', swfname = '%s',"
                " flags = 0x%X\n",
                tagType, version >> 8, version & 0xff, imageFormat, Text(&prefix), Text(&swfName), flags);
    fn_826E3F28(info, version, imageFormat, Text(&swfName), Text(&prefix), flags);
    Release(&swfName);
    Release(&prefix);
}
