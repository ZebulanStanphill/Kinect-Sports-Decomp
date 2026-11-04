#ifndef GAME_WRITER_82E6FC00_H
#define GAME_WRITER_82E6FC00_H

// Placeholder types for a big-endian output writer and the stream behind it.
// Named after the address of Put(); the names appear in the mangled symbol.

struct Stream_82E6FC00 {
    virtual void v00(); virtual void v04(); virtual void v08(); virtual void v0c();
    virtual void v10(); virtual void v14(); virtual void v18();
    virtual long Begin();
    virtual void v20(); virtual void v24(); virtual void v28(); virtual void v2c();
    virtual long Write(const void *buf, unsigned int n, unsigned int *written);
};

struct Writer_82E6FC00 {
    virtual void v00(); virtual void v04(); virtual void v08(); virtual void v0c();
    virtual void v10(); virtual void v14(); virtual void v18(); virtual void v1c();
    virtual void v20();
    virtual long Seek(__int64 pos, unsigned __int64 *out, int whence);
    char pad04[0x24];
    Stream_82E6FC00 *stream;
    char pad30[0x10];
    unsigned __int64 size;
    long Put(__int64 pos, unsigned int v);
};

#endif
