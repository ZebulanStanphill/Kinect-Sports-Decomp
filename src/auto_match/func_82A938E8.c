typedef struct Fetch_82A938E8 {
    unsigned int top : 4;
    unsigned int keep : 1;
    unsigned int zero : 1;
    unsigned int size : 24;
    unsigned int endian : 2;
} Fetch_82A938E8;

typedef struct Buffer_82A938E8 {
    unsigned int common;
    unsigned int refCount;
    unsigned int f08;
    unsigned int f0c;
    unsigned int f10;
    unsigned int flush;
    unsigned int address;
    Fetch_82A938E8 fetch;
} Buffer_82A938E8;

extern void *memset(void *, int, unsigned int);

void fn_82A938E8(unsigned int length, unsigned int usage, unsigned int pool, unsigned int offset, Buffer_82A938E8 *buf)
{
    memset(buf, 0, sizeof(*buf));
    buf->common = 1;
    if (usage & 4) buf->common = 0x200001;
    if (usage & 0x200) buf->common |= 0x400000;
    buf->refCount = 1;
    buf->flush = 0xffff0000;
    buf->address = offset | 3;
    buf->fetch.endian = 2;
    buf->fetch.size = length >> 2;
    buf->fetch.zero = 0;
    buf->fetch.top = 1;
}
