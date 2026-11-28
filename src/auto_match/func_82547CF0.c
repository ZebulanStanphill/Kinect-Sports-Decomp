unsigned int fn_82547CF0(unsigned int x, unsigned int y, unsigned int width, unsigned int pitch)
{
    int logPitch = 31 - _CountLeadingZeros(pitch);
    unsigned int micro = (((y & 6) << 2) + (x & 7)) << logPitch;
    unsigned int macro = ((width + 31) >> 5) * (y >> 5) + (x >> 5);
    unsigned int offset = (macro << (logPitch + 7)) + (((y & 1) << 3) + (micro & ~15u)) * 2 +
                          ((y & 8) << (logPitch + 3)) + (micro & 15);
    return (((y & 16) * 16 + (offset & ~511u)) * 2 + (offset & 448)) * 4 +
               ((((y << 1) & 0xfffffff0u) + x) << 3 & 0xc0) + (offset & 63) >>
           logPitch;
}
