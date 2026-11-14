typedef struct {
    unsigned int flags;
    unsigned int modes;
} Desc_82BD34B0;

unsigned int fn_82BD34B0(const Desc_82BD34B0 *desc, unsigned int index)
{
    if (desc->flags & 0x400000) {
        switch (index) {
        case 0:
            return desc->modes & 3;
        case 1:
            return (desc->modes >> 2) & 3;
        case 2:
            return (desc->modes >> 4) & 3;
        case 3:
            return (desc->modes >> 6) & 3;
        }
    }
    return 1;
}
