typedef struct Obj_82A4F480 {
    int unk0;
    unsigned short unit;  /* 0x4 */
    unsigned short value; /* 0x6 */
} Obj_82A4F480;

extern unsigned int fn_82A68BE8(unsigned short value, unsigned short unit, unsigned int size, unsigned int *padding);

unsigned int fn_82A4F480(Obj_82A4F480 *self, unsigned int size)
{
    return fn_82A68BE8(self->value, self->unit, size, 0);
}
