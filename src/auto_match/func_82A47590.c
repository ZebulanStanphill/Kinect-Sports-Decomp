/* Walks the 2048-byte packets of a stream from packet index first to the last whole packet before
   base + size and returns the bit position of the end of the last frame that starts in it. */
unsigned int fn_82A47590(unsigned char *base, unsigned int size, unsigned int first)
{
    unsigned char *packet = base + first * 0x800;
    unsigned int skip;
    unsigned int frames;
    unsigned int bit;
    unsigned int index;
    unsigned int shift;
    unsigned int bits;

    for (;;) {
        skip = (packet[3] + 1) * 0x800;
        if (packet + skip + 0x800 > base + size) {
            break;
        }
        packet += skip;
    }
    if ((packet[0] & 0xFC) == 0) {
        packet -= skip;
    }
    frames = packet[0] >> 2;
    bit = ((((packet[0] & 3) << 8) | packet[1]) << 5 | (packet[2] >> 3)) + 0x20;
    while (--frames != 0) {
        index = bit >> 3;
        shift = bit & 7;
        if (shift < 2) {
            bits = (unsigned int)(packet[index] << 8 | packet[index + 1]) >> (1 - shift);
        } else {
            bits = (unsigned int)((packet[index] << 8 | packet[index + 1]) << 8 | packet[index + 2]) >>
                   (9 - shift);
        }
        bit += bits & 0x7FFF;
    }
    return (packet - base) * 8 + bit;
}
