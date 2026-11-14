typedef struct Owner_827F07F8 {
    char pad0[0xa0];
    unsigned int items[0x12];               /* 0xa0 */
    unsigned short count;                   /* 0xe8 */
} Owner_827F07F8;

unsigned short fn_827F07F8(Owner_827F07F8 *self, unsigned int item)
{
    int i;
    for (i = self->count - 1; i >= 0; i--) {
        if (self->items[i] == item) {
            return (unsigned short)i;
        }
    }
    return 0xffff;
}
