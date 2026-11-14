int fn_82BE0220(unsigned int kind, unsigned int *a, unsigned int *b, unsigned int *c, unsigned int *d,
                unsigned int *e, unsigned int *f, unsigned int *g)
{
    unsigned int width, format, depth, stride, offset, mask, mode;
    switch (kind) {
    case 3:
        width = 0x280;
        format = 6;
        depth = 5;
        stride = 0x20;
        offset = 4;
        mode = 0x21;
        mask = 7;
        break;
    case 2:
        width = 0x280;
        format = 2;
        depth = 5;
        stride = 0x20;
        offset = 4;
        mode = 0x21;
        mask = 7;
        break;
    case 1:
        width = 0x140;
        format = 2;
        depth = 4;
        stride = 0x10;
        offset = 4;
        mask = -2;
        mode = 1;
        break;
    case 0:
        width = 0x140;
        format = 0;
        depth = 4;
        stride = 0x10;
        offset = 0;
        mask = 7;
        mode = 0x16;
        break;
    default:
        return 6;
    }
    *a = width;
    *b = format;
    *c = depth;
    *d = stride;
    *e = offset;
    *f = mask;
    *g = mode;
    return 0;
}
