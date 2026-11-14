typedef struct Buffer_82A93980 {
    unsigned int common;
    unsigned int refCount;
    unsigned int f08;
    unsigned int f0c;
    unsigned int f10;
    unsigned int flush;
    unsigned int address;
    unsigned int size;
} Buffer_82A93980;

extern void *memset(void *, int, unsigned int);

void fn_82A93980(unsigned int length, unsigned int usage, unsigned int format, unsigned int pool, unsigned int offset, Buffer_82A93980 *buf)
{
    memset(buf, 0, sizeof(*buf));
    buf->size = length;
    buf->refCount = 1;
    buf->common = 2;
    if (usage & 4) buf->common = 0x200002;
    if (usage & 0x200) buf->common |= 0x400000;
    buf->common |= format << 29;
    buf->address = offset;
    buf->flush = 0xffff0000;
}
