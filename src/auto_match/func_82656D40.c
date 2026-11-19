typedef struct Ring_82656D40 {
    char pad0[0xe];
    unsigned short base; /* 0x0e */
    char pad10[0xb8 - 0x10];
    unsigned int marks[0x31]; /* 0xb8 */
    unsigned int offset;      /* 0x17c */
    unsigned int limit;       /* 0x180 */
    char pad184[0x254 - 0x184];
    unsigned int pad254 : 6; /* 0x254 */
    unsigned int index : 6;
    unsigned int count : 6;
    unsigned int rest : 14;
    char pad258[0x260 - 0x258];
    unsigned char flags; /* 0x260 */
} Ring_82656D40;

void fn_82656D40(Ring_82656D40 *self, unsigned int size)
{
    unsigned int index;
    unsigned int offset = size + self->offset;
    unsigned int end;
    unsigned int limit;

    self->offset = offset;
    end = (self->base + 0xac) * 0x200 + offset;
    index = self->index;
    if (index == self->count - 1) {
        limit = self->limit;
    } else {
        limit = 0xfff00000;
    }
    if (end < offset || (end > limit && limit != 0)) {
        self->marks[index] = offset;
        self->index = (self->index + 1) % self->count;
        if (self->index == 0) {
            self->offset = 0x800;
            self->flags |= 0x20;
        } else {
            self->offset = 0;
        }
    }
}
