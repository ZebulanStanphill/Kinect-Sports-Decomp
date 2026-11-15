typedef struct Object_82B8F618 {
    char pad[0x28];
    unsigned int *data;
} Object_82B8F618;

typedef struct Node_82B8F618 {
    char pad0[0x30];
    unsigned int index;
    char pad1[0xc];
    struct Node_82B8F618 *next;
} Node_82B8F618;

int fn_82B8F618(Object_82B8F618 *self, Node_82B8F618 *node)
{
    unsigned int *data = self->data;
    char *table = (char *)data + (((((*data & 0x7ffff) + 31) >> 3) & 0x1ffffffc) + 2) * 2;
    do {
        unsigned int index = node->index & 0x7ffff;
        unsigned int shift = (index & 15) * 2;
        unsigned int mask = (2U << ((index * 2 + 1) & 31)) - 1;
        unsigned int word = *(unsigned int *)(table + ((index >> 2) & 0x1ffffffc));
        unsigned int value = (mask & word & (0xffffffffU << shift)) >> shift;
        if (value == 0 || value == 3) {
            return 0;
        }
        node = node->next;
    } while (node != 0);
    return 1;
}
