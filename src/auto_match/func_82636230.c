typedef struct Writer_82636230 {
    char pad0[0x4dbc];
    int status;
} Writer_82636230;

typedef struct Stream_82636230 {
    int f0;
    int f4;
    int f8;
    int headerSize;
    int f10;
    int f14;
    int f18;
    int f1c;
    int dataSize;
    int f24;
} Stream_82636230;

extern int fn_82636580(Writer_82636230 *self, Stream_82636230 *stream);

int fn_82636230(Writer_82636230 *self)
{
    Stream_82636230 stream;
    int headerSize;
    int dataSize;

    if (self->status < 0) {
        return 0;
    }
    stream.f0 = 0;
    stream.f4 = 0;
    stream.f8 = 0;
    stream.headerSize = 0;
    stream.f10 = 0;
    stream.f14 = 0;
    stream.f18 = 0;
    stream.f1c = 0;
    stream.dataSize = 0;
    stream.f24 = 0;
    dataSize = 0;
    headerSize = 0;
    if (fn_82636580(self, &stream) >= 0) {
        dataSize = stream.dataSize;
        headerSize = stream.headerSize;
    }
    return headerSize + dataSize;
}
