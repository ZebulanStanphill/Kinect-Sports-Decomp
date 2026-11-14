#include <string.h>

struct Key_826EB300 {
    char pad[0x5c];
    unsigned char kind;
    unsigned char length;
    unsigned char bytes[2];
    unsigned char *data;
};

unsigned char fn_826EB300(struct Key_826EB300 *self, int kind, const unsigned char *data, unsigned int length)
{
    if (kind != self->kind || length != self->length) {
        return 0;
    }
    if (length <= 6) {
        return memcmp(data, self->bytes, length) == 0;
    }
    return memcmp(self->data, data, length) == 0;
}
