typedef union Flags_82996A48 {
    unsigned int all;

    struct {
        unsigned int high : 18;
        unsigned int bit13 : 1;
        unsigned int low : 13;
    } bits;
} Flags_82996A48;

typedef struct Caps_82996A48 {
    char pad0[0x28];
    int value28; /* 0x28 */
    int value2c; /* 0x2c */
    int value30; /* 0x30 */
    char pad34[0x4];
    int value38; /* 0x38 */
    int value3c; /* 0x3c */
    char pad40[0x4];
    int value44; /* 0x44 */
    int value48; /* 0x48 */
    int value4c; /* 0x4c */
    int value50; /* 0x50 */
    char pad54[0x10];
    int value64; /* 0x64 */
    char pad68[0x4];
    Flags_82996A48 flags6c; /* 0x6c */
    unsigned int flags70;   /* 0x70 */
    char pad74[0x54];
    unsigned int version; /* 0xc8 */
    unsigned int flagscc; /* 0xcc */
    char padd0[0x3c];
    unsigned int version10c; /* 0x10c */
} Caps_82996A48;

int fn_82996A48(Caps_82996A48 *caps)
{
    unsigned int version;

    caps->value28 = 2;
    caps->value30 = 0;
    caps->version10c = caps->version;
    caps->value2c = 0x18;
    caps->value38 = 8;
    caps->value48 = 1;
    caps->value64 = 0x40;
    caps->flags6c.all = (caps->flags6c.all & 0xbdffffff) | 0x289a4734;
    caps->flags70 |= 0x8000000;
    caps->flagscc |= 0x100;
    version = caps->version & 0xffff;
    if (version == 0x104) {
        caps->value44 = 8;
        caps->value50 = 0;
        caps->value3c = 6;
        caps->value4c = 6;
        caps->flags6c.all = (caps->flags6c.all & 0xedffc77f) | 0x4058000;
    } else {
        caps->value50 = 2;
        caps->value3c = 4;
        caps->value4c = 4;
        caps->value44 = 6;
        caps->flags6c.bits.bit13 = version == 0x101;
        caps->flags6c.all = (caps->flags6c.all & ~0x58000) | 0x14001882;
    }
    return 0;
}
