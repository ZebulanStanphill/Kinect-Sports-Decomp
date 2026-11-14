typedef struct {
    int unk0;
    unsigned short value;
    unsigned short flags;
} Fixed_82755588;

float fn_82755588(const Fixed_82755588 *f)
{
    unsigned int value = f->value & 0xfff;
    if ((f->flags & 0x10) == 0)
        return (float)value;
    return (float)value * 0.0625f;
}
