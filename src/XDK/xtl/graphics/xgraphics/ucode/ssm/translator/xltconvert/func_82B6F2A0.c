typedef struct Swizzle_82B6F2A0 {
    unsigned int pad : 18;
    unsigned int z : 2; /* bits 13-12 */
    unsigned int pad2 : 2;
    unsigned int y : 2; /* bits 9-8 */
    unsigned int pad3 : 2;
    unsigned int x : 2; /* bits 5-4 */
    unsigned int pad4 : 2;
    unsigned int w : 2; /* bits 1-0 */
} Swizzle_82B6F2A0;

unsigned char fn_82B6F2A0(Swizzle_82B6F2A0 *swizzle)
{
    unsigned char result = swizzle->w;

    switch (swizzle->x) {
    case 0:
        result |= 0xc;
        break;
    case 1:
        result |= 0x0;
        break;
    case 2:
        result |= 0x4;
        break;
    case 3:
        result |= 0x8;
        break;
    }
    switch (swizzle->y) {
    case 0:
        result |= 0x20;
        break;
    case 1:
        result |= 0x30;
        break;
    case 2:
        result |= 0x0;
        break;
    case 3:
        result |= 0x10;
        break;
    }
    switch (swizzle->z) {
    case 0:
        result |= 0x40;
        break;
    case 1:
        result |= 0x80;
        break;
    case 2:
        result |= 0xc0;
        break;
    case 3:
        result |= 0x0;
        break;
    }
    return result;
}
