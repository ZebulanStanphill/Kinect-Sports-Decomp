typedef struct Key_826A7720 {
    char pad[8];
    unsigned short code;
    unsigned char ch;
} Key_826A7720;

unsigned char fn_826A7720(const Key_826A7720 *key)
{
    unsigned char result = 0;
    switch (key->code) {
    case 0x8:
        result = 0x8;
        break;
    case 0x9:
        result = 0x12;
        break;
    case 0xd:
        result = 0xd;
        break;
    case 0x1b:
        result = 0x13;
        break;
    case 0x21:
        result = 0x10;
        break;
    case 0x22:
        result = 0x11;
        break;
    case 0x23:
        result = 0x4;
        break;
    case 0x24:
        result = 0x3;
        break;
    case 0x25:
        result = 0x1;
        break;
    case 0x26:
        result = 0xe;
        break;
    case 0x27:
        result = 0x2;
        break;
    case 0x28:
        result = 0xf;
        break;
    case 0x2d:
        result = 0x5;
        break;
    case 0x2e:
        result = 0x6;
        break;
    default:
        if (key->ch >= 0x20)
            result = key->ch;
        break;
    }
    return result;
}
