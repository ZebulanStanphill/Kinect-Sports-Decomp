typedef struct Owner_827F05E0 {
    char pad0[0xa0];
    unsigned int items[0x12];               /* 0xa0 */
    unsigned short count;                   /* 0xe8 */
} Owner_827F05E0;

extern unsigned short fn_827F3C30(unsigned int item);
extern unsigned int fn_827F3C48(unsigned int item, unsigned short index);

int fn_827F05E0(Owner_827F05E0 *self, unsigned short index)
{
    unsigned int target = self->items[index];
    int i;
    int j;

    for (i = self->count - 1; i >= 0; i--) {
        if (i != index) {
            for (j = fn_827F3C30(self->items[i]) - 1; j >= 0; j--) {
                if (fn_827F3C48(self->items[i], (unsigned short)j) == target)
                    return 1;
            }
        }
    }
    return 0;
}
