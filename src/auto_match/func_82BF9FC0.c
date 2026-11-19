typedef struct File_82BF9FC0 {
    unsigned int remaining; /* 0x0 */
    unsigned short pad4;
    unsigned short cluster; /* 0x6 */
    unsigned short offset;  /* 0x8 */
    char padA[0xf - 0xa];
    unsigned char failed; /* 0xf */
} File_82BF9FC0;

extern char lbl_83231D48[];
extern unsigned short lbl_8322BCF8[];
extern void RtlEnterCriticalSection(void *section);
extern void RtlLeaveCriticalSection(void *section);
extern int fn_82BF9620(unsigned int cluster, File_82BF9FC0 *file, int isNew, char **buffer);
extern void *memcpy(void *dst, const void *src, unsigned int size);

unsigned int fn_82BF9FC0(File_82BF9FC0 *file, const char *data, unsigned int size)
{
    char *buffer;
    unsigned int remaining;
    unsigned int cluster;
    unsigned int offset;
    unsigned int chunk;
    unsigned int result;

    RtlEnterCriticalSection(lbl_83231D48);
    remaining = file->remaining;
    cluster = file->cluster;
    offset = file->offset;
    while (size != 0 && file->failed == 0) {
        if (offset == 0x2000) {
            offset = 0;
            cluster = lbl_8322BCF8[cluster];
        }
        if (fn_82BF9620(cluster, file, offset == 0, &buffer) == 0) {
            file->failed = 1;
            break;
        }
        chunk = 0x2000 - offset;
        if (chunk > size) {
            chunk = size;
        }
        memcpy(buffer + offset, data, chunk);
        size -= chunk;
        data += chunk;
        offset += chunk;
        remaining -= chunk;
    }
    file->remaining = remaining;
    file->cluster = cluster;
    file->offset = offset;
    result = file->failed != 0 ? 0x8008 : 0;
    RtlLeaveCriticalSection(lbl_83231D48);
    return result;
}
