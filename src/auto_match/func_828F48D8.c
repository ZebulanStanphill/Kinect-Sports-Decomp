typedef struct Block_828F48D8 {
    unsigned char *begin;
    unsigned char *end;
    char pad[0x54];
    struct Block_828F48D8 *next;
} Block_828F48D8;

typedef struct {
    char pad[0x274];
    Block_828F48D8 *blocks;
} Owner_828F48D8;

int fn_828F48D8(Owner_828F48D8 *self, unsigned char **data, unsigned int *size)
{
    Block_828F48D8 *b = self->blocks;
    Block_828F48D8 *next;

    for (next = b->next; next != 0; next = next->next) {
        b = next;
    }
    if (data != 0) {
        *data = b->begin;
    }
    if (size != 0) {
        *size = b->end >= b->begin ? b->end - b->begin : 0;
    }
    return 0;
}
