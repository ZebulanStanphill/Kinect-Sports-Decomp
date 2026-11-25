typedef struct Stream_8282CF08 {
    char pad0[0x52];
    unsigned char enabled; /* 0x52 */
    char pad53[0x58 - 0x53];
    unsigned int position; /* 0x58 */
    char pad5c[0x68 - 0x5c];
    unsigned int limit; /* 0x68 */
    char pad6c[0x134 - 0x6c];
    unsigned char unk134 : 2; /* 0x134 */
    unsigned char readable : 1;
    unsigned char writable : 1;
    unsigned char seekable : 1;
    unsigned char unk134b : 3;
} Stream_8282CF08;

typedef union Request_8282CF08 {
    struct {
        bool read : 1;
        bool write : 1;
        bool seek : 1;
        bool close : 1;
        unsigned char unused : 4;
    } bits;

    unsigned char value;
} Request_8282CF08;

extern "C" void fn_8282C280(Stream_8282CF08 *self, const unsigned char *flags);
extern "C" int fn_8282C398(Stream_8282CF08 *self, const unsigned char *flags, int arg);
extern "C" void fn_8282C5F8(Stream_8282CF08 *self, const unsigned char *flags);

extern "C" int fn_8282CF08(Stream_8282CF08 *self, int mode, int arg)
{
    bool all;
    bool none;
    bool pastLimit;
    bool isRead;
    bool isWrite;
    bool isSeek;
    bool isClose;
    Request_8282CF08 request;
    int result;

    all = self->readable && self->writable && self->seekable;
    none = !self->readable && !self->writable && !self->seekable;
    if (!all) {
        pastLimit = self->enabled && self->position > self->limit;
        isRead = mode == 1;
        isWrite = mode == 2;
        isSeek = mode == 3;
        isClose = mode == 4;
        request.value = 0;
        request.bits.read =
            !pastLimit && !self->readable && ((isClose || isSeek) && self->writable || isRead);
        request.bits.write =
            !pastLimit && !self->writable && ((isClose || isSeek) && self->readable || isWrite);
        request.bits.seek = isSeek || isClose && none || (isRead || isWrite) && pastLimit;
        request.bits.close = isClose;
        if (request.value != 0) {
            fn_8282C280(self, &request.value);
            result = fn_8282C398(self, &request.value, arg);
            if (result != 0) {
                return result;
            }
            fn_8282C5F8(self, &request.value);
        }
    }
    return 0;
}
