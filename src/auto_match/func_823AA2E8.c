typedef struct Grid_823AA2E8 {
    char pad0[0x10];
    int value;                              /* 0x10 */
    char pad14[4];
    unsigned int used;                      /* 0x18 */
    unsigned int capacity;                  /* 0x1c */
    char pad20[8];
    int size;                               /* 0x28 */
} Grid_823AA2E8;

int fn_823AA2E8(Grid_823AA2E8 *self, unsigned int x, unsigned int y)
{
    unsigned int last = self->size - 1;
    if (x >= last && y >= last) {
        return self->value == 0;
    }
    if (self->used >= self->capacity) {
        return self->value == 0;
    }
    return self->value;
}
