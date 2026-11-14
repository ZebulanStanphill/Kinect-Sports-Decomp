typedef struct Buffers_82E06BF8 {
    char pad[0x8];
    char *base8;        /* 0x8 */
    char padc[0x8];
    char *base14;       /* 0x14 */
    char pad18[0x8];
    char *base20;       /* 0x20 */
    char pad24[0x8];
    char *base2c;       /* 0x2c */
    char pad30[0x8];
    char *base38;       /* 0x38 */
} Buffers_82E06BF8;

typedef struct Element_82E06BF8 {
    unsigned int offset;    /* 0x0 */
    unsigned short type;    /* 0x4 */
} Element_82E06BF8;

void *fn_82E06BF8(Buffers_82E06BF8 *self, Element_82E06BF8 *element)
{
    char *base;

    switch (element->type) {
    case 1:
        base = self->base38;
        break;
    case 2:
        base = self->base2c;
        break;
    case 3:
        base = self->base20;
        break;
    case 4:
    case 5:
        base = self->base14;
        break;
    case 6:
    case 7:
        base = self->base8;
        break;
    default:
        return 0;
    }
    return base + element->offset;
}

