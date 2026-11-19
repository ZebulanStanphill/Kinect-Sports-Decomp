typedef struct File_82BF9EC0 {
    unsigned int remaining; /* 0x00 */
    unsigned short pad4;    /* 0x04 */
    unsigned short cluster; /* 0x06 */
    unsigned short offset;  /* 0x08 */
    unsigned short padA;    /* 0x0a */
    unsigned short padC;    /* 0x0c */
    unsigned char flagE;    /* 0x0e */
    unsigned char failed;   /* 0x0f */
} File_82BF9EC0;

extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern int fn_82BF9620(unsigned int key, void *val, int noLoad, void **out);
extern void *memcpy(void *dst, const void *src, unsigned int size);
extern char lbl_83231D48[];
extern unsigned short lbl_8322BCF8[];

int fn_82BF9EC0(File_82BF9EC0 *self, unsigned char *buffer, unsigned int size)
{
    unsigned int remaining;
    unsigned int cluster;
    unsigned int offset;
    unsigned int chunk;
    unsigned char *data;
    int result;

    RtlEnterCriticalSection(lbl_83231D48);
    remaining = self->remaining;
    cluster = self->cluster;
    offset = self->offset;
    while (size != 0) {
        if (self->failed != 0) {
            break;
        }
        if (offset == 0x2000) {
            offset = 0;
            cluster = lbl_8322BCF8[cluster];
        }
        if (fn_82BF9620(cluster, 0, 0, (void **)&data) == 0) {
            self->failed = 1;
            break;
        }
        chunk = 0x2000 - offset;
        if (chunk > size) {
            chunk = size;
        }
        memcpy(buffer, data + offset, chunk);
        size -= chunk;
        buffer += chunk;
        offset += chunk;
        remaining -= chunk;
    }
    self->remaining = remaining;
    self->cluster = (unsigned short)cluster;
    self->offset = (unsigned short)offset;
    result = self->failed != 0 ? 0x8008 : 0;
    RtlLeaveCriticalSection(lbl_83231D48);
    return result;
}
