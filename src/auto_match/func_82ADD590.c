typedef struct Self_82ADD590 {
    char pad[0x2b4];
    unsigned __int64 *bits;     /* 0x2b4: 2 bits per entry */
} Self_82ADD590;

unsigned int fn_82ADD590(Self_82ADD590 *self, unsigned int index)
{
    unsigned int bit = index * 2;
    return (unsigned int)(self->bits[bit / 64] >> (bit - (bit / 64) * 64)) & 3;
}
