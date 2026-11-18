typedef struct Config_82C3D9B0 {
    char pad0[0x22];
    unsigned short size; /* 0x22 */
} Config_82C3D9B0;

typedef struct Buffers_82C3D9B0 {
    int count; /* 0x00 */
    char pad4[0x18 - 0x4];
    void *weights;    /* 0x18 */
    void *current;    /* 0x1c */
    void *previous;   /* 0x20 */
    void *rowSums;    /* 0x24 */
    void *columnSums; /* 0x28 */
    void *offsets;    /* 0x2c */
} Buffers_82C3D9B0;

extern void *fn_82A68EA0(unsigned int size, unsigned int alignment);
extern void *memset(void *dst, int value, unsigned int size);

int fn_82C3D9B0(Config_82C3D9B0 *config, Buffers_82C3D9B0 *self, short count)
{
    int result = 0;

    self->count = count;
    self->current = fn_82A68EA0(config->size * config->size * count * 2, 0x40);
    if (self->current == 0) {
        result = 0x8007000e;
        goto done;
    }
    memset(self->current, 0, config->size * config->size * count * 2);
    self->previous = fn_82A68EA0(config->size * config->size * count * 2, 0x40);
    if (self->previous == 0) {
        result = 0x8007000e;
        goto done;
    }
    memset(self->previous, 0, config->size * config->size * count * 2);
    self->rowSums = fn_82A68EA0(config->size * config->size * 2, 0x40);
    if (self->rowSums == 0) {
        result = 0x8007000e;
        goto done;
    }
    memset(self->rowSums, 0, config->size * config->size * 2);
    self->columnSums = fn_82A68EA0(config->size * config->size * 2, 0x40);
    if (self->columnSums == 0) {
        result = 0x8007000e;
        goto done;
    }
    memset(self->columnSums, 0, config->size * config->size * 2);
    self->weights = fn_82A68EA0(config->size * count * 8, 0x40);
    if (self->weights == 0) {
        result = 0x8007000e;
        goto done;
    }
    memset(self->weights, 0, config->size * count * 8);
    self->offsets = fn_82A68EA0(config->size * count * 4, 0x40);
    if (self->offsets == 0) {
        result = 0x8007000e;
        goto done;
    }
    memset(self->offsets, 0, config->size * count * 4);
done:
    return result;
}
