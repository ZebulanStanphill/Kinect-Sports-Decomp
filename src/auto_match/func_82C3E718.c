extern void *fn_82A68EA0(unsigned int, unsigned int);
extern void *memset(void *, int, unsigned int);

typedef struct Buffers_82C3E718 {
    unsigned int count; /* 0x00 */
    char reserved04[0x20];
    void *positions; /* 0x24 */
    void *indices;   /* 0x28 */
    void *values;    /* 0x2c */
    void *first;     /* 0x30 */
    void *second;    /* 0x34 */
} Buffers_82C3E718;

int fn_82C3E718(Buffers_82C3E718 *self, unsigned short count)
{
    int result = 0;
    self->count = count;
    self->first = fn_82A68EA0(count * 2, 0x40);
    if (self->first == 0) {
        result = 0x8007000e;
        goto done;
    }
    memset(self->first, 0, count * 2);
    self->second = fn_82A68EA0(count * 2, 0x40);
    if (self->second == 0) {
        result = 0x8007000e;
        goto done;
    }
    memset(self->second, 0, count * 2);
    self->positions = fn_82A68EA0(count * 8, 0x40);
    if (self->positions == 0) {
        result = 0x8007000e;
        goto done;
    }
    memset(self->positions, 0, count * 8);
    self->indices = fn_82A68EA0(count * 4, 0x40);
    if (self->indices == 0) {
        result = 0x8007000e;
        goto done;
    }
    memset(self->indices, 0, count * 4);
    self->values = fn_82A68EA0(count * 4, 0x40);
    if (self->values == 0) {
        result = 0x8007000e;
        goto done;
    }
    memset(self->values, 0, count * 4);
done:
    return result;
}
