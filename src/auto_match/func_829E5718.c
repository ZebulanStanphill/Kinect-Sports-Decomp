#include <string.h>

typedef struct Buffer_829E5718 {
    unsigned int header[25];
    unsigned int counts[256];
} Buffer_829E5718;

typedef struct Owner_829E5718 {
    Buffer_829E5718 *first;
    Buffer_829E5718 *second;
    unsigned char active;
    char pad[3];
    unsigned int width;
    unsigned int height;
} Owner_829E5718;

extern int fn_829E5618(Owner_829E5718 *, const void *, unsigned int);

int fn_829E5718(Owner_829E5718 *self, unsigned int input, const void *data, unsigned int size)
{
    unsigned int index;
    unsigned int remaining;
    Buffer_829E5718 *buffer;
    int result;
    if (input == 0) {
        return 0x80070057;
    }
    if (data == 0) {
        return 0x80070057;
    }
    if (self->active && size == self->height * self->width) {
        buffer = self->first;
        self->first = self->second;
        self->second = buffer;
        memset(buffer, 0, 100);
        memset(buffer->counts, 0, 0x400);
        result = fn_829E5618(self, data, size);
        if (result < 0) {
            return result;
        }
        remaining = size >> 1;
        for (index = 0; index < remaining; ++index) {
            self->second->counts[*(unsigned char *)(input + index)]++;
        }
        return 0;
    }
    return 0x8000ffff;
}
