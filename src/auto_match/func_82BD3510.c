typedef struct Desc_82BD3510 {
    unsigned int flags;
    unsigned int modes;
} Desc_82BD3510;

int fn_82BD3510(const Desc_82BD3510 *desc, unsigned int index)
{
    if (desc->flags & 0x400000) {
        switch (index) {
        case 0:
            return desc->modes & 7;
        case 1:
            return (desc->modes >> 4) & 7;
        case 2:
            return (desc->modes >> 8) & 7;
        case 3:
            return (desc->modes >> 12) & 7;
        }
    } else {
        switch (index) {
        case 0:
            return 0;
        case 1:
            return 1;
        case 2:
            return 2;
        case 3:
            return 3;
        }
    }
    return -1;
}
