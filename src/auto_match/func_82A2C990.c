typedef struct Volume_82A2C990 {
    char pad0[0xce];
    unsigned char shift; /* 0xce */
} Volume_82A2C990;

unsigned int fn_82A2C990(Volume_82A2C990 *self, unsigned int count, unsigned int level)
{
    unsigned int shift;
    unsigned int blocks;
    unsigned int groups;

    shift = self->shift;
    if (level == 0) {
        groups = count / 0xaa;
        blocks = groups << shift;
        if (groups != 0) {
            groups = count / 0x70e4;
            blocks += (groups + 1) << shift;
            if (groups != 0) {
                blocks += 1 << shift;
            }
        }
    } else if (level == 1) {
        blocks = (count / 0x70e4 * 0xab + 1) << shift;
        if (count >= 0x4af768) {
            blocks += 1 << shift;
        }
    } else {
        blocks = (0xaa << shift) + (1 << shift);
    }
    return blocks;
}
