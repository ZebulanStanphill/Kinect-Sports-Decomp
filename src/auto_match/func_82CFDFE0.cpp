#include "havok/hkOArchive.h"

static __forceinline void swapBytes(unsigned char *a, unsigned char *b)
{
    unsigned char t = *a;

    *a = *b;
    *b = t;
}

void hkOArchive::writeArrayGeneric(const void *data, int elemSize, int count)
{
    unsigned char buf[0x200];
    const char *src;
    int remaining;
    int chunkBytes;
    int chunkCount;
    int lastBytes;
    int lastCount;
    int i;

    if (!m_byteSwap) {
        m_writer->write(data, elemSize * count);
        return;
    }
    src = (const char *)data;
    remaining = elemSize * count;
    chunkBytes = 0x200;
    chunkCount = 0x200 / elemSize;
    lastBytes = remaining % 0x200;
    lastCount = lastBytes / elemSize;
    while (remaining > 0) {
        if (remaining < 0x200) {
            chunkBytes = lastBytes;
            chunkCount = lastCount;
        }
        hkString::memCpy(buf, src, chunkBytes);
        switch (elemSize) {
        case 2: {
            unsigned char *q = buf;

            for (i = 0; i < chunkCount; i++) {
                swapBytes(&q[0], &q[1]);
                q += 2;
            }
            break;
        }
        case 4: {
            unsigned char *q = buf;

            for (i = 0; i < chunkCount; i++) {
                swapBytes(&q[0], &q[3]);
                swapBytes(&q[1], &q[2]);
                q += 4;
            }
            break;
        }
        case 8: {
            unsigned char *q = buf;

            for (i = 0; i < chunkCount; i++) {
                swapBytes(&q[0], &q[7]);
                swapBytes(&q[1], &q[6]);
                swapBytes(&q[2], &q[5]);
                swapBytes(&q[3], &q[4]);
                q += 8;
            }
            break;
        }
        }
        m_writer->write(buf, chunkBytes);
        remaining -= chunkBytes;
        src += chunkBytes;
    }
}
