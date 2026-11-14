unsigned int fn_82AF49A8(unsigned int word, unsigned int flags)
{
    unsigned int state = word & 3;

    if (flags & 1) {
        state = (word & 1) | 2;
    }
    if ((flags & 2) && state != 3) {
        state = 2;
    }
    if ((flags & 4) && state != 3) {
        if (state & 1) {
            state = 2;
        } else {
            state = (state >> 1) & 1;
        }
    }
    return (word & ~3) | state;
}
