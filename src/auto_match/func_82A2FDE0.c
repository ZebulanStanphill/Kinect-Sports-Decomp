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
extern unsigned int fn_82A2BAF0(Cache_82A2FCF8 *cache, int block, int flag, char **page,
                                unsigned int *location);
extern int fn_82A2FCF8(Cache_82A2FCF8 *self, File_82A2FCF8 *file, char *buffer, unsigned int size,
                       unsigned int offset);
extern int fn_82A2FA90(Cache_82A2FCF8 *self, File_82A2FCF8 *file, char *buffer, unsigned int size,
                       unsigned int offset);

int fn_82A2FDE0(Cache_82A2FCF8 *self, File_82A2FCF8 *file, char *buffer, unsigned int size,
                unsigned int offset)
{
    unsigned int chunk;
    int block;
    char *page;
    Page_82A2FCF8 *entry;
    unsigned int location[2];
    int hr;

    if ((offset & 0xfff) != 0) {
        chunk = 0x1000 - (offset & 0xfff);
        hr = fn_82A2FCF8(self, file, buffer, chunk, offset);
        if (hr < 0) {
            return hr;
        }
        buffer += chunk;
        size -= chunk;
        offset += chunk;
    }
    do {
        hr = fn_82A2E6A8(self, file, offset, &block, location, 0);
        if (hr < 0) {
            return hr;
        }
        if (fn_82A2BAF0(self, block, 0, &page, location) == 0) {
            if (size >= 0x1000) {
                chunk = size & ~0xfff;
                hr = fn_82A2FA90(self, file, buffer, chunk, offset);
                if (hr < 0) {
                    return hr;
                }
                buffer += chunk;
                size -= chunk;
                offset += chunk;
            }
            break;
        }
        memcpy(buffer, page, 0x1000);
        size -= 0x1000;
        buffer += 0x1000;
        offset += 0x1000;
        entry = &self->pages[(page - self->base) / 0x1000];
        entry->locks--;
    } while (size >= 0x1000);
    if (size != 0) {
        hr = fn_82A2FCF8(self, file, buffer, size, offset);
        if (hr < 0) {
            return hr;
        }
    }
    return 0;
}
