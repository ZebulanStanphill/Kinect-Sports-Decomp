typedef struct Object_8269A5C8 {
    char pad0[0x5C];
    float x; /* 0x5C */
    float y; /* 0x60 */
    char pad64[0x2];
    unsigned char flags; /* 0x66 */
} Object_8269A5C8;

void fn_8269A5C8(Object_8269A5C8 *self, float x, float y, unsigned char flag)
{
    self->x = x;
    self->y = y;
    self->flags = (self->flags & 0xF3) | (flag ? 8 : 4);
}
