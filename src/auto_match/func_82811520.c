void fn_82811520(unsigned char *dst, unsigned char *src, unsigned int bit, unsigned int skip,
                 unsigned int count)
{
    unsigned char *in;
    unsigned char *out;
    unsigned int shift;
    unsigned int back;
    unsigned int bytes;
    unsigned int rest;

    if (skip != 0) {
        return;
    }
    in = src;
    shift = bit & 7;
    bytes = count >> 3;
    rest = count & 7;
    back = 8 - shift;
    out = dst + (bit >> 3);
    for (; bytes != 0; bytes--) {
        *out = (unsigned char)(*in >> (unsigned char)shift) | *out;
        out++;
        *out = (unsigned char)(*in << back) | *out;
        in++;
    }
    *out = (unsigned char)(*in >> (unsigned char)shift) | *out;
    if (rest >= back) {
        out++;
        *out = (unsigned char)(*in << back) | *out;
    }
}
