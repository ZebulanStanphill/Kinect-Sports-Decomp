/* Reads a little-endian 32-bit sign-magnitude integer. */
int fn_82825290(unsigned char *p)
{
    int i;
    int v = p[3] & 0x7f;
    for (i = 3; i > 0; i--) {
        v = p[i - 1] + (v << 8);
    }
    if (p[3] & 0x80) {
        return -v;
    }
    return v;
}
