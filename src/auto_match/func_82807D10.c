typedef struct Header_82807D10 {
    char pad0[0x1e];
    unsigned short count;
} Header_82807D10;

unsigned int fn_82807D10(Header_82807D10 *self, unsigned char **cursor)
{
    unsigned int bits = 0;
    unsigned char *p = *cursor;
    int i = 0;
    unsigned int shift = 0;

    for (; i < self->count; i += 9, shift += 24) {
        bits |= *p << shift;
        switch ((bits >> shift) & 3) {
        case 0:
            break;
        case 1:
            bits |= *++p << 16;
            break;
        case 2:
            bits |= *++p << 8;
            break;
        case 3:
            bits |= *++p << 8;
            bits |= *++p << 16;
            break;
        default:
            continue;
        }
        p++;
    }
    *cursor = p;
    return bits;
}
