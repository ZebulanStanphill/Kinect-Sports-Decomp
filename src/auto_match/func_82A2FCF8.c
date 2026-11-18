#include <string.h>

typedef struct Page_82A2FCF8 {
    int block;           /* 0x0 */
    unsigned char locks; /* 0x4 */
    char pad5[0x3];
} Page_82A2FCF8;

typedef struct Cache_82A2FCF8 {
    char pad0[0x30];
    Page_82A2FCF8 *pages; /* 0x30 */
    char *base;           /* 0x34 */
} Cache_82A2FCF8;

typedef struct File_82A2FCF8 {
    char pad0[0x1c];
    unsigned int size; /* 0x1c */
} File_82A2FCF8;

extern int fn_82A2E6A8(Cache_82A2FCF8 *cache, File_82A2FCF8 *file, unsigned int offset, int *block,
                       unsigned int *location, int flags);
extern int fn_82A2E058(Cache_82A2FCF8 *cache, int block, char **page);

int fn_82A2FCF8(Cache_82A2FCF8 *self, File_82A2FCF8 *file, char *buffer, unsigned int size,
                unsigned int offset)
{
    unsigned int pageOffset;
    unsigned int chunk;
    int block;
    char *page;
    char *data;
    Page_82A2FCF8 *entry;
    unsigned int location[2];
    int hr;

    do {
        pageOffset = offset & 0xfff;
        chunk = 0x1000 - pageOffset;
        if (chunk > size) {
            chunk = size;
        }
        if (offset < file->size) {
            hr = fn_82A2E6A8(self, file, offset, &block, location, 0);
            if (hr < 0) {
                return hr;
            }
            hr = fn_82A2E058(self, block, &page);
            if (hr < 0) {
                return hr;
            }
            data = page;
            memcpy(buffer, data + pageOffset, chunk);
            entry = &self->pages[(data - self->base) / 0x1000];
            entry->locks--;
        } else {
            memset(buffer, 0, chunk);
        }
        size -= chunk;
        buffer += chunk;
        offset += chunk;
    } while (size != 0);
    return 0;
}
