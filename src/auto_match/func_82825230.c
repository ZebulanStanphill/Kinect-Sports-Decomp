void fn_82825230(int value, unsigned char *out)
{
    int magnitude;
    int i;
    unsigned char byte;

    if (value < 0) {
        magnitude = -value;
    } else {
        magnitude = value;
    }
    for (i = 0; i < 4; i++) {
        byte = (unsigned char)(magnitude % 256);
        out[i] = byte;
        magnitude = (magnitude - byte) / 256;
    }
    if (value < 0) {
        out[3] |= 0x80;
    }
}
