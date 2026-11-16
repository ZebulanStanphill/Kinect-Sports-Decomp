extern int fn_82F65350(void);
extern void *memcpy(void *, const void *, unsigned int);

void fn_82424C80(unsigned char *first, unsigned char *end)
{
    unsigned char *current = first + 496;
    unsigned int count = 2;
    for (; current != end; current += 496, count++) {
        unsigned char temporary[496];
        unsigned int mask = 0x7fff;
        unsigned int random = fn_82F65350() & 0x7fff;
        unsigned char *selected;
        while (mask < count && mask != 0xffffffff) {
            random = (random << 15) | (fn_82F65350() & 0x7fff);
            mask = (mask << 15) | 0x7fff;
        }
        selected = first + (random % count) * 496;
        memcpy(temporary, current, 496);
        memcpy(current, selected, 496);
        memcpy(selected, temporary, 496);
    }
}
