typedef struct Output_82DA0180 {
    int unused;
    int size; /* 0x4 */
} Output_82DA0180;

extern int fn_82DA00E0(unsigned short *atom, Output_82DA0180 *out);

int fn_82DA0180(unsigned short *atom, Output_82DA0180 *out, unsigned char *flags)
{
    int result = 0;
    switch (*atom) {
    case 0x19:
        *flags |= 0x10;
        break;
    case 0x17:
        *flags |= 8;
        break;
    case 0x18:
        out->size += 0x50;
        *flags |= 1;
        break;
    case 0x1a:
        out->size += 0x50;
        *flags |= 4;
        break;
    case 0x1b:
        result = fn_82DA00E0(atom, out);
        break;
    case 0x1c:
        out->size += 0xd0;
        *flags |= 2;
        break;
    }
    return result;
}
