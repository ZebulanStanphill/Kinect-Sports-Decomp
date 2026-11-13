typedef struct Owner_8263CB10 {
    unsigned char pad[0x18];
    int object;
    unsigned int bits;
} Owner_8263CB10;

extern void fn_8263BE98(int object, unsigned int index, unsigned int kind, int *out, int *box, int arg);

void fn_8263CB10(Owner_8263CB10 *self, int *out, int *box, int arg)
{
    fn_8263BE98(self->object, (self->bits >> 22) & 0x3f, self->bits >> 28, out, box, arg);
}
