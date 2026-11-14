typedef struct Caps_82BC2EF0 {
    char pad0[0x860];
    unsigned char extended;
} Caps_82BC2EF0;
typedef struct Compiler_82BC2EF0 {
    char pad0[0xab0];
    Caps_82BC2EF0 *caps;
} Compiler_82BC2EF0;
int fn_82BC2EF0(int kind, Compiler_82BC2EF0 *c)
{
    if (c->caps->extended) {
        switch (kind) {
        case 4:
        case 0x13:
        case 0x14:
        case 0x17:
        case 0x18:
        case 0x20:
        case 0x21:
            return 4;
        case 5:
        case 6:
        case 7:
        case 9:
        case 0x2b:
        case 0x2c:
            return kind;
        case 8:
        case 0x15:
        case 0x16:
            return 8;
        default:
            return 0x30;
        }
    } else {
        switch (kind) {
        case 7:
            return 7;
        case 8:
            return 8;
        default:
            return 0x30;
        }
    }
}
