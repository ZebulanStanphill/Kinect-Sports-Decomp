typedef struct Element_829D3EC8 {
    int type; /* 0x0 */
    int size; /* 0x4 */
} Element_829D3EC8;

typedef struct Layout_829D3EC8 {
    int m0;                       /* 0x0 */
    unsigned int count;           /* 0x4 */
    Element_829D3EC8 elements[1]; /* 0x8 */
} Layout_829D3EC8;

int fn_829D3EC8(Layout_829D3EC8 *self, unsigned int *firstOffset, unsigned int *secondOffset, int *totalSize)
{
    unsigned int first = 0xffffffff;
    unsigned int second = 0xffffffff;
    int offset = 0;
    unsigned int i;

    for (i = 0; i < self->count; i++) {
        if (self->elements[i].type == 0) {
            if (first != 0xffffffff) {
                return 0;
            }
            first = offset;
        } else if (self->elements[i].type == 1) {
            if (second != 0xffffffff) {
                return 0;
            }
            second = offset;
        }
        offset += self->elements[i].size;
    }
    if (firstOffset != 0) {
        *firstOffset = first;
    }
    if (secondOffset != 0) {
        *secondOffset = second;
    }
    if (totalSize != 0) {
        *totalSize = offset;
    }
    return 1;
}
