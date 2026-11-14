#include <string.h>

typedef struct Self_829E9A20 {
    char pad[0x20];
    int count;              /* 0x20 */
} Self_829E9A20;

typedef struct Blob_829E9A20 {
    int pad;
    const void *data;       /* 0x4 */
} Blob_829E9A20;

unsigned char fn_829E9A20(Self_829E9A20 *self, const void *data, int count, Blob_829E9A20 *blob)
{
    return blob->data == 0 || count != self->count || memcmp(blob->data, data, self->count * 4) != 0;
}
