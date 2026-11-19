#include <string.h>

typedef struct Weights_829EE088 {
    int status;           /* 0x00 */
    char allocator[0x14]; /* 0x04 */
    float *weights;       /* 0x18 */
    int count;            /* 0x1c */
    int active;           /* 0x20 */
} Weights_829EE088;

extern float *fn_829EC0F8(void *allocator, unsigned int size, int a, int b);

int fn_829EE088(Weights_829EE088 *self, int count, int active, const float *initial)
{
    int hr;
    unsigned int size;

    if (count < 1 || active < 0 || active >= count) {
        hr = 0x80070057;
        self->status = hr;
        return hr;
    }
    size = count * 4;
    self->weights = fn_829EC0F8(self->allocator, size, 1, 1);
    if (self->weights == 0) {
        self->active = 0;
        hr = 0x8007000E;
        self->status = hr;
        self->count = 0;
        return hr;
    }
    self->active = active;
    self->count = count;
    memset(self->weights, 0, size);
    self->weights[self->active] = 1.0f;
    if (initial != 0) {
        memcpy(self->weights, initial, self->count * 4);
    }
    return 0;
}
