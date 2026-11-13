typedef struct Owner_8263CB90 {
    unsigned char pad[0x18];
    int object;
    unsigned int bits;
} Owner_8263CB90;

extern void fn_8263BF28(int object, int kind, int *out, int *box, int index);

void fn_8263CB90(Owner_8263CB90 *self, int *out, int *box, int index)
{
    fn_8263BF28(self->object, self->bits >> 28, out, box, index);
}
