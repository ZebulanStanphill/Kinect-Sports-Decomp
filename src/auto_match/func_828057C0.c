typedef struct { char pad[0x1e]; unsigned short count; } Obj_828057C0;

int fn_828057C0(Obj_828057C0 *self, unsigned char bits, unsigned int pos)
{
    int n = 0;
    unsigned int mask;
    for (mask = 0x80; mask != 0x10; mask >>= 1) {
        if (pos >= self->count) {
            return n;
        }
        if ((bits & mask) != 0 && (bits & (mask >> 3)) == 0) {
            n++;
        }
        pos++;
    }
    return n;
}
