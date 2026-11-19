/* GFx_InflateWrapper: inflates a stream from a file into the given buffer, then
   seeks the file back over the input it read but did not use. */
typedef struct ZStream_82684AD0 {
    unsigned char *next_in;
    unsigned int avail_in;
    unsigned int total_in;
    unsigned char *next_out;
    unsigned int avail_out;
    unsigned int total_out;
    char *msg;
    void *state;
    void *zalloc;
    void *zfree;
    void *opaque;
    int data_type;
    unsigned int adler;
    unsigned int reserved;
} ZStream_82684AD0;

typedef struct File_82684AD0 {
    char unk00[0x2c];
    int bufferPos;  /* 0x2C */
    int bufferSize; /* 0x30 */
    int filePos;    /* 0x34 */
} File_82684AD0;

extern int fn_826E6BC8(ZStream_82684AD0 *strm, void *opaque, unsigned char *out, unsigned int outSize);
extern int fn_826E7A08(File_82684AD0 *file, unsigned char *buffer, int size);
extern void fn_826E7B08(File_82684AD0 *file, int pos);
extern void fn_82684A58(File_82684AD0 *file, const char *format, ...);
extern int inflate(ZStream_82684AD0 *strm, int flush);
extern int inflateEnd(ZStream_82684AD0 *strm);

static __forceinline int Tell_82684AD0(File_82684AD0 *file)
{
    return file->filePos - file->bufferSize + file->bufferPos;
}

void fn_82684AD0(void *opaque, File_82684AD0 *file, unsigned char *out, unsigned int outSize)
{
    unsigned char buffer[0x20];
    ZStream_82684AD0 strm;
    int result;

    result = fn_826E6BC8(&strm, opaque, out, outSize);
    if (result != 0) {
        fn_82684A58(file, "Error: GFx_InflateWrapper() inflateInit() returned %d\n", result);
        return;
    }
    for (;;) {
        strm.next_in = buffer;
        strm.avail_in = fn_826E7A08(file, buffer, 0x20);
        result = inflate(&strm, 2);
        if (result == 1) {
            break;
        }
        if (result != 0) {
            fn_82684A58(file, "Error: GFx_InflateWrapper() Inflate() returned %d\n", result);
            if (strm.avail_in != 0) {
                fn_826E7B08(file, Tell_82684AD0(file) - strm.avail_in);
            }
            break;
        }
    }
    if (strm.avail_in != 0) {
        fn_826E7B08(file, Tell_82684AD0(file) - strm.avail_in);
    }
    result = inflateEnd(&strm);
    if (result != 0) {
        fn_82684A58(file, "Error: GFx_InflateWrapper() InflateEnd() return %d\n", result);
    }
}
